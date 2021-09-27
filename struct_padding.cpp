#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#pragma pack(push, 1)
struct Person
{
    char name[50];
    int age;
    double height;
};
#pragma pack(pop)

int main()
{

    Person someone = {"Frodo", 24, 0.8};
    string fileName = "test.bin";
    ////////Write Binary File /////////
    ofstream outFile;
    outFile.open(fileName, ios::binary);
    outFile.close();

    if (outFile.is_open())
    {
        //outFile.write((char *)&someone, sizeof(Person));
        outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        outFile.close();
    }
    else
        cout << "Could not create file " + fileName;
    /////////Reading Binary File ///////

    Person someoneElse = {};
    ifstream inFile;
    inFile.open(fileName, ios::binary);
    inFile.close();

    if (inFile.is_open())
    {
        //outFile.write((char *)&someone, sizeof(Person));
        inFile.read(reinterpret_cast<char *>(&someone), sizeof(Person));
        inFile.close();
    }
    else
        cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

    return 0;
}