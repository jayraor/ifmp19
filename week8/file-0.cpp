/**
 * file-0.cpp
 *
 */

// includes file stream library (i.e possibility to write and read to/from files)
#include <iostream>
#include <fstream>

// defines a "preprocessor constant" 
#define MAX_LENGTH 100000

using namespace std;

// write file method
void write(char* file, char* text);

// main method 
int main(int argc, char** argv) 
{   
    cout << "Enter file to open ";
    char* file = new char[MAX_LENGTH];
    cin>>file;
    
    // error check
    ofstream fout;
    fout.open(file);
    while(fout.is_open() == false) 
    {   cout<<"Enter file to open ";
        cin>>file;
        cout<<"File cannot be opened..."<<endl;
    } 
    

    cout << "Enter text to write to " << file << ": ";
    char* text = new char[MAX_LENGTH];
    cin>>text;
    write(file, text);
    fout.close();
    return 0;
}

void write(char* file, char* text) 
{
    // open new stream
    ofstream fout;
    fout.open(file);
    fout<<text<<endl;
    fout.close();
}


