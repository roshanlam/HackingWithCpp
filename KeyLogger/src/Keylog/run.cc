#include "keylog.hh"

void Keylog::run(){
	char inp;
	while(1){
		inp = getchar();
		if(this->writer){
			this.fileOutput->writeToFile(inp);
		}
	}
}

