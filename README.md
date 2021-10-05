# MCNetwork

This code uses a Kinetic Monte Carlo simulation to estimate the behaviour of variable range hopping in Dopant Networks. More information can be found [here](https://www.researchsquare.com/article/rs-757616/latest.pdf).

## Installation
This installation guide has been written for Ubuntu on WSL2 (Windows Subsystem for Linux).

Install the dependencies through apt:
```bash
sudo apt-get install cmake libboost-all-dev libhdf5-serial-dev
```

Follow the building instructions for MFEM and GLVis which can be found [here](https://mfem.org/building/).

Note: GLVis 4.0 and up has extra dependencies which can be installed through apt:
```bash
sudo apt-get install libfontconfig1-dev libfreetype-dev libsdl2-dev libglew-dev libglm-dev libpng-dev
```

To build the project clone this repo and enter the project directory. Then use the following commands to build the project:
```bash
mkdir build
cd build
cmake ..
make
```

## Usage


## #TODO

### Technical:
- set "-D SWAPTRACKER" in cmake file
- improve argument parsing
- add log file
- support INT data format in datafile
- split up optimizer in child classes
- make one central hdf5 file to combine SWAPTRACKER and TiMETRACKER

### Optional
- count only output electrode current
- improve hash algorithm for storing mode
- in optimzer: store only control voltages
- in genetic algorithm: do not run unchanged genomes again
*/


## Contributors
- [Marlon Becker](https://github.com/MarlonBecker) [Westfälische Wilhelms-Universität Münster]
- [Jesse Bakker](https://github.com/Jesse-Bakker) [University of Twente]

## License
[APACHE LICENSE, VERSION 2.0](https://www.apache.org/licenses/LICENSE-2.0)