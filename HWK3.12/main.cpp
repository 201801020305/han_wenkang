#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
   Account account1( 50 );
   Account account2( 25 );


   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   int withdrawalAmount;

   cout << "\nEnter withdrawal amount for account1: ";
   cin >> withdrawalAmount;
   cout << "\nAttempting to subtract " << withdrawalAmount
      << " from account1 balance\n\n";
   account1.debit( withdrawalAmount );


   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   cout << "\nEnter withdrawal amount for account2: ";
   cin >> withdrawalAmount;
   cout << "\nAttempting to subtract " << withdrawalAmount
      << " from account2 balance\n\n";
   account2.debit( withdrawalAmount );

    cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;


   int dipositAmount;

   cout << "\nEnter diposit amount for account1: ";
   cin >> dipositAmount;
   cout << "\nAttempting to add " << dipositAmount
      << " from account1 balance\n\n";
   account1.credit( dipositAmount );


   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;

   cout << "\nEnter diposit amount for account2: ";
   cin >> dipositAmount;
   cout << "\nAttempting to add " << dipositAmount
      << " from account2 balance\n\n";
   account2.credit( dipositAmount );

   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
}
