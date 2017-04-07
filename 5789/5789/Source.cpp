#include <iostream>
#include <string>
#include <vector>

int main( )
{
    int InputCount{ 0 };
    std::cin >> InputCount;

    std::vector<std::string> Inputs;

    while ( InputCount-- )
    {
        std::string TempString;
        std::cin >> TempString;
        Inputs.push_back( std::move( TempString ) );
    }

    for ( auto Input : Inputs )
    {
        int MidIndex = Input.length( ) / 2;
        if ( Input[ MidIndex ] == Input[ MidIndex - 1 ] )
        {
            printf( "Do-it\n" );
        }
        else
        {
            printf( "Do-it-Not\n" );
        }
    }

    return 0;
}