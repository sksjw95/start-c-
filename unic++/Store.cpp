#include<iostream>
#define array_size 5
void store(int* a, int i, int e) {
	if (i >= 0 && i < array_size) {
		a[i] = e;
	}
	else {
		printf("Error\n");
	}
}