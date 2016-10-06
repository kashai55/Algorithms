/*
 * FuncionAckermann.h
 *
 *  Created on: Sep 30, 2016
 *      Author: ricardo
 */

#ifndef PROGRAMACIONDINAMICA_FUNCIONACKERMANN_H_
#define PROGRAMACIONDINAMICA_FUNCIONACKERMANN_H_


int ackerman(int m, int n){
    if(m==0){
      return n+1;
    }
    else
    {
        if(n==0){
           return ackerman(m-1, 1);
        }
        else{
           return ackerman(m-1, ackerman(m, n-1));
        }
    }
}



#endif /* PROGRAMACIONDINAMICA_FUNCIONACKERMANN_H_ */
