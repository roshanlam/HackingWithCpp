#include "fileWriter.hh"

FileWriter::~FileWriter(){
	this->outputFile.close();
}
