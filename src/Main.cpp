/*
 * Main.cpp
 *
 */


#include "ProgramacionDinamica/MinCostPath.h"
#include "ProgramacionDinamica/Fibonacci.h"

#include "Backtracking/Nqueen.h"
#include "Backtracking/RatInMaze.h"

#include "DivideAndConquer/QuickSort.h"
#include "DivideAndConquer/Karatsuba.h"

#include "AlgoritmosGeneticos/OneMax.h"
#include "AlgoritmosGeneticos/Sphere.h"


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	cout << "================================" << endl;

	cout << "***Backtracking***" << endl;

	cout << "Función: N-Queens" << endl;
	solveNQ();
	cout << "--------------------------------" << endl;

	cout << "Función: Laberinto" << endl;
	int maze[N][N]  =  {
					   {1, 0, 0, 0},
		        	   {1, 1, 1, 1},
		               {0, 1, 1, 1},
		               {1, 1, 0, 1}
	};

	solveMaze(maze);
	cout << "--------------------------------" << endl;


	cout << "================================" << endl;

	cout << "***Divide y Vencerás***" << endl;

	cout << "Funcion: Quick Sort" << endl;
	int arr[] = {10, 7, 8, 9, 1, 5};
	cout << "Array: [10, 7, 8, 9, 1, 5]" << endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	quickSort(arr, 0, n-1);
	printf("Sorted array: \n");
	printArray(arr, n);
	cout << "--------------------------------" << endl;

	cout << "Función Multiply: multiply(101111,101011)" << endl;
	cout << multiply("101111","101011") << endl;
	cout << "--------------------------------" << endl;


	cout << "================================" << endl;


	cout << "***Programación Dinámica***" << endl;

	cout << "Función MinCostPath: minCost(cost,2,2) "<< endl;
	int cost[3][3] = { {1, 2, 3},
					  {4, 8, 2},
					  {1, 5, 3} };
	cout << minCost(cost, 2, 2) <<endl;

	cout << "--------------------------------" << endl;
	cout << "Función Fibonacci: fibonacci(7)" << endl;
	cout << fibonacci(7)<<endl;
	cout << "--------------------------------" << endl;




	cout << "================================" << endl;

	cout << "***Algoritmos Genéticos***" << endl;
	cout << "Función OneMax: " << endl;
	oneMax();


	cout << "--------------------------------" << endl;
	cout << "Función Sphere: " << endl;
	AG();



	//--------------------------------------------------------

	return 0;
}

