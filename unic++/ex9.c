#include<stdio.h>
void Mul(int step) {
	int i;
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d \n", step, i, step * i);

	}

}

void main() {
	int m;
	for (m = 2; m <= 9; m++) {
		Mul(m);
	}
}