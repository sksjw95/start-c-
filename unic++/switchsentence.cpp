#include <iostream>
using namespace std;
int main() {
	int score;
	char grade;
	cin >> score;
	switch (score / 10) // 정수형 / 정수형은 정수값만 나온다. 소수점은 버림!
	{
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}
	cout << grade;
}