#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}




void printGroupMemberNames() {
	printf("Vannlydeth Chen\n");
	printf("Sok San Kou\n");
	printf("Menghout Chhea\n");
	printf("Sengthai Te\n");
}

int getSum(int myArray[]) {
	int sum = 0;
	for (int i = 0; i < 500; ++i)
		sum += myArray[i];
	return sum;
}

int getSumOfSquares(int myArray[]) {
	int sumOfSquare = 0;
	for (int i = 0; i < 500; ++i)
		sumOfSquare += (myArray[i]*myArray[i]); // square the values, then add to sum.
	return sumOfSquare;
}

void printAsChars(int myArray[]) {
	for (int i = 0; i < 500; i++) {
		printf("%c ", myArray[i]);
	}
	printf("\n");
}
double getAverage(int myArray[]) {
	double result = 0;
	int i;
	for (i = 0; i < 500; i++)
		result += myArray[i];
	return result / 500;
}

void invertAllValues(int myArray[]) {
	int i, j;
	for (i = 0, j = 499; i <= 499, j >= 0; i++, j--) {
		myArray[i] = j - i; //reverse all of the order of elements in array
	}
	for (i = 0; i <= 499; i++) {
		printf("%i \n", myArray[i]);
	}
}
