#include<iostream>
using namespace std;

int main() {
	const double PI{ 3.14159 }; // 원주율 정의
	double radius; // 원의 반지름

	cout << "원의 반경을 입력하시오: ";
	cin >> radius; // 반지름 입력
	double area = radius * radius * PI; // 넓이 계산
	cout << "원의 면적 = " << area << endl; // 결과 출력

}