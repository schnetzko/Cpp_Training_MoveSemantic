//============================================================================
// Name        : BigData.h
// Author      : schnetzko
// Version     :
// Copyright   : All rights reserved.
// Description : CppNowConferenceExamples
//============================================================================

#include <iostream>
#include <string>
#include <utility>  // using move()

using namespace std;

class BigData {
public:
    // Default Constructor
    BigData(): x(new int(0)), str("\"default\"") {}
    
    // Constructor
    BigData(const int x, const string str) : x(new int(x)), str(str){}

    // Copy Constructor
    BigData(const BigData& big);

    // Move Constructor
    BigData(BigData&& big);

    // Copy Assignment
    BigData& operator=(const BigData& big);

    // Move Assignment
    BigData& operator=(BigData&& big);
    
    // Destructor
    ~BigData(){
    	str = "";
    	delete x;
    	x = nullptr;
    };
    
    friend ostream& operator<<(ostream &os, BigData& big);
    friend BigData operator+(const BigData& big1, const BigData& big2);

private:

    int* x;
    string str;
    
};

BigData f(BigData);
