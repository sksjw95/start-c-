#include <iostream>
using namespace std;

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }
int a = 30;
namespace NameSpace1 { int b = 50; }
int main() {
	int a = 40;
	cout << NameSpace1::a << endl;
	cout << NameSpace2::a << endl;
	cout << ::a << endl;
	cout << a << endl;
	cout << NameSpace1::b << endl;
	return 0;
}