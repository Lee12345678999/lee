#ifndef CALCULATOR_H
#define CALCULATOR_H

void getInput(int &dropChance, int &numAttempts);
double calculateProbability(int dropChance, int numAttempts);
void displayResult(double probability);

#endif
