//
//  BigData.cpp
//  CppNowExamples
//
//  Created by Nico Janetzko on 29.03.15.
//  Copyright (c) 2015 Nico Janetzko. All rights reserved.
//

#include "BigData.h"

// Copy Constructor
BigData::BigData(const BigData& big){
	x = big.x;
	str = big.str;

	cout << "\t" << "(BigData: Copy Constructor called!)\n";
};

// Move Constructor
BigData::BigData(BigData&& big) {
	x = big.x;          // steal the pointer
	big.x = nullptr;    // clear the source

	str = (move)(big.str);

	cout << "\t" << "(BigData: Move Constructor called!)\n";
};

// Copy Assignment
BigData& BigData::operator=(const BigData& big){
	if (this != &big){
		delete x;
		x = big.x;
		str = big.str;
	}
	cout << "\t" << "(BigData: Copy Assignment called!)\n";
	return *this;
}

// Move Assignment
BigData& BigData::operator=(BigData&& big){
	if (this != &big){
		delete x;       	// destroy the current obj
		x = big.x;          // steal the pointer
		big.x = nullptr;    // clear the source
		str = (move)(big.str);
	}
	cout << "\t" << "(BigData: Move Assignment called!)\n";
	return *this;
};

// overloading operator<<
ostream& operator<<(ostream& os, BigData& big){
    
    os << "x=" << big.x << ",";
    if (big.x) {
    	os << "x=" << *(big.x) << ",";
    }
    os << "str=" << big.str;
    
    return os;
}

// overloading operator+
BigData operator+(const BigData& big1, const BigData& big2){

    BigData result;

    result.str = big1.str + " + " + big2.str;
    *(result.x) = *(big1.x) + *(big2.x);

    return result;
}

BigData f(BigData bigdata){
    return bigdata;
}
