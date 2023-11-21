#include<iostream>
using namespace std;

int main()
{
    char mainChoice;
    cout << "\nCURRENCY CONVERTER";
    cout << "\n1.START (S)\n2.QUIT (Q)";
    cout << "\n\nEnter your choice: ";
    cin >> mainChoice;

    if (mainChoice == 'S' || mainChoice == 's')
    {
        double amount, converted_currency;
        int user_currency, conversionChoice;
        cout << "\n1.PKR\n2.USD\n3.RIYAL\n4.INDR\n5.POUNDS";
        cout << "\n\nChoose Your Currency (1 to 5): ";
        cin >> user_currency;
        cout << "\n\nChoose The Currency You Want to convert into (1 to 5): ";
        cin >> conversionChoice;

        switch (user_currency)
        {
        case 1:  // PKR
            if (conversionChoice == 1)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 1;
                cout << endl << amount << " PKR = " << converted_currency << " PKR";
            }
            else if (conversionChoice == 2)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 282.08;
                cout << endl << amount << " PKR = " << converted_currency << " USD";
            }
            else if (conversionChoice == 3)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 75.02;
                cout << endl << amount << " PKR = " << converted_currency << " RIYAL";
            }
            else if (conversionChoice == 4)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 3.39;
                cout << endl << amount << " PKR = " << converted_currency << " INDR";
            }
            else if (conversionChoice == 5)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 344.79;
                cout << endl << amount << " PKR = " << converted_currency << " POUNDS";
            }
            else
            {
                cout << "\nINVALID INPUT";
                return 0;
            }
            break;

        case 2:  // USD
            if (conversionChoice == 1)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 282.08;
                cout << endl << amount << " USD = " << converted_currency << " PKR";
            }
            else if (conversionChoice == 2)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 1;
                cout << endl << amount << " USD = " << converted_currency << " USD";
            }
            else if (conversionChoice == 3)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 3.75;
                cout << endl << amount << " USD = " << converted_currency << " RIYAL";
            }
            else if (conversionChoice == 4)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 83.03;
                cout << endl << amount << " USD = " << converted_currency << " INDR";
            }
            else if (conversionChoice == 5)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 0.82;
                cout << endl << amount << " USD = " << converted_currency << " POUNDS";
            }
            else {
                cout << "\nINVALID INPUT";
                return 0;
            }
            break;

        case 3:  // RIYAL
            if (conversionChoice == 1)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 75.02;
                cout << endl << amount << " RIYAL = " << converted_currency << " PKR";
            }
            else if (conversionChoice == 2)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 3.75;
                cout << endl << amount << " RIYAL = " << converted_currency << " USD";
            }
            else if (conversionChoice == 3)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 1;
                cout << endl << amount << " RIYAL = " << converted_currency << " RIYAL";

            }
            else if (conversionChoice == 4)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 22.21;
                cout << endl << amount << " RIYAL = " << converted_currency << " INDR";

            }
            else if (conversionChoice == 5)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 0.22;
                cout << endl << amount << " RIYAL = " << converted_currency << " POUNDS";
            }
            else
            {
                cout << "\nINVALID INPUT";
                return 0;
            }
            break;

        case 4:  // INDR
            if (conversionChoice == 1)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 3.39;
                cout << endl << amount << " INDR = " << converted_currency << " PKR";
            }
            else if (conversionChoice == 2)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount / 83.03;
                cout << endl << amount << " INDR = " << converted_currency << " USD";
            }
            else if (conversionChoice == 3)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 0.045;
                cout << endl << amount << " INDR = " << converted_currency << " RIYAL";
            }
            else if (conversionChoice == 4)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 1;
                cout << endl << amount << " INDR = " << converted_currency << " INDR";
            }
            else if (conversionChoice == 5)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 0.0098;
                cout << endl << amount << " INDR = " << converted_currency << " POUNDS";
            }
            else
            {
                cout << "\nINVALID INPUT";
                return 0;
            }
            break;

        case 5:  // POUNDS
            if (conversionChoice == 1)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 344.79;
                cout << endl << amount << " POUNDS = " << converted_currency << " PKR";
            }
            else if (conversionChoice == 2)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 0.82;
                cout << endl << amount << " POUNDS = " << converted_currency << " USD";
            }
            else if (conversionChoice == 3)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 4.58;
                cout << endl << amount << " POUNDS = " << converted_currency << " RIYAL";
                
            }
            else if (conversionChoice == 4)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 101.82;
                cout << endl << amount << " POUNDS = " << converted_currency << " INDR";
            }
            else if (conversionChoice == 5)
            {
                cout << "\n\nEnter Amount: ";
                cin >> amount;
                converted_currency = amount * 1;
                cout << endl << amount << " POUNDS = " << converted_currency << " POUNDS";
            }
            else
            {
                cout << "\nINVALID INPUT";
                return 0;
            }

            break;

        default:
            cout << "\nINVALID INPUT";
            return 0;
        }
    }
    else 
    {
        cout << "\n\nGOODBYE!!!" << endl << endl;
        return 0;
    }

    cout << endl << endl;
    return 0;
}


