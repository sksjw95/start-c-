#include <iostream>
using namespace std;

int main() {
	int x{ 10 };
	const int& xRef = x;
	cout << xRef << endl;
	xRef += 10; // ����: const ������ ���� ������ �� ����
}