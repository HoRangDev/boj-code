#include <iostream>
#include <string>
#include <array>

int main( )
{
    const std::array<std::string, 10> SipKanStr{ "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
    const std::array<std::string, 12> Sip2jiStr{ "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L" };
    unsigned int InputYear{ 0 };
    std::cin >> InputYear;

    unsigned int SipKan{ 0 };
    unsigned int Sip2Ji{ 0 };
    if ( InputYear >= 4 )
    {
        InputYear -= 4;
        InputYear %= 60;
    }
    else
    {
        --InputYear;
        InputYear %= 60;
    }

    SipKan = ( InputYear % 10 );
    Sip2Ji = ( InputYear % 12 );
    std::cout << ( Sip2jiStr[ Sip2Ji ] + SipKanStr[ SipKan ] );
    
    return 0;
}