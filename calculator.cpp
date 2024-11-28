#include <iostream>
#include <cmath>
#include "calculator.h" 

using namespace std;

void getInput(int &dropChance, int &numAttempts) { 
    cout << "Enter Drop Chance (in percent): ";
    cin >> dropChance; 
    cout << "Enter Number of Attempts: ";
    cin >> numAttempts;
}

double calculateProbability(int dropChance, int numAttempts) {
  double desiredProbability = (double)dropChance / 100; 


  return 1 - pow(1 - desiredProbability, numAttempts);
}

void displayResult(double probability) {
  
  cout << "\n\nThe chance of getting the item one time is " << (probability * 100) << "%";
}
