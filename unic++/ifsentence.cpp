#include <iostream>
using namespace std;
int main() {
	int t, a, b;
	cin >> t >> a >> b;
	if (a < b) {
		t = a;
		a = b;
		b = t;
		cout << b << a << t << endl;
	}
	else {
		cout << "b�� a���� ũ�� �ʽ��ϴ�." << endl;
	}


}