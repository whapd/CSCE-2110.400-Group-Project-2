#include "loadfile.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

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

    //open buildings
    ifstream infile1("buildings.txt");
    if (!infile1.is_open())
    {
        cout << "Error opening " << filename1 << endl;
    }
    else
    {
        while (getline(infile1,line))
        {
            buildings.push_back(line);
        }
        cout<<"Loaded file: " << filename1 << endl;
        infile1.close();
    }

    //open connections
    ifstream infile2("connections.txt");
    if (!infile2.is_open())
    {
        cout << "Error opening " << filename2 << endl;

    }
    else
    {
        while (getline(infile2,line))
        {
            connections.push_back(line);
        }
        cout<<"Loaded file: " << filename2 << endl;
        infile2.close();
    }

    //open facilities
    ifstream infile3("facilities.txt");
    if (!infile3.is_open())
    {
        cout << "Error opening " << filename3  << endl;

    }
    else
    {
        while (getline(infile3,line))
        {
            facilities.push_back(line);
        }
        cout<<"Loaded file: " << filename3 << endl;
        infile3.close();
    }

    //open departments
    ifstream infile4("departments.txt");
    if (!infile4.is_open())
    {
        cout << "Error opening "<< filename4 << endl;

    }
    else
    {
        while (getline(infile4,line))
        {
            departments.push_back(line);
        }
        cout<<"Loaded file: " << filename4 << endl;
        infile4.close();
    }



return 0;




}