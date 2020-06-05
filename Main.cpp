#include<iostream>
#include <fstream>


// Set up variables for input and output streams.
std::ifstream in("data.in");
std::ofstream out("data.out");

// Because this is global it is initialized with all elements to 0
// This would not be the case if created locally in Main.
int globArr[10];
int numOfLoops;

void printArr(const int(&myArr) [10], int arrSize);
void sortArr(int(&myArr)[10], int arrSize);

int main()
{
	//// These will be initialized with garbage memory values.
	//int localArr[10];

	//printArr(globArr, 10);

	//std::cout << '\n';

	//printArr(localArr, 10);

	in >> numOfLoops;

	/*for (int i = 0; i < numOfLoops; ++i)
	{
		int indexPos;
		in >> indexPos;
		++globArr[indexPos];
	}

	if (globArr[5] > 0)
	{
		out << "Yes, number in the array.\n";
	}
	else
	{
		out << "No, number is not in the array.\n";
	}*/

	for (int i = 0; i < numOfLoops; ++i)
	{
		int num;
		in >> num;

		globArr[i] = num;
	}

	//printArr(globArr, 10);
	sortArr(globArr, 10);
	//printArr(globArr, 10);

	return 0;
}

void printArr(const int(&myArr)[10], int arrSize)
{
	for (int i = 0; i < arrSize; ++i)
	{
		std::cout << "[" << myArr[i] << "],\t";
	}

	std::cout << '\n';
	std::cout << '\n';
}

void sortArr(int(&myArr)[10], int arrSize)
{
	for (int i = 0; i < arrSize; ++i)
	{
		for (int j = i; j < arrSize; ++j)
		{
			if (myArr[j] < myArr[i])
			{
				int temp = myArr[i];
				myArr[i] = myArr[j];
				myArr[j] = temp;
			}

			printArr(myArr, 10);
		}		
	}
}