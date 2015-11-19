# PYTHIA configuration file.
# Generated on Fri Nov 20 02:06:25 JST 2015 with the user supplied options:
# --prefix=/home/yoshitar/packages/pythia_v8.2.12
# --with-hepmc2=/home/yoshitar/packages/HepMC_v2.6.8
# --with-gzip
# --with-boost=/home/yoshitar/packages/boost_v1.59.0

# Install directory prefixes.
PREFIX_BIN=/home/yoshitar/packages/pythia_v8.2.12/bin
PREFIX_INCLUDE=/home/yoshitar/packages/pythia_v8.2.12/include
PREFIX_LIB=/home/yoshitar/packages/pythia_v8.2.12/lib
PREFIX_SHARE=/home/yoshitar/packages/pythia_v8.2.12/share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
ENABLE_SHARED=false
CXX=g++
CXX_COMMON=-O2 -ansi -pedantic -W -Wall -Wshadow -fPIC
CXX_SHARED=-shared
CXX_SONAME=-Wl,-soname
LIB_SUFFIX=.so

# EVTGEN configuration.
EVTGEN_USE=false
EVTGEN_BIN=
EVTGEN_INCLUDE=
EVTGEN_LIB=

# FASTJET3 configuration.
FASTJET3_USE=false
FASTJET3_BIN=
FASTJET3_INCLUDE=
FASTJET3_LIB=

# HEPMC2 configuration.
HEPMC2_USE=true
HEPMC2_BIN=/home/yoshitar/packages/HepMC_v2.6.8/bin/
HEPMC2_INCLUDE=/home/yoshitar/packages/HepMC_v2.6.8/include
HEPMC2_LIB=/home/yoshitar/packages/HepMC_v2.6.8/lib

# HEPMC3 configuration.
HEPMC3_USE=false
HEPMC3_BIN=
HEPMC3_INCLUDE=
HEPMC3_LIB=

# LHAPDF5 configuration.
LHAPDF5_USE=false
LHAPDF5_BIN=
LHAPDF5_INCLUDE=
LHAPDF5_LIB=
LHAPDF5_PLUGIN=LHAPDF5.h

# LHAPDF6 configuration.
LHAPDF6_USE=false
LHAPDF6_BIN=
LHAPDF6_INCLUDE=
LHAPDF6_LIB=
LHAPDF6_PLUGIN=LHAPDF5.h

# POWHEG configuration.
POWHEG_USE=false
POWHEG_BIN=
POWHEG_INCLUDE=
POWHEG_LIB=

# PROMC configuration.
PROMC_USE=false
PROMC_BIN=
PROMC_INCLUDE=
PROMC_LIB=

# ROOT configuration.
ROOT_USE=false
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

# GZIP configuration.
GZIP_USE=true
GZIP_BIN=
GZIP_INCLUDE=./
GZIP_LIB=./

# BOOST configuration.
BOOST_USE=true
BOOST_BIN=/home/yoshitar/packages/boost_v1.59.0/bin/
BOOST_INCLUDE=/home/yoshitar/packages/boost_v1.59.0/include
BOOST_LIB=/home/yoshitar/packages/boost_v1.59.0/lib
