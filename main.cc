/*
 *        File: main.cc
 *      Author: Daniyar Baktybek
 *        Date: December 04, 2020
 * Description: Add Description
 */

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

//function prototypes

/**
 *  @param text
 *
 *  @brief function for counting lines
*/
int countLine(string text);


/**
*   @param text
*   @brief function for counting characters
*/
int countChar(string text);

/**
 *  @file main.cc
 *  @brief main function
 *
*/
int main(int argc, char const *argv[]) {
    if (argc == 2)
    {
        string filename, username;
        username = argv[1];
        ifstream fin;
        filename = username + ".txt";
	    fin.open(filename.c_str());
        string str((istreambuf_iterator<char>(fin)), istreambuf_iterator<char>());
        cout << countLine(str) << " Lines" << endl;
        cout << countChar(str) << " Characters" << endl;
        fin.close();
    }
    if (argc == 1){
        string a, b;
        a = "Ohio University";
        b = "Athens";
        cout << countLine(a) << " Lines" << endl;
        cout << countChar(b) << " Characters" << endl;
    }

   /*add code*/
   return 0;
}// main


int countLine(string text){
    int count = 0;
    istringstream iss(text);
    string line;
    while (getline(iss, line))
    count++;
    return count;
}


int countChar(string text){
    return text.length();
}