#ifndef FILELOADING_H
#define FILELOADING_H

#include <iostream>

// FileLoading.h (name subject to change)
// Responsible for reading resources from files and storing data within said files into classes with their own data points

class Loading {
    public:
        // loadFile() loads file given file name as string input, returns true if at least one input was loaded correctly. Incorrectly-formatted lines print warnings
        bool loadFile(std::string& filename);

        // printAll() prints all 
        void printAll();

};

#endif
