#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string FileName = "text.txt";
    ofstream outFile;
    ifstream inFile;

    inFile.open(FileName);
    outFile.open(FileName);

    if (outFile.is_open())
    {
        outFile << "Hello World" << endl;
        outFile << "How are you dear?" << endl;
        outFile.close();
    }
    else
        cout << "Couldnot write" << endl;

    if (inFile.is_open())
    {

        string line;
        while (inFile)
        {
            getline(inFile, line);
            cout << line << endl;
        }
        inFile.close();
    }
    else
        cout << "Could not open file: " << FileName << endl;

    return 0;
}