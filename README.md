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

To compile under debian based linux.
install make and g++
```bash
sudo apt update
sudo apt install make cmake g++
```

Create a seperate make project, create a build directory and a unix sub directory and run cmake.

```bash
cd xbtbin2ascii
mkdir -p build/unix
cd build/unix
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

