// Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <fstream>
#include<string>
#include<vector>


class Student {
public:
    string firstName; // a string that will hold a students first name 
    string lastName; // a string that will hold a students last name 
        int gradeNum; // an integer that will contain the students grade number
};

Student Break(string line)
{
    vector <string> tokens;
    for (int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << endl;
    }
    
    Student s; 
    s.firstName = tokens[0];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    
    return s;
}

int main()
{
    
    vector<Student> students;
    ifstream myFile("example.txt"); //a stream of data used for reading input from a file
    string currentLine;
    if (myFile.is_open())
    {
        while (getline(myFile, currentLine, ' '))
        {
            Student s = Break(currentLine);

            students.push_back(s);
            
            cout << currentLine << endl;
             
        }
    }
    
 }
   

