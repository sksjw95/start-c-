#include<iostream>
using namespace std;

int main() {
	const double PI{ 3.14159 }; // ������ ����
	double radius; // ���� ������

	cout << "���� �ݰ��� �Է��Ͻÿ�: ";
	cin >> radius; // ������ �Է�
	double area = radius * radius * PI; // ���� ���
	cout << "���� ���� = " << area << endl; // ��� ���

}