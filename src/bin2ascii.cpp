//============================================================================
// Name        : bin2ascii.cpp
// Author      : Pedro Pena
// Version     :
// Copyright   :
// Description : bin2ascii in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

#include <BinDecoder.h>
#include <FormatConverter.h>
#include <XBTProfile.h>

int main(int argc, char *argv[]) {

	std::string fileName = "";
	int type = 0;
	double salinity = 35.0;

	if (argc == 1) {
		std::cout << "you must provide an amverseas bin file" << std::endl;
		return 1;
	}

	if (argc > 1) {
		fileName = argv[1];
	}

	if (argc > 2) {

		type = std::stoi(argv[2]);

	}

	if (argc > 3) {
		salinity = std::atof(argv[3]);
	}

	BinDecoder *decodedXBTProfile = new BinDecoder(fileName); //pass profile as inline argument

	XBTProfile *xBTProfile = new XBTProfile();

	decodedXBTProfile->decodeXBTProfile(*xBTProfile);

	FormatConverter *fc = new FormatConverter(*xBTProfile);
	if (type == 0)
		std::cout << fc->getASCII() << std::endl;
	if (type == 1)
		std::cout << fc->getASCIIEDF(fileName, salinity) << std::endl;
	if (type == 2)
		std::cout << fc->getASCIINDC() << std::endl;
	return 0;
}
