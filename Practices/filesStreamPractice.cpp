#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(){

    // create an output file stream openFile
    ofstream openFile("file.txt", ios::out );

    if(!openFile){
        cerr <<"File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout <<"Enter the information to save(name, age, school, major, GPA in that order)"<<endl;
    string name;
    int age;
    string school;
    string major;
    double gpa;

    while(cin >> name >> age >> school >> major >> gpa){
        //write data to file.txt
        openFile << name << " "<< age << " "<< school <<" "<< major << " " << gpa <<endl;
    }

    // Close the file to ensure data is written
    openFile.close();

    return 0;
}