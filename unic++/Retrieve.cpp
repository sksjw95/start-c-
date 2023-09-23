#include<iostream>
#define array_size 5

int retrieve(int* a, int i) {
	if (i >= 0 && i < array_size) {
		return a[i];
	}
	else {
		printf("Error\n");
		return -1;
	}
}