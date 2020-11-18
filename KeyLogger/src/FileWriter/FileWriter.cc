#include "fileWriter.hh"

FileWriter::FileWriter(const char* fileName){
	this->outputFile.open(fileName);
	if(!this->outputFile.is_open()){
		cerr << "Error opening file!" << endl;
		exit(1);
	}
}
