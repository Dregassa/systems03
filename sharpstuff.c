#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int arr[10];

	srand(time(NULL));
	for (int i = 0; i < 10; i++){
		arr[i] = rand();
	}

	arr[9] = 0;

	for (int i = 0 ; i < 10; i++){
		printf("arr[%d] = %d \n", i, arr[i]);
	}

	int arr2[10];

	for (int i = 0; i < 10; i++){
		*(arr2 + i) = *(arr + 9 - i);
	}

	for (int i = 0; i < 10; i++){
		printf("arr2[%d] = %d \n", i, arr2[i]);
	}

}
