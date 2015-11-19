// Copyright (C) 2014 Peter Skands, Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL version 2, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

#include "Pythia8/Pythia.h"
#include "Pythia8Plugins/HepMC2.h"

using namespace Pythia8;

int main(int argc, char* argv[]) {

  // Check that correct number of command-line arguments
  if (argc != 3) {
    cerr << " Unexpected number of command-line arguments. \n You are"
         << " expected to provide one input and one output file name. \n"
         << " Program stopped! " << endl;
    return 1;
  }

  // Check that the provided input name corresponds to an existing file.
  ifstream is(argv[1]);
  if (!is) {
    cerr << " Command-line file " << argv[1] << " was not found. \n"
         << " Program stopped! " << endl;
    return 1;
  }

  // Confirm that external files will be used for input and output.
  cout << "\n >>> PYTHIA settings will be read from file " << argv[1]
       << " <<< \n >>> HepMC events will be written to file "
       << argv[2] << " <<< \n" << endl;

  // Interface for conversion from Pythia8::Event to HepMC event.
  HepMC::Pythia8ToHepMC ToHepMC;

  // Specify file where HepMC events will be stored.
  HepMC::IO_GenEvent ascii_io(argv[2], std::ios::out);

  // Generator. Shorthand for the event.
  Pythia pythia;
  Event& event = pythia.event;

  // Read in commands from external file.
  pythia.readFile(argv[1]);
  //  pythia.readFile("main24.cmnd");

  // Extract settings to be used in the main program.
  int nEvent   = pythia.mode("Main:numberOfEvents");
  int nAbort   = pythia.mode("Main:timesAllowErrors");
  double eCM   = pythia.parm("Beams:eCM");

  // Initialize.
  pythia.init();

  // Histograms.
  double epTol = 1e-6 * eCM;
  Hist epCons("deviation from energy-momentum conservation",100,0.,epTol);
  //Hist nFinal("final particle multiplicity",100,-0.5,799.5);
  //Hist dnparticledy("dn/dy for particles",100,-10.,10.);

  // Begin event loop.
  int iAbort = 0;
  for (int iEvent = 0; iEvent < nEvent; ++iEvent) {

    // Generate events. Quit if failure.
    if (!pythia.next()) {

      // If failure because reached end of file then exit event loop.
      if (pythia.info.atEndOfFile()) {
        cout << " Aborted since reached end of Les Houches Event File\n";
        break;
      }

      // First few failures write off as "acceptable" errors, then quit.
      if (++iAbort < nAbort) continue;
      cout << " Event generation aborted prematurely, owing to error!\n";
      break;
    }

    // // Loop over final particles in the event.
    // int nFin = 0;
    // Vec4 pSum;
    // for (int i = 0; i < event.size(); ++i) if (event[i].isFinal()) {
    //   nFin++;
    //   pSum += event[i].p();
    //   dnparticledy.fill(event[i].y());
    // }

    // // Check and print event with too big energy-momentum deviation.
    // nFinal.fill(nFin);
    // double epDev = abs(pSum.e() - eCM) + abs(pSum.px()) + abs(pSum.py())
    //   + abs(pSum.pz());
    // epCons.fill(epDev);
    // if (epDev > epTol) {
    //   cout << " Warning! Event with epDev = " << scientific
    //        << setprecision(4) << epDev << " now listed:";
    //   event.list();
    // }

    // Construct new empty HepMC event and fill it.
    // Units will be as chosen for HepMC build, but can be changed
    // by arguments, e.g. GenEvt( HepMC::Units::GEV, HepMC::Units::MM)
    HepMC::GenEvent* hepmcevt = new HepMC::GenEvent();
    ToHepMC.fill_next_event( pythia, hepmcevt );

    // Write the HepMC event to file. Done with it.
    ascii_io << hepmcevt;
    delete hepmcevt;

  // End of event loop.
  }
  // Final statistics and histogram output.
  pythia.stat();
  //  cout << epCons << nFinal << dnparticledy;

  // Done.
  return 0;
}

