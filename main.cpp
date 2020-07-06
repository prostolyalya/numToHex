#include <stdio.h>

#include <iostream>
#include <string>

#include "LibConvert/lib.h"

using namespace std;

int main( )
{
    cout << "Read or write (r/w) ";
    char input;
    cin >> input;
    if ( input == 'w' )
    {
        cout << "Input number ";
        int num = 0;
        cin >> num;
        string res = libConvert::convertDecToHex( num );
        FILE* f = fopen( "result", "wb" );
        fwrite( res.c_str( ), res.length( ), res.length( ), f );
        fclose( f );
    }
    else if ( input == 'r' )
    {
        FILE* f = fopen( "result", "rb" );
        fseek( f, 0, SEEK_END );
        int size = ftell( f );
        rewind( f );
        char* dataC = new char[ size ];
        fread( dataC, size, size, f );
        fclose( f );
        string data = dataC;
        int res = libConvert::convertHexToDec( data );
        delete[] dataC;
        cout << res << endl;
    }
    else
        cout << "Incorrect, close" << endl;
    return 0;
}
