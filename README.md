# xbtbin2ascii
This program converts amverseas XBT bin files to an ASCII output


Disclaimer
==========
This repository is a scientific product and is not official communication of the National Oceanic and
Atmospheric Administration, or the United States Department of Commerce. All NOAA GitHub project code is
provided on an ‘as is’ basis and the user assumes responsibility for its use. Any claims against the Department of
Commerce or Department of Commerce bureaus stemming from the use of this GitHub project will be governed
by all applicable Federal law. Any reference to specific commercial products, processes, or services by service
mark, trademark, manufacturer, or otherwise, does not constitute or imply their endorsement, recommendation or
favoring by the Department of Commerce. The Department of Commerce seal and logo, or the seal and logo of a
DOC bureau, shall not be used in any manner to imply endorsement of any commercial product or activity by
DOC or the United States Government.


-----------------------------------
**COMPILING**
------------------------------------
To compile and use this program you need to have the [xbtbinfileutils](https://github.com/pedrolpena/xbtbinfileutils) library installed.<br>
If you don't have it please click on the above link and follow the instructions to compile and install.

To clone and compile under debian based linux.
install make cmake git and g++
```bash
sudo apt update
sudo apt install make cmake g++ git
```
Clone the repository 
```bash
git clone https://github.com/pedrolpena/xbtbin2ascii.git
```
Create a seperate make project, create a build directory and a unix sub directory and run cmake.

```bash
cd xbtbin2ascii
mkdir -p build
cd build
```
Now you can create a makefile project.
```bash
cmake ../../
```
To compile issue the make command
```bash
make
```

To install 
```bash
sudo make install
```
The program should now be installed and in your path.

To display the AMVERSEAS ASCII format with the included profile.
```bash
bin2ascii profile.bin
```

To display the AMVERSEAS EDF format with the included profile.
```bash
bin2ascii profile.bin 1
```
If no salinity is provided then a salinity of 35.0 is used to calculate sound velocities.<br>
To specify a salinity of 34.4
```bash
bin2ascii profile.bin 1 34.4
```
To display the AMVERSEAS ASCII NDC format with the included profile.
```bash
bin2ascii profile.bin 2
```


