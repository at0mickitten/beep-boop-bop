/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int option;
    double balance = 100, amount;
    cout << "\nBMCC Bank";
    cout << "\n---------";
    cout << "\n1.Deposit";
    cout << "\n2.Withdraw";
    cout << "\n3.Show Balance";
    cout << "\n4.EXIT";
    cout << "\nEnter option: ";
    cin >> option; 
    
    if (option == 1) {
        cout << "\nEnter amount to deposit: ";
        cin >> amount; 
        balance = balance + amount; 
        cout <<"\Your new Balance is: ";
    }
    
    else if (option == 2); {
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        balance = balance - amount; 
        cout << "\nYour new balance is: " << balance; 
    }
    
    else if (option == 3); {
        cout << "\nYour balance is: " << balance; 
    }
    else if (option == 4);{
        cout <<"\nThank you, have a nice day :)";
    }
    else 
    cout <<"\nInvalid Option. Try again.";
    return 0; 