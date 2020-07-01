#include <iostream>
#include <stdio.h>
#include <fstream>
#include "LibNumToHex/lib.cpp"

using namespace std;

string converts()
{
    int size;
    char * memblock;
    string data = "";
    ifstream file("result", ios::in|ios::binary|ios::ate);
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();

    cout << "the entire file content is in memory";

    delete[] memblock;
//    FILE *f = fopen("result", "rb+");
//    fseek(f, 0, SEEK_END);
//    int size = ftell(f);
//    rewind(f);
//    string data = "";
//    fread(&data, sizeof(string), size, f);
//    fclose(f);
    string res = Lib::convertHexToDec(data);

    return res;
}

int main()
{
    cout << converts() << endl;
//    cout << "Input number ";
//    int num = 0;
//    cin >> num;
//    string res = Lib::convert(num);
//    FILE *f = fopen("result", "ab+");
//    fwrite(&res, sizeof(string), res.length(), f);
//    fclose(f);

    return 0;
}


