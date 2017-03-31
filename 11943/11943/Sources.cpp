#include <iostream>
#include <utility>
#include <array>
using Bucket = std::pair<unsigned int, unsigned int>;

// 첫 번째 바구니에서 두 번째 바구니로 오렌지를 옮기면 두 번째 바구니에선 사과만을
// 옮겨야 해당 가능성의 최소 이동횟수가 된다.
// 반대로 첫 번째 바구니에서 사과를 옮기면 두 번째 바구니에선 오렌지만을 옮겨야
// 해당 가능성의 최소 이동횟수가 된다.
// 그러므로 두 가지 가능성에서의 최소 이동횟수중 작은 값이 모든 가능성중에서 제일 작은 이동횟수가 된다.
int main( )
{
    std::array<unsigned int, 2> AllPossible{ };
    std::array<Bucket, 2> Buckets;
    std::cin >> Buckets[0].first >> Buckets[0].second;
    std::cin >> Buckets[1].first >> Buckets[1].second;

    AllPossible[ 0 ] = ( Buckets[ 0 ].first + Buckets[ 1 ].second );
    AllPossible[ 1 ] = ( Buckets[ 1 ].first + Buckets[ 0 ].second );

    if ( AllPossible[ 0 ] > AllPossible[ 1 ] )
    {
        std::cout << AllPossible[ 1 ];
    }
    else
    {
        std::cout << AllPossible[ 0 ];
    }

    return 0;
}