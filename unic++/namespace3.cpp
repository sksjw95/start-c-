#include <iostream>

namespace NameSpace1 { int a = 10; }
//using NameSpace1::a;
namespace NameSpace2 { int a = 20; }
int a = 30;
namespace NameSpace1 { int b = 50; }
using NameSpace1::b;
int main() {
	int a = 40;
	std::cout <<NameSpace1::a  << std::endl;
	std::cout << NameSpace2::a << std::endl;
	std::cout << ::a << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	return 0;
}
