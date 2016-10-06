/*
 * Main.cpp
 *
 */


#include "ProgramacionDinamica/FuncionAckermann.h"
#include "ProgramacionDinamica/Fibonacci.h"

#include "Backtracking/Nqueen.h"
#include "Backtracking/RatInMaze.h"

#include "DivideAndConquer/QuickSort.h"
#include "DivideAndConquer/Karatsuba.h"


#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << ackerman(1,3)<<endl;
	//--------------------------------------------------------
	cout << fibonacci(7)<<endl;
	//--------------------------------------------------------
	solveNQ();
	//--------------------------------------------------------
	int maze[N][N]  =  { {1, 0, 0, 0},
	        {1, 1, 0, 1},
	        {0, 1, 0, 0},
	        {1, 1, 1, 1}
	    };
    solveMaze(maze);
    //--------------------------------------------------------
    int arr[] = {10, 7, 8, 9, 1, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	printf("Sorted array: \n");
	printArray(arr, n);
	//--------------------------------------------------------
	cout<<multiply("101111","101011")<<endl;

	//--------------------------------------------------------

	return 0;
}

