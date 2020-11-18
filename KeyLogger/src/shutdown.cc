#include "main.hh"

void shutdown(int sig){
    cout << endl << endl << "Shutting down..." << endl;
    delete gl_env.logger;

    exit(0);
}
