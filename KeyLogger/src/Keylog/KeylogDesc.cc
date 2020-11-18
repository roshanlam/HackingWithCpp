#include "Keylog.hh"

Keylog::~Keylog(){
	delete this->fileOutput;
}
