#include<iostream>
#include <fstream>


// Set up variables for input and output streams.
std::ifstream in("data.in");
std::ofstream out("data.out");

// Because this is global it is initialized with all elements to 0
// This would not be the case if created locally in Main.
int globArr[10];

void printArr(const int(&myArr) [10], int arrSize);

int main()
{
	//// These will be initialized with garbage memory values.
	//int localArr[10];

	//printArr(globArr, 10);

	//std::cout << '\n';

	//printArr(localArr, 10);



	return 0;
}

void printArr(const int(&myArr)[10], int arrSize)
{
	for (int i = 0; i < arrSize; ++i)
	{
		std::cout << "Element " << i << " = " << myArr[i] << '\n';
	}
}