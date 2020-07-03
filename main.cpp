#include <iostream>
#include <stdio.h>
#include "LibNumToHex/lib.cpp"

using namespace std;

string converts()
{
    FILE *f = fopen("result", "rb");
    fseek(f, 0, SEEK_END);
    int size = ftell(f);
    rewind(f);
    char * dataC = new char[size];

    fread(dataC, size, size, f);
    fclose(f);
    string data = dataC;
    int res = libConvert::convertHexToDec(data);
    delete[] dataC;
    return to_string(res);
}

int main()
{
//    cout << converts() << endl;
    cout << "Input number ";
    int num = 0;
    cin >> num;
    string res = libConvert::convertDecToHex(num);
    FILE *f = fopen("result", "ab+");
    fwrite(res.c_str(), res.length(), res.length(), f);
    fclose(f);

    return 0;
}


