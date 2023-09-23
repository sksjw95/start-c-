#include <iostream>
using namespace std;

int main() {
	int x{ 10 };
	const int& xRef = x;
	cout << xRef << endl;
	xRef += 10; // 오류: const 참조로 값을 수정할 수 없음
}