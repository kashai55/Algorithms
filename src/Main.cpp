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

#include "AlgoritmosGeneticos/OneMax.h"
#include "AlgoritmosGeneticos/Sphere.h"


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "================================" << endl;
	cout << "***Programación Dinámica***" << endl;

	cout << "Función Ackerman: ackerman(1,3) "<< endl;
	cout << ackerman(1,3)<<endl;
	cout << "--------------------------------" << endl;
	cout << "Función Fibonacci: fibonacci(7)" << endl;
	cout << fibonacci(7)<<endl;
	cout << "--------------------------------" << endl;

	cout << "================================" << endl;

	cout << "***Backtracking***" << endl;

	cout << "Función: N-Queens" << endl;
	solveNQ();
	cout << "--------------------------------" << endl;


	cout << "Función: Laberinto" << endl;
	int maze[N][N]  =  {
					   {1, 0, 0, 0},
	        		   {1, 1, 0, 1},
	                   {0, 1, 0, 0},
	                   {1, 1, 1, 1}
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

	cout << "Funcion Multiply: multiply(101111,101011)" << endl;
	cout << multiply("101111","101011") << endl;
	cout << "--------------------------------" << endl;


	cout << "================================" << endl;

	cout << "***Algoritmos Genéticos***" << endl;
	cout << "Funcion OneMax: " << endl;
	oneMax();


	cout << "--------------------------------" << endl;
	cout << "Funcion Sphere: " << endl;
	AG();



	//--------------------------------------------------------

	return 0;
}

