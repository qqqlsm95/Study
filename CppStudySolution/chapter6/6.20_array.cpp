#include <iostream>
#include <array>
#include <algorithm>

// 6.20 std::array 소개

using namespace std;

// 배열의 길이를 출력하는 함수
void printLength(const array<int, 5>& my_arr)
{
    // std::array는 .size()를 사용하여 길이를 알 수 있다
    cout << my_arr.size() << endl;
}

int main()
{
    // 일반 int 배열 초기화
    int arrayn[5] = { 1, 2, 3, 4, 5 };

    // std::array 초기화 (크기: 5)
    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };

    // 배열의 첫 번째 요소 출력
    cout << my_arr[0] << endl;  // 출력: 1

    // .at()을 사용한 예외 처리 접근은 주석 처리됨 (속도 문제로)
    // cout << my_arr.at(10) << endl;  // 오류: 범위를 벗어난 접근

    // 배열의 길이를 출력
    printLength(my_arr);  // 출력: 5

    // 배열의 모든 요소를 출력
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;
    // 출력: 1 21 3 40 5

    // 배열을 오름차순으로 정렬
    std::sort(my_arr.begin(), my_arr.end());

    // 정렬된 배열 출력
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;
    // 출력: 1 3 5 21 40

    // 배열을 내림차순으로 다시 정렬 (rbegin(), rend() 사용)
    std::sort(my_arr.rbegin(), my_arr.rend());

    // 내림차순으로 정렬된 배열 출력
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;
    // 출력: 40 21 5 3 1

    return 0;
}