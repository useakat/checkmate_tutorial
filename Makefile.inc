# PYTHIA configuration file.
# Generated on Thu Nov 12 14:40:53 JST 2015 with the user supplied options:
# --prefix=/home/yoshitar/packages/pythia_v8.2.00
# --with-hepmc2=/home/yoshitar/packages/HepMC_v2.6.8
# --with-gzip
# --with-boost=/home/yoshitar/packages/boost_v1.55.0

# Install directory prefixes.
PREFIX_BIN=/home/yoshitar/packages/pythia_v8.2.00/bin
PREFIX_INCLUDE=/home/yoshitar/packages/pythia_v8.2.00/include
PREFIX_LIB=/home/yoshitar/packages/pythia_v8.2.00/lib
PREFIX_SHARE=/home/yoshitar/packages/pythia_v8.2.00/share/Pythia8

# Compilation flags (see ./configure --help for further documentation).
ENABLE_SHARED=false
CXX=g++
CXX_COMMON=-O2 -ansi -pedantic -W -Wall -Wshadow -fPIC
CXX_SHARED=-shared
CXX_SONAME=-Wl,-soname
LIB_SUFFIX=.so

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

# LHAPDF6 configuration.
LHAPDF6_USE=false
LHAPDF6_BIN=
LHAPDF6_INCLUDE=
LHAPDF6_LIB=

# ROOT configuration.
ROOT_USE=false
ROOT_BIN=
ROOT_INCLUDE=
ROOT_LIB=

# BOOST configuration.
BOOST_USE=true
BOOST_BIN=/home/yoshitar/packages/boost_v1.55.0/bin/
BOOST_INCLUDE=/home/yoshitar/packages/boost_v1.55.0/include
BOOST_LIB=/home/yoshitar/packages/boost_v1.55.0/lib

# GZIP configuration.
GZIP_USE=true
GZIP_BIN=
GZIP_INCLUDE=./
GZIP_LIB=./
