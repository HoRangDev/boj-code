#include <iostream>
#include <string>

int main( )
{
    std::string A{ };
    std::string B{ };
    std::string Result{ };
    char Operator{  };

    std::cin >> A >> Operator >> B;
    switch ( Operator )
    {
    case '*':
        Result = ( A + ( B.substr( 1 ) ) );
        break;

    case '+':
        int Index{ 0 };
        if ( A.size( ) > B.size( ) )
        {
            Index = ( A.size( ) - B.size( ) );
            Result = A;
            Result[ Index ] += 1;
        }
        else
        {
            Index = ( B.size( ) - A.size( ) );
            Result = B;
            Result[ Index ] += 1;
        }
        break;
    }

    std::cout << Result;
    return 0;
}