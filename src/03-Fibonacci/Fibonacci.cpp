#include "../utils/utils.h"
#include <iostream>

void FibonacciFunction() {
    int number = GetNumber();
    if (number <= 1){
        std::cout << "Fibonacci number is: " << number << std::endl;
        return;
    }
	
    int prev1 = 1, prev2 = 0;

  	int curr;
    std::cout << "Fibonacci series: " << std::endl<< prev2 << " " << prev1 << " ";
    for (int i = 1; i <= number-2; i++) {
        std::cout << prev1 + prev2  << " ";
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    std::cout << std::endl;
    return;
}
