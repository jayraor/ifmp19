/**
 * file-2.cpp: Encrypt a file's content with caesar cipher
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <cctype>

// get preprocessor constant
#define MAX_LENGTH 10000

// enter namespace std
using namespace std;

// prototypes
string caesar(int key, string words);

int main(int argc, char** argv)
{   
    // get a file name from the user, explicitly allocate on the heap
    char* file = new char[MAX_LENGTH];
    cin>>file;
    
    // key
    int key;
    cin>>key;
    
    // infile object
    ifstream fin;    
    fin.open(file);
    
    // check for error 
    if (!fin.is_open())
    {   
        cout<<"File could not be opened"<<endl;
        return 1;
    }
    
    // initialize
    int counter = 0;
    string word;
    vector <string> words;
    
    while (fin >> word)
    {   
        words.push_back(word);
        counter++;    
    }  
    
    vector <string> encrypted(counter); 
    
    // get encrypted vector   
    for (int i = 0; i < counter; i++)
    {
        encrypted[i] = caesar(key, words[i]);
        cout<<words[i]<<endl;
        cout<<(encrypted[i])<<endl;
    }
    
    // print to encrypted file
    ofstream fout;
    fout.open("encrypted.txt");
    for (int i = 0; i < counter; i++)
    {
        fout<<encrypted[i]<<" ";    
    }
    fout.close();
}

// implement code
string caesar(int key, string words)
{
    const char* word = words.c_str();
    char* enc = new char[words.length() + 1];
    strcpy(enc, words.c_str());
    for (int i = 0; i < strlen(word); i++)
    {   
        char c = word[i];
        if (isalpha((c)))
        {
            int diff = c - 'a';
            diff = (diff + key) % 26;
            char a = 'a';
            a += diff;
            enc[i] = a;
        }
        else
        {
            // NOTHING TODO
        }
    }
    string s(enc);
    return s; 
}


