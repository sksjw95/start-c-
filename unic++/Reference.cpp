#include<iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	int& aRef = a; //aRef�� ������ ���� a�� ���� ����
	cout << aRef << endl;
	aRef = 100;
	cout << aRef << endl;
	cout << a << endl;
	aRef = b;
	cout << aRef << endl;
	cout << b << endl;

}
