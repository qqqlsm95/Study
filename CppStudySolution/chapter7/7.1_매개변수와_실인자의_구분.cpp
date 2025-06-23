#include <iostream>

// 7.1 매개변수와 실인자의 구분

using namespace std;

// 함수 선언 (매개변수는 x와 y)
int foo(int x, int y);

// 함수 정의
// foo 함수는 두 정수 x, y를 매개변수로 받아, 두 값을 더한 결과를 반환
int foo(int x, int y) // x, y 매개변수 (parameter)
{
    return x + y;
} // x와 y는 함수가 끝나면 파괴됨

int main()
{
    // 변수 x와 y 초기화
    int x = 1, y = 2;

    // foo 함수 호출
    foo(6, 7); // 6, 7 : 실인자 (arguments, 실제 값)

    // 이 경우 foo 함수는 6과 7을 더한 값 13을 반환하지만,
    // 반환 값을 별도로 출력하거나 저장하지 않으므로 출력되지 않음

    // foo(x, y + 1) : x는 1, y+1은 3이 되어, foo(1, 3)을 호출
    // 이 함수 호출 결과는 1 + 3 = 4이지만, 역시 반환 값은 출력되지 않음
    foo(x, y + 1); // y + 1은 계산 후 인자로 전달됨

    return 0;
}