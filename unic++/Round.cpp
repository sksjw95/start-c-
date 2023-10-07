#include<iostream>
#include<cmath>
using namespace std;
double Round(double x, int d = 0);


int main() {
	double a;
	cout << "�� = ";
	cin >> a;
	cout << "�ݿø� --> " << Round(a) << endl;
	cout << "     " << Round(a, 1) << endl;
	cout << "     " << Round(a, 2) << endl;
	cout << "     " << Round(a, 3) << endl;
	return 0;
}


//�ݿø� �Լ�
// �μ� double x : �ݿø��� ��
// int d :�ݿø��Ͽ� ���� �Ҽ� �κ��� �ڸ���
// ��ȯ �ݿø��� ��(double)
double Round(double x, int d) {
	double a = x >= 0 ? 0.5 : -0.5;
	double pow10 = pow(10, d);
	return trunc(x * pow10 + a) / pow10;
}