#include <iostream>
using namespace std;

int main() {
	char str[14] = "Hello, world!";
	char* pt;

	cout << str << endl;
	pt = str; //pt�� �迭str�� ����Ŵ
	while (*pt) {
		if (*pt >= 'a' && *pt <= 'z') {
			*pt = *pt - 'a' + 'A';
			
		}
		pt++;
	}
	cout << str << endl;


}