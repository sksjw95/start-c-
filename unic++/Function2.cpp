/#include<iostream>
using namespace std;

double maximum(const double arr[], int n) {
	double max = arr[0];
	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		return max;
	}
}

int main() {
	double a[50], b[100];
	// 생략: a와 b에 각각 50개와 100개의 데이터 준비
	cout << maximum(a, 50) << endl;
	cout << maximum(b, 100) << endl;
}
