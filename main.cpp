#include <iostream>
#include "calculator.h" 

using namespace std;

int main() {
    int dropChance;
    int numAttempts;
    getInput(dropChance, numAttempts);  

    double probability = calculateProbability(dropChance, numAttempts); 

    displayResult(probability); 

    return 0;
}
