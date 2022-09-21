// Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#include <fstream>
#include<string>
#include<vector>
#include<sstream>


class Student {
public:
    string firstName; // a string that will hold a students first name 
    string lastName; // a string that will hold a students last name 
        int grade; // an integer that will contain the students grade number
};

Student Break(string line)
{
    vector <string> tokens;

    stringstream s_stream(line); //create string stream from the string
    while (s_stream.good()) {
        string substr;
        getline(s_stream, substr, ' '); //get first string delimited by comma
        tokens.push_back(substr);

        
    }

    Student s;
    s.firstName = tokens[0];
    s.lastName = tokens[1];
    s.grade = stoi(tokens[2]);

    return s;
}

int main()
{
    
    vector<Student> students;
    ifstream myFile("example.txt"); //a stream of data used for reading input from a file
    string currentLine;
    if (myFile.is_open())
    {
        while (getline(myFile, currentLine))
        {
            Student s = Break(currentLine);

            students.push_back(s);
            
           // cout << s.firstName << endl;
             
        }
    }

    Student s = Break("firdt last 90");
    //cout << s.firstName;

    for (int i = 0; i < students.size(); i++)
    {
        cout << students[i].firstName << endl;
        cout << students[i].lastName << endl;
        cout << students[i].grade << endl;

        cout << "--------------" << endl;
    }

    // reorder the students

    // average grade
    
 }
   

