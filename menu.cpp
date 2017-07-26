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
  string str;
  cout << "\n1: Reverse A String" << endl;
  cout << "2: Calculate Sum of an Array" << endl;
  cout << "3: Calculate a Triangular Number" << endl;
  cout << "4: Exit" << endl << endl;
  cout << "Please choose from one of the above options: ";
  cin >> choice;

  switch(choice) {
    case 1 :
      cin.ignore();
      cout << "\nPlease enter a string you would like to reverse: " << endl;
      getline(cin, str);
      cout << "\nYou entered: " << str << endl;
      cout << "Reversed String: ";
      revStr(str);
      displayMenu();
      break;
    case 2 :
      cin.ignore();
      displayMenu();
      break;
    case 3 :
      cin.ignore();
      displayMenu();
      break;
    case 4 :
      cin.ignore();
      cout << "Exiting the program." << endl << endl;
      break;
    default :
      cout << "Invalid choice, exiting the program." << endl << endl;
  }
}