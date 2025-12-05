/* 
how to Write a C++ Practice
Author: Your Name
Date: 2024-06-15
and create func for each task
Version: 1.0
*/


#include <iostream>

#include "../01-MaxNumber/MaxNumber.cpp"
#include "../02-Divisibility/Divisibility.cpp"
#include "../03-Fibonacci/Fibonacci.cpp"

using namespace std;

int main(){


    //main var
    int NUmberOfTask;
    const int countOfTasks = 3;
    string Menu[countOfTasks+3] ={" Please select the task number:",
        " 1- Max Number Function",
        " 2- Divisibility Function",
        " 3- Fibonacci Function ",
        " 0- Exit ",
        "Your Choice: "} ;



    for (;;) {
        for (int i = 0; i < countOfTasks+3; i++)
        {
            cout << Menu[i] << endl;
        }
        
        cin >> NUmberOfTask;
         switch (NUmberOfTask) {
            case 1 :
                MaxNumberFunction();
            break;
            case 2 :
                DivisibilityFunction();
            break;
            case 3 :
                FibonacciFunction();
            break;

            case 0 :
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
          default:
            cout << "Invalid task number. Please try again." << endl;
            break;

        }


    }
    return 0;
}