#include "recursive.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::string;

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

  int sum(int arr[], int arrLen) {
    if (arrLen == 0) { //base case
      return arr[arrLen];
    }
    return arr[arrLen] + sum(arr,arrLen-1); //recurive call
  }    

  int triangleSum(int num) {
    if (num == 0) { //base case
      return num;
    }
    return num + triangleSum(num-1); // recursive call
  }

