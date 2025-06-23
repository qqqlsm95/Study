#include <iostream>
#include <array>
#include <algorithm>

// 6.20 std::array �Ұ�

using namespace std;

// �迭�� ���̸� ����ϴ� �Լ�
void printLength(const array<int, 5>& my_arr)
{
    // std::array�� .size()�� ����Ͽ� ���̸� �� �� �ִ�
    cout << my_arr.size() << endl;
}

int main()
{
    // �Ϲ� int �迭 �ʱ�ȭ
    int arrayn[5] = { 1, 2, 3, 4, 5 };

    // std::array �ʱ�ȭ (ũ��: 5)
    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };

    // �迭�� ù ��° ��� ���
    cout << my_arr[0] << endl;  // ���: 1

    // .at()�� ����� ���� ó�� ������ �ּ� ó���� (�ӵ� ������)
    // cout << my_arr.at(10) << endl;  // ����: ������ ��� ����

    // �迭�� ���̸� ���
    printLength(my_arr);  // ���: 5

    // �迭�� ��� ��Ҹ� ���
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;
    // ���: 1 21 3 40 5

    // �迭�� ������������ ����
    std::sort(my_arr.begin(), my_arr.end());

    // ���ĵ� �迭 ���
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;
    // ���: 1 3 5 21 40

    // �迭�� ������������ �ٽ� ���� (rbegin(), rend() ���)
    std::sort(my_arr.rbegin(), my_arr.rend());

    // ������������ ���ĵ� �迭 ���
    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;
    // ���: 40 21 5 3 1

    return 0;
}