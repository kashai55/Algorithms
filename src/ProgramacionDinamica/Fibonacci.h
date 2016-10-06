/*
 * Fibonacci.h
 *
 *  Created on: Sep 30, 2016
 *      Author: ricardo
 */

#ifndef PROGRAMACIONDINAMICA_FIBONACCI_H_
#define PROGRAMACIONDINAMICA_FIBONACCI_H_

int fibonacci(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibonacci(n - 2) + fibonacci(n - 1);
}



#endif /* PROGRAMACIONDINAMICA_FIBONACCI_H_ */
