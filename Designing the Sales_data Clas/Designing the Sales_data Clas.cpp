#include <iostream>
#include "BankSystem.h"
#include "BankMenu.h"


using namespace std;


int main()
{
    BankSystem system;
    BankMenu menu;


    int choice;


    do
    {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Create account\n";
        cout << "2. Show accounts\n";
        cout << "3. Select account\n";
        cout << "4. Open current account\n";
        cout << "0. Exit\n";
        cout << "Choice: ";

        cin >> choice;



        switch (choice)
        {

        case 1:
            system.createAccount();
            break;


        case 2:
            system.showAccounts();
            break;


        case 3:
            system.selectAccount();
            break;


        case 4:

            if (system.hasActiveAccount())
            {
                menu.run(system.getCurrentAccount());
            }
            else
            {
                cout << "No account selected!\n";
            }

            break;


        case 0:
            cout << "Goodbye!\n";
            break;


        default:
            cout << "Invalid choice!\n";
        }


    } while (choice != 0);



    return 0;
}