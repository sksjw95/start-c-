#include<iostream>
using namespace std;
int main() {
	int val, total = 0;
	for (cin >> val; val > 0; cin >> val) {
		total += val;

	}
	cout << total << endl;
	//printf("%d", total);
}