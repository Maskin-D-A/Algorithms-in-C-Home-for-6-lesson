#include <stdio.h>
#include <stdlib.h>

int randStuff(int row, int col, int border, int array[row][col]);

void printArr(int row, int col, int array[row][col]);

//#####bubblesort#####
void swap(int *a, int *b){
	int temp = *a; 
	*a = *b; 
	*b = temp;
}

int bubbleSort(int row, int col, int array[row][col]){
	for (int k; k < (row * col - 1); k++){
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				if ((i == (row - 1)) && (j == (col - 1))){
					continue;
				}
				if(array[i][j] > array[i][j+1]){
					swap(&array[i][j], &array[i][j+1]);
				}
			}
		}
	}
	return **array;
}

//#######END#####

int main(){
	ctime(0);
	const int row = 10;
	const int col = 10;
	int array[row][col];
	randStuff(row, col, 100, array);
	printArr(row, col, array);
	bubbleSort(row, col, array);
	printf("\n");
	printArr(row, col, array);
	return 0;
}


int randStuff(int row, int col, int border, int array[row][col]){
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if(i % 2== 0 && j % 2 == 0) array[i][j] = rand() % border * (-1) ;
			else array[i][j] = rand() % border ;
		}
	}
	return **array; 
}

void printArr(int row, int col, int array[row][col]){
	for (int i = 0; i < row; i++){
		for (int j = 0; j <col; j++){
			printf("%d \t", array[i][j]);
		}
	printf("\n");
	}
}