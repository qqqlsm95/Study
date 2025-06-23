#include <iostream>

// 7.2 값에 의한 전달

using namespace std;

// 함수 정의: 매개변수로 int 타입을 받음 (값에 의한 전달)
void doSomething(int y)
{
    // 전달된 값을 출력하고, y의 주소를 출력
    cout << "In func " << y << " " << &y << endl;
    // 여기서 y는 main에서 전달된 값의 복사본임
}

int main()
{
    // doSomething 함수 호출, 5라는 값을 전달
    doSomething(5); // 출력: In func 5 <주소1> (함수 내에서 5의 복사본이 사용되며 주소1은 함수 내에서 지역 변수 y의 주소)

    // 정수형 변수 x 초기화
    int x = 6;

    // main 함수에서 x의 값과 x의 주소 출력
    cout << "In main " << x << " " << &x << endl; // 출력: In main 6 <주소2> (main 함수에서 x의 값 6과 x의 실제 주소 주소2를 출력)

    // doSomething 함수에 x를 전달 (x의 값을 복사하여 함수로 전달)
    doSomething(x); // 출력: In func 6 <주소1> (6이 복사되어 전달되며, 주소1은 함수 내 지역 변수 y의 주소)

    // doSomething 함수에 x + 1 값을 전달 (7을 전달)
    doSomething(x + 1); // 출력: In func 7 <주소1> (7이 값으로 전달되며, 주소1는 함수 내 지역 변수 y의 주소)

    return 0;
}