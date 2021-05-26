#include <stdio.h>
#include <math.h>

double funcTPK(float x){								// f (x) = sqrt (| x |) + 5 * x ** 3
    return (sqrt(fabs(x)) + 5.0 * pow(x, 3.0));
}

double enterArray(float *array, int size){
	for(int i = 0; i < size; i++){
		printf("%d numbers remains. Enter number: ", size - i);
		scanf("%g", &array[i]);
		}
	return *array;
}

float invertArray(float *array, int size){
	float temp;
	for(int i = 0, j = size - 1;  i < j;  i++, j--){
		temp = array[i];
		array[i]= array[j];
		array[j] = temp;
	}
	return *array;	
}

void printArray(float *array, int size){
	for(int i = 0; i < size; i++){
		printf("%d. %g \t", i + 1, array[i]);
	}
	printf("\n");
}

float TPK(float *array, int size){
	for (int i = 0; i < size; i++){
        array[i] = funcTPK(array[i]);
        if (array[i] > 400.0) printf ("%d This value > 400.0\n", i+1);
        else printf ("%d. %g\n", i+1, array[i]);
    }
    return *array;
}

int main (){
   
	int size = 11;
	float array[size];
	
	enterArray(array, size);
	printf("\n");
	printArray(array, size);
	invertArray(array, size);
	printArray(array, size);
	printf("\n");
	TPK(array, size);

    return 0;
} 