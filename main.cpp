#include <LibConvert/lib.h>
#include <stdio.h>

#include <fstream>
#include <iostream>
#include <string>

int
main( )
{
    std::cout << "Input number ";
    std::string num = "";
    std::cin >> num;

    int res = libConvert::convertHexToDec( num );
    std::string check = std::to_string( res );
    int size = check.length( );  // size number
    if ( size % 2 != 0 )
        size += 1;
    size = size / 2; // for correct write to file
    FILE* f = fopen( "result", "wb" );

    fwrite( "0x", 2, 1, f );
    fwrite( &res, size, 1, f );
    fclose( f );

    return 0;
}
