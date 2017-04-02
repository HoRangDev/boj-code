#include <iostream>
#include <vector>
#include <string>

inline unsigned int CalcReverseNum( unsigned int Original )
{
    unsigned int PowNum{ 1 };
    while ( ( Original / PowNum ) != 0 )
    {
        PowNum *= 10;
    }

    unsigned int TempNum{ Original };
    unsigned int ReverseNum{ 0 };
    unsigned int ReversePowNum{ 1 };
    while ( ( PowNum /= 10 ) )
    {
        unsigned int DivideNum = TempNum / PowNum;
        TempNum -= ( DivideNum * PowNum );
        ReverseNum += ( DivideNum * ReversePowNum );
        ReversePowNum *= 10;
    }

    return ReverseNum;
}

int main( )
{
    unsigned int InputNum{ 0 };
    scanf( "%u", &InputNum );
    std::vector<unsigned int> Inputs;
    for ( ; InputNum; --InputNum )
    {
        unsigned int Input{ 0 };
        scanf( "%u", &Input );
        Inputs.push_back( Input );
    }

    for ( auto Num : Inputs )
    {
        bool bIsMatch = true;
        unsigned int ReverseNum = CalcReverseNum( Num );
        unsigned int SumOfNums = Num + ReverseNum;
        std::string SumString = std::to_string( SumOfNums );
        for ( int Index = 0; Index < ( SumString.size( ) / 2 ); ++Index )
        {
            if ( SumString[ Index ] != SumString[ SumString.size( ) - 1 - Index ] )
            {
                printf( "NO\n" );
                bIsMatch = false;
                break;
            }
        }

        if ( bIsMatch )
        {
            printf( "YES\n" );
        }
    }

    return 0;
}