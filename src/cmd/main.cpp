/* 
how to Write a C++ Practice
Author: Your Name
Date: 2024-06-15
and create func for each task
Version: 1.0
*/


#include <iostream>

#include "../assignments/assignments.hpp"

using namespace std;

int main(){


    //main var
    int NUmberOfTask;
    const int countOfTasks = 4;
    const int countOfMessage = 3;

    string Menu[countOfTasks+countOfMessage] ={" Please select the task number:",
        " 1- Max Number Function",
        " 2- Divisibility Function",
        " 3- Fibonacci Function ",
        " 4- Array Function ",
        " 0- Exit ",
        "Your Choice: "} ;



    for (;;) {
        for (int i = 0; i < countOfTasks+countOfMessage; i++)
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
            case 4 :
                {
                    int subTaskNumber;
                    cout << " Enter Sub Task Number: " << endl;
                    cout << " 1- Find Two Largest Function " << endl;
                    cout << " 2- Sort Function " << endl;
                    cin >> subTaskNumber;
                    switch (subTaskNumber) {
                        case 1 :
                        
                        FindTwoLargestFunction();
                            break;

                            case 2 :
                            {
                                int sortMethod;
                                cout << " Select Sorting Method: " << endl;
                                cout << " 1- Bubble Sort " << endl;
                                cout << " 2- Selection Sort " << endl;
                                cin >> sortMethod;
                                switch (sortMethod) {
                                    case 1 :
                                        BubbleSortFunction();
                                        break;
                                    case 2 :
                                        SelectionSortFunction();
                                        break;
                                    default:
                                        cout << "Invalid sorting method. Please try again." << endl;
                                        break;
                                }
                            }
                        default:
                            cout << "Invalid sub task number. Please try again." << endl;
                            break;
                    }
                }
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