#include <iostream>
using namespace std;
int main() {
	double a[50], b[100];
	// 생략: a와 b에 각각 50개와 100개의 데이터 준비
	double max = a[0];

	for (int i = 1; i < 50; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		cout << max << endl;
	}

	max = b[0];
	for (int i = 1; i < 100; i++) {
		if (max < b[i]) {
			max = b[i];
		}
		cout << max << endl;
	}
}