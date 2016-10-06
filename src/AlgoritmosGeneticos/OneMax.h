/*
 * OneMax.h
 *
 *  Created on: Oct 6, 2016
 *      Author: randy
 */

#ifndef ALGORITMOSGENETICOS_ONEMAX_H_
#define ALGORITMOSGENETICOS_ONEMAX_H_


/*OneMax*/

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;


int size_genes = 75; /*size of genes*/
int size_pop = 20; /*size of individuals in the population*/
int size_tor = 50; /*size of tor*/
int gen = 500; /*size of generations*/
double prob_mut = 0.2; /* prob. of mutation */
double prob_cross = 0.7; /*prob. of crossing */
vector <vector<int>> population; /*vectors full of vectors*/

/*Prototypes*/
void createPopulation();
void showPopulation();
int getAverage(vector<int> single);
void mutation(vector<int>& single);
void crossing(int index1, int index2, vector<int>& son );
int getBest();


/*
 * Crear Poblacion
 */
void createPopulation(){
	for(int i = 0; i < size_pop; i++){
		vector<int> single;

		for(int j = 0; j < size_genes; j++){
			int num = rand() % 2;
			single.push_back(num);
		}
		population.push_back(single);
	}
}

/**
 * Mostrar Poblacion
 */
void showPopulation(){
	for(int i = 0; i < size_pop; i++){
		for(int j = 0; j < size_genes; j++)
			cout << population[i][j] << " ";
		cout << endl;
	}
}

/**
 * Sumatoria
 */
int getAverage(vector<int> single){
	int sum = 0;

	for(int i = 0; i < size_genes; i++){
		sum += single[i];
	}
	return sum;
}

/**
 * Mutacion
 */
void mutation(vector<int>& single){

	int gene = rand() % size_genes;

	if(single[gene] == 0){
		single[gene] = 1;
	}else{
		single[gene] = 0;

	}
}

/**
 * Cruzamiento
 */
void crossing(int index1, int index2, vector<int>& son ){
	int score = rand() % size_genes;

	for(int i = 0; i <= score; i++){
		son.push_back(population[index1][i]);
	}
	for(int i = score + 1; i < size_genes; i++){
		son.push_back(population[index2][i]);
	}
}

/**
 * Fitness
 */
int getBest(){
	int best_index = 0;
	int best_score = getAverage(population[0]);

	for(int i = 1; i < size_pop; i++){
		int score = getAverage(population[i]);
		if(score > best_score){
			best_index = i;
			best_score = score;
		}
	}

	return best_index;
}

void oneMax(){
	srand(time(NULL));

	createPopulation();
	//showPopulation();

	for(int i = 0; i < gen; i++){
		for(int j = 0; j < size_tor; j++){
			double prob = ((double) rand() / ((double)RAND_MAX + 1));

			if(prob < prob_cross){
				int index1 = rand() % size_pop;
				int index2;

				do
				{
					index2 = rand() % size_pop;
				}

				while(index1 == index2);

				vector<int> son;
				crossing(index1, index2, son);
				prob = ((double) rand() / ((double)RAND_MAX + 1));

				if(prob < prob_mut){
					mutation(son);
				}

				int score_pair = getAverage(population[index1]);
				int score_son = getAverage(son);


				if(score_son > score_pair){
					for(int k = 0; k < size_genes; k++)
						population[index1][k] = son[k];
				}
			}
		}

		cout << "Generation " << i + 1 << endl;
		cout << "Best: ";

		int best_index = getBest();
		int best_score = getAverage(population[best_index]);

		for(int j = 0; j < size_genes; j++)
			cout << population[best_index][j] << " ";

		cout << "\nBest Score: " << best_score << "\n\n";

		if(best_score == size_genes){
			break;
		}
	}
}



#endif /* ALGORITMOSGENETICOS_ONEMAX_H_ */
