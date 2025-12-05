/* 
how to Write a C++ Practice
Author: Your Name
Date: 2024-06-15
and create func for each task
Version: 1.0
*/


#include <iostream>

#include "../01-MaxNumber/MaxNumber.cpp"

using namespace std;

int main(){


    //main var
    int NUmberOfTask;
    string Intro = "Hi I am Write a C++ Practice";
    string Menu = "\n Please select the task number: \n 1- Max Number Function \n   0- Exit \n Your Choice: ";



    for (;;) {
        cout<< Menu;
        cin >> NUmberOfTask;
         switch (NUmberOfTask) {
            case 1 :
                MaxNumberFunction();
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