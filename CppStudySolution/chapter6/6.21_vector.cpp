#include <iostream>
#include <vector>

// 6.21 std::vector �Ұ�

using namespace std;

int main()
{
    // �����Ҵ� ����: std::array<int, 5> array; // ���� �迭�� ũ�Ⱑ ������
    // �����Ҵ� ����: std::vector<int> // ���� �迭(vector)�� ũ�Ⱑ �������̸�, �޸� ������ �ڵ����� ó������
    std::vector<int> array;  // �� ���� ����, ũ��� 0

    // vector �ʱ�ȭ ��� (����Ʈ �ʱ�ȭ)
    std::vector<int> array2 = { 1, 2, 3, 4, 5 };  // ũ�� 5, ���� {1, 2, 3, 4, 5}

    // C++11���� ���Ե� uniform initialization
    std::vector<int> array3{ 1, 2, 3 };  // ũ�� 3, ���� {1, 2, 3}

    // ���� array2�� ũ�� ���
    cout << array2.size() << endl;  // ���: 5

    // ���� array3�� ũ�� ���
    cout << array3.size() << endl;  // ���: 3

    // array2�� ��Ҹ� ��ȸ�ϸ鼭 ���
    for (auto& itr : array2)
        cout << itr << " ";
    cout << endl;
    // ���: 1 2 3 4 5

    // ���� ũ�⸦ 10���� ���� (0���� �ʱ�ȭ�� �߰� ��Ұ� ����)
    array2.resize(10);

    // ũ�� ���� �� array2 ���
    for (auto& itr : array2)
        cout << itr << " ";
    cout << endl;
    // ���: 1 2 3 4 5 0 0 0 0 0 (���� �ִ� ���� �����ǰ� �������� 0���� ä����)

    return 0;
}