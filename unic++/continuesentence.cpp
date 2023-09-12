#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 0; i < 10; i++) {
		if (i % 2 == 1) {
			continue; // 다음 문장을 건너뛰어라
		}
		cout << i << endl;
	}
}