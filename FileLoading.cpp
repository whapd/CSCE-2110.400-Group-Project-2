#include "FileLoading.cpp"

#include <fstream>
#include <iomanip>
#include <iostream>

// loadFile() loads a file using inputted file name as string. Divides by the '|' character, incorrect lines return warnings
bool Loading.loadFile(std::string& filename) {
    std::ifstream inp;
    if (!inp) {
      std::cout << "Error: could not open file " << filename << ".\n";
    }

    std::string line;
    int curLine = 0;
    int loaded = 0;
    int skipped = 0;

    while (std::getline(inp, line)) {
        ++curLine;
        // DO: TRIM WHITESPACE FROM LINE
        if (line.empty() || line[0] == '#') {
            continue;
        }
        std::vector<std::string> vec = splitCommas(line)
        // DO: SPLIT COMMAS FROM LINE ABOVE, REPLACE splitCommas FUNCTION
        if (vec.size() != 4) {
          std::cout << "WARNING! Line " << curLine << ": Expected __ fields (\n"
          ++skipped;
        }
        
        
    }
}
