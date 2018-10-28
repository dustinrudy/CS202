#include "candidate.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void candidate::setName() {
    string n;
    cout << "-----------------------------------" << endl;
    cout << "Enter the Name of Candidate: ";
    cin >> n;
    name = n; 
    
}

void candidate::setNumOfVotes() {
    int n;
    cout << "Enter the number of votes this candidate recieved: ";
    cin >> n;
    cout << endl;

    numOfVotes = n;
} 


void candidate::print() const {
    cout << fixed << setprecision(2);
    cout << left << setw(20) << name << left << setw(20) << numOfVotes << left << setw(20) << percentage << endl;
}

double candidate::getNumOfVotes() const {
    return numOfVotes;
}

string candidate::getName() const {
    return name;
}

void candidate::calculatePercentage(double total) {

    percentage = (numOfVotes / total) * 0.01;
    percentage = percentage * 10000;

}


candidate::candidate() {
    name = "";
    numOfVotes = 0;
    percentage = 0.00;
}

candidate::candidate(string n, int num, double p) {
    name = n;
    numOfVotes = num; 
    percentage = p;
}