#ifndef candidate_H
#define candidate_H

#include <string>

using namespace std;

class candidate {
    public: 

    virtual void print() const;

    void setName();

    void setNumOfVotes();

    double getNumOfVotes() const;

    void calculatePercentage(double total);

    string getName() const;

    candidate();

    candidate(string n, int num, double p);
    
    private: 
    string name;
    int numOfVotes;
    double percentage;
};




#endif