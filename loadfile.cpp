#include "loadfile.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int loadfile()
{

    string line;
    vector<string> buildings;
    vector<string> connections;
    vector<string> facilities;
    vector<string> departments;

    string filename1 = "buildings.txt";
    string filename2 = "connections.txt";
    string filename3 = "facilities.txt";
    string filename4 = "departments.txt";


    ifstream infile1("buildings.txt");
    if (!infile1.is_open())
    {
        cout << "Error" << endl;
        return 1;
    }

    while (getline(infile1,line))
    {
        buildings.push_back(line);
    }
    cout<<"Loaded file: " << filename1 << endl;
    infile1.close();




    ifstream infile2("connections.txt");
    if (!infile2.is_open())
    {
        cout << "Error" << endl;
        return 1;
    }

    while (getline(infile2,line))
    {
        connections.push_back(line);
    }
    cout<<"Loaded file: " << filename2 << endl;
    infile2.close();


    ifstream infile3("facilities.txt");
    if (!infile3.is_open())
    {
        cout << "Error" << endl;
        return 1;
    }

    while (getline(infile3,line))
    {
        facilities.push_back(line);
    }
    cout<<"Loaded file: " << filename3 << endl;
    infile3.close();

    ifstream infile4("departments.txt");
    if (!infile4.is_open())
    {
        cout << "Error" << endl;
        return 1;
    }

    while (getline(infile4,line))
    {
        departments.push_back(line);
    }
    cout<<"Loaded file: " << filename4 << endl;
    infile4.close();



return 0;




}