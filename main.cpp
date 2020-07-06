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
    switch ( input )
    {
    case 'w':
    {
        cout << "Input number ";
        int num = 0;
        cin >> num;
        string res = libConvert::convertDecToHex( num );
        FILE* f = fopen( "result", "wb" );
        fwrite( res.c_str( ), res.length( ), res.length( ), f );
        fclose( f );
        break;
    }
    case 'r':
    {
        FILE* f = fopen( "result", "rb" );
        if ( f == NULL )
        {
            cout << "File not founded, close" << endl;
            break;
        }
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
        break;
    }
    default:
        cout << "Incorrect, close" << endl;
        break;
    }

    return 0;
}
