#include "menu.hpp"
#include "recursive.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

Menu::Menu() {
  return;
}

/****************************************************************
** Function: displayMenu
** Description: This will display the options for the user to 
                use for the recursive functions.
****************************************************************/

void Menu::displayMenu() {
  int choice;
  string str = "";
  int arrSize = 0;
  int triangleSize = 0;
  int arrValue = 0;
  cout << "\n1: Reverse A String" << endl;
  cout << "2: Calculate Sum of an Array" << endl;
  cout << "3: Calculate a Triangular Number" << endl;
  cout << "4: Exit" << endl << endl;
  cout << "Please choose from one of the above options: ";

  while(!(cin >> choice)) {
    cin.clear();
    cin.ignore();
  }

  switch(choice) {
    case 1 : {
      cin.ignore();
      cout << "\nPlease enter a string you would like to reverse: " << endl;
      getline(cin, str);
      cout << "\nYou entered: " << str << endl;
      cout << "Reversed String: ";
      revStr(str);
      displayMenu();
      break;
    }
    case 2 : {
      cin.ignore();
      cout << "\nPlease enter the size of the array you would like: ";
      while (!(cin >> arrSize)) {
        cin.clear();
        cin.ignore();
      }
      int arr[arrSize];
      cout << endl;
      for (int x = 0; x < arrSize; x++) {
        cout << "Please enter a integer for spot # " << x+1 << " in your array: ";
          while(!(cin >> arrValue)) {
            cin.clear();
            cin.ignore();            
          }
        arr[x] = arrValue;
      }
      cout << "\nThe sum of your array is: " << sumArray(arr, arrSize-1) << endl;
      displayMenu();
      break;
    }
    case 3 : {
      cin.ignore();
      cout << "\nPlease enter the amount of 'rows' for the triangular calculation: ";
      cin >> triangleSize;
      cout << "\nThe triangular sum of size " << triangleSize;
      cout << " is: " << triangleSum(triangleSize) << endl;
      displayMenu();
      break;
    case 4 :
      cin.ignore();
      cout << "Exiting the program." << endl << endl;
      break;
    }
    default : {
      cout << "Invalid choice, please choose a valid option." << endl;
      displayMenu();
    }
  }
}