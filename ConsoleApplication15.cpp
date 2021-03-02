#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include "my_lib.h"

int main() {
	printf("Find the smallest element of the generated array\n");

	srand(time(NULL));

	printf("Enter the minimum element of array:\n");
	const double min = input_double_number();

	printf("Enter the maximum element of array:\n");
	const double max = input_double_number();

	printf("Generated element of array:\n");

	const int arrays_lenght = 32;
	double array[arrays_lenght];
	double min_array_element = max + 1.0;

	for (int counter = 0; counter < arrays_lenght; counter++) {
		array[counter] = double_rand_min_max(min, max);
		printf("%lf\n", array[counter]);

		if (min_array_element > array[counter]) {
			min_array_element = array[counter];
		}
	}

	printf("Found smallest element of the generated array: %lf", min_array_element);
}