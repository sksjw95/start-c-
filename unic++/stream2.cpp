#include<iostream>
void main() {
	int a;
	char str[100];
	std::cin >> a >> str;
	std::cout << a << str;
}
//백색 공백 문자 (빈칸, 탭, 새줄문자)는 구분 문자로 취급함 -> 무시한다.