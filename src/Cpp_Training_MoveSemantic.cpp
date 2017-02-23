//
//  main.cpp
//  CppNowExamples
//
//  Created by Nico Janetzko on 18.03.15.
//  Copyright (c) 2015 Nico Janetzko. All rights reserved.
//

#include "BigData.h"

using namespace std;

int main(int argc, const char * argv[]) {

    BigData A(2, "\"this is A\"");  // Constructor
    BigData B(3, "\"this is B\"");  // Constructor
    BigData C, D;                   // Default Constructor
    BigData E1 (3, "number 3"), E2 (8, "number 8"); // Constructor
    BigData Result;					// Default Constructor

    cout << "\n\nCONSTRUCTION EXAMPLES\n";
    cout << "\n::: BigData newA(A);\n";
    BigData newA(A);
    cout << "\t" << "A: " << A << "\n";
    cout << "\t" << "newA: " << newA << "\n";

    cout << "\n::: BigData newB(move(A));\n";
    BigData newB(move(B));
    cout << "\t" << "B: " << B << "\n";
    cout << "\t" << "newB: " << newB << "\n";

    cout << "\n::: BigData newC1 = f(C);\n";
    BigData newC1 = f(C);
    cout << "\t" << "C: " << C << "\n";
    cout << "\t" << "newC1: " << newC1 << "\n";

    cout << "\n::: BigData newC2 = f(BigData());\n";
    BigData newC2 = f(BigData());
    cout << "\t" << "newC2: " << newC2 << "\n";

    cout << "\n\nASSIGNMENT EXAMPLES\n";
    cout << "\n::: B = D;\n";
    B = D;
    cout << "\t" << "B: " << B << "\n";
    cout << "\t" << "D: " << D << "\n";

    cout << "\n::: B = (move)(D);\n";
    B = (move)(D);
    cout << "\t" << "B: " << B << "\n";
    cout << "\t" << "D: " << D << "\n";

    cout << "\n::: Result = E1 + E2;\n";
    Result = E1 + E2;
    cout << "\t" << "E1: " << E1 << "\n";
    cout << "\t" << "E2: " << E2 << "\n";
    cout << "\t" << "Result: " << Result << "\n";

    return 0;
}
