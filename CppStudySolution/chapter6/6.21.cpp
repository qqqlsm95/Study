#include <iostream>
#include <vector>

// 6.21 std::vector 소개

using namespace std;

int main()
{
    // 정적할당 예시: std::array<int, 5> array; // 정적 배열은 크기가 고정됨
    // 동적할당 예시: std::vector<int> // 동적 배열(vector)은 크기가 가변적이며, 메모리 관리를 자동으로 처리해줌
    std::vector<int> array;  // 빈 벡터 선언, 크기는 0

    // vector 초기화 방법 (리스트 초기화)
    std::vector<int> array2 = { 1, 2, 3, 4, 5 };  // 크기 5, 값은 {1, 2, 3, 4, 5}

    // C++11에서 도입된 uniform initialization
    std::vector<int> array3{ 1, 2, 3 };  // 크기 3, 값은 {1, 2, 3}

    // 벡터 array2의 크기 출력
    cout << array2.size() << endl;  // 출력: 5

    // 벡터 array3의 크기 출력
    cout << array3.size() << endl;  // 출력: 3

    // array2의 요소를 순회하면서 출력
    for (auto& itr : array2)
        cout << itr << " ";
    cout << endl;
    // 출력: 1 2 3 4 5

    // 벡터 크기를 10으로 조정 (0으로 초기화된 추가 요소가 생김)
    array2.resize(10);

    // 크기 변경 후 array2 출력
    for (auto& itr : array2)
        cout << itr << " ";
    cout << endl;
    // 출력: 1 2 3 4 5 0 0 0 0 0 (원래 있던 값은 유지되고 나머지는 0으로 채워짐)

    return 0;
}