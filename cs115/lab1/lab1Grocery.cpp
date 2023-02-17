// Name:Shafkat Alam
// Student Number: 200443237
// Date: 04/09/2021

// Filename: lab1Grocery.cpp
// Purpose: To implement Uncle Bob's simple small-town grocery store calculator
//           as outlined in the programming exercise description.

#include <iostream>
#include <iomanip>
using namespace std;

const int NUM = 5;//fixed by changing value to 5

int main()
{
  // This is for printing money in the proper format with two decimal places
  cout << setprecision(2) << fixed;

  // 1. Declare two arrays one for cost and one for tax
  double costArray[NUM];
  double taxArray[NUM] = {0};

  // 2. Declare additional variables such as letter input, totals for cost and tax.
  char taxAppliedOption;
  double totalCost = 0.0, totalTax = 0.0;

  // 3. Loop five times //fixed code with adding semicolons
  for (int i=0; i < NUM; i++)
  {
    // i. prompt for cost
	  cout << "cost? ";

    // ii. input the cost into the array
    cin >> costArray[i]; //fixed by replacing 0 with i

    // iii. prompt for y and n
    cout << "tax? (y/n) ";

    // iv. input the y and n
    //fixed by removing endl
	  cin >> taxAppliedOption;

    // v. if the letter is equal to y, then store the tax into the tax array 
    //fixed error by changing quotation marks and adding equal sign
	if (taxAppliedOption == 'y')
      taxArray[i] = costArray[i] * 0.1;
  }

  // 4. Print (cout) "For your review, here are your values:" with an endl.
  //   Then print some headers for the columns of Cost and Tax on a new line
  cout << "For your review, here are your values:\n   Cost     Tax"<< endl;
  
  // 5. Loop five times
         //i. print the cost and the tax nicely in columns (Hint: try setw(10))
         //ii. add the current element in the cost array to the "totalCost"
         //iii. add the current element in the tax array to the "totalTax"

  for (int i = 0; i  < NUM; i++){

    totalCost += costArray[i];
    totalTax += taxArray[i];
    cout << setw(7) << costArray[i] << setw(9) << taxArray[i] << endl;
  }

  // 6. Print a line of dashes followed by an endl.
  // Then print the "totalCost" and "totalTax" nicely in columns

  cout << "   --------------" << endl;
  cout << setw(8) << totalCost << setw(8) << totalTax << endl;

  // 7. Print a message "Your total bill is:" and the total bill amount
  cout << "Your total bill is:  " << totalCost + totalTax << endl;
  
}
