/*#include<iostream>
using namespace std;
// ConvFtoC 와 비교하며 이해하자
// 피호출자 함수가 호출자보다 먼저 선언이 되어있어야 한다.
// 하지만 함수의 원형을 이용하면 문제를 해결 할수있다.
// 피호출자 함수의 시그니처 부분을  호출자의 함수 앞 부분에 선언한다.

float FahrToC(float fahr);

int main() {
	float fTemp, cTemp;

	cout << "화씨온도 : ";
	cin >> fTemp;
	cTemp = FahrToC(fTemp);
	cout << "---> 섭씨온도 : " << cTemp << endl;
	return 0;
}



float FahrToC(float fahr) {
	return (fahr - 32) * 5 / 9;
}*/

