*HOW TO RUN
     < PYTHAI8 >
     cp $PYTHIA_DIR/share/Pythia8/examples/Makefile.inc .

     make main24_kai
     modify main24_kai.cmnd as you want
     ./main24_kai main24_kai.cmnd OUTPUT.hepmc

     < CheckMATE >
     ln -s $CHECKMATE_DIR/bin/CheckMATE .
     modify param.dat as you want
     ./CheckMATE param.dat

     See what happens...