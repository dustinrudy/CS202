
#include <iostream>
#include <iomanip>
#include <string>
#include "candidate.h"
#include "candidateImp.cpp"

using namespace std;

double calculateTotal(int num, candidate candidates[]); 

string selectWinner(int num, candidate candidates[]);


int main() {
    int num;
    candidate *candidatePtr;

    cout << "Enter the number of candidates: "; 
    cin >> num;
    cout << endl;

    candidatePtr = new candidate[num];

    for(int i = 0; i < num; i++) {

        candidatePtr[i].setName();
        candidatePtr[i].setNumOfVotes();
    }
    int totalNumOfVotes;
    totalNumOfVotes = calculateTotal(num, candidatePtr);

    for(int i = 0; i < num; i++) {
        candidatePtr[i].calculatePercentage(totalNumOfVotes);
    }

    cout << endl;

    cout << left << setw(20) << "Candidate" << left << setw(20) << "Votes Recieved" << left << setw(20) << "Percentage of Total Votes" << endl;
    cout << endl;

    for(int i = 0; i < num; i++) {
        candidatePtr[i].print();
    }

    string winner;

    winner = selectWinner(num, candidatePtr);


    cout << left << setw(20) << "Total" << left << setw(20) << totalNumOfVotes;
    cout << endl;
    cout << endl;
    cout << "The Winner of the Election is " << winner; 

    return 0;
}

// Inline Function Implementation Details

double calculateTotal(int num, candidate candidates[]) {
    int total = 0;
     for (int i = 0; i < num; i++) {
        total = total + candidates[i].getNumOfVotes();
    }
    return total;

}

string selectWinner(int num, candidate candidates[]) {
    string winner;
    int max = candidates[0].getNumOfVotes();
     for(int i = 1; i < num; i++) {
         if(candidates[i].getNumOfVotes() > max) {
             max = candidates[i].getNumOfVotes();
             winner = candidates[i].getName();
         }
            
     }
     return winner;
}