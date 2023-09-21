#include<iostream>
using namespace std;

int main() {
	int a = 10, b = 20;
	int& aRef = a; //aRef는 정수형 변수 a에 대한 참조
	cout << aRef << endl;
	aRef = 100;
	cout << aRef << endl;
	cout << a << endl;
	aRef = b;
	cout << aRef << endl;
	cout << b << endl;

}
