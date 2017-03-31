#include <iostream>
#include <utility>
#include <array>
using Bucket = std::pair<unsigned int, unsigned int>;

// ù ��° �ٱ��Ͽ��� �� ��° �ٱ��Ϸ� �������� �ű�� �� ��° �ٱ��Ͽ��� �������
// �Űܾ� �ش� ���ɼ��� �ּ� �̵�Ƚ���� �ȴ�.
// �ݴ�� ù ��° �ٱ��Ͽ��� ����� �ű�� �� ��° �ٱ��Ͽ��� ���������� �Űܾ�
// �ش� ���ɼ��� �ּ� �̵�Ƚ���� �ȴ�.
// �׷��Ƿ� �� ���� ���ɼ������� �ּ� �̵�Ƚ���� ���� ���� ��� ���ɼ��߿��� ���� ���� �̵�Ƚ���� �ȴ�.
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