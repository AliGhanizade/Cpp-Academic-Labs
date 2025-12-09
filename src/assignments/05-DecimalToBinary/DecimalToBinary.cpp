/*Converting Decimal numbers to Binary
Author: Narges A'amam
Date: 1404-9-18
*/
#include <iostream>

#include "../../../pkg/pkg.hpp"

using namespace std;

void ConvertDecimalToBinaryFunction(){
	int index=0;
    int size=32;
	int array[size];
    cout<<"Enter the Decimal Number:";
	int number = GetNumber();
	while(number>0)
	{
		array[index]=number%2;
		number=number/2;
		index++;
	}
	 PrintArrayFunction(array, size);



}


