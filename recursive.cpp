#include "recursive.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::string;

/****************************************************************
** Function: revStr
** Description: This will take a string as input, and will then
                repeat the reverse of that string back to the user.
****************************************************************/
  void revStr(string str) {
    int stringLen = str.size();

    if (stringLen == 1) { //base case
      cout << str << "\n";
    } else {
      cout << str[stringLen - 1];
      str.erase(stringLen-1, 1); //shortens string
      revStr(str); //recursive call
    }

    return;
  }

/****************************************************************
** Function: sumArray
** Description: This will take an array and length of the array
                as input, and return the sum of the integers
                within the array.
****************************************************************/

  int sumArray(int arr[], int arrLen) {
    if (arrLen == 0) { //base case
      return arr[arrLen];
    }
    return arr[arrLen] + sumArray(arr,arrLen-1); //recurive call
  }    

/****************************************************************
** Function: triangleSum
** Description: This will take an integer as input, and return the
                triangular sum (think total bowling pins by row)
****************************************************************/

  int triangleSum(int num) {
    if (num == 0) { //base case
      return num;
    }
    return num + triangleSum(num-1); // recursive call
  }

