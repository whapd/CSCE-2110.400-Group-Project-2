#include "loadfile.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int loadfile()
{

    string line;
    vectore<string> buildings;

    ifstream infile("buildings.txt");
    if (!infile.is_open())
    {
        cout << "Error" << endl;
        return 1;
    }

    while (getline(infile,line))
    {
        buildings.push_back(line);
    }
    cout<<"Loaded file: " << filename1 << endl;
    infile.close();




    ifstream infile("connections.txt");
    cout<<"Loaded file: " << filename2 << endl;


    ifstream infile("facilities.txt");
    cout<<"Loaded file: " << filename3 << endl;


    ifstream infile("departments.txt");
    cout<<"Loaded file: " << filename4 << endl;





return 0;




}