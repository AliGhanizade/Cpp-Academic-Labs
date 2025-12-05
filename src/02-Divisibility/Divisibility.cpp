/*
Checks the divisibility of a number.
Author: Ali Ghanizade
Date: 1404-9-13
*/


#include "../utils/utils.h"

using namespace std;

void DivisibilityFunction() {
    int Number = GetNumber();
    for (int i = 1; i < Number/2; i++)
    {
        int Divisor = i ;
        if (Number % Divisor == 0) {
            cout << Number << " is divisible by " << Divisor << endl;
            cout << "\tQuotient: " << Number / Divisor << endl;
        } 
    }
    
}