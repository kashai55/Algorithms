/*
 * Fibonacci.h
 *
 *  Created on: Sep 30, 2016
 *      Author: ricardo
 */

#ifndef PROGRAMACIONDINAMICA_FIBONACCI_H_
#define PROGRAMACIONDINAMICA_FIBONACCI_H_

//Fibonacci Series using Dynamic Programming
#include<stdio.h>

int fibonacci(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  int f[n+1];
  int i;

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}


#endif /* PROGRAMACIONDINAMICA_FIBONACCI_H_ */
