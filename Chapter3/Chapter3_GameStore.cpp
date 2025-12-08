#include <iostream>
#include <string>
#include <iomanip> // NEW: Required for setprecision, fixed, and setw

using namespace std;

int main()
{
    // --- CONSTANTS ---
    const string STORE_NAME = "Games and Stuff";
    const string ADDRESS_STREET = "123 I Can Dr.";
    const string ADDRESS_CITY = "Oklahoma City";
    const string ADDRESS_STATE = "OK";
    const string ADDRESS_ZIPCODE = "73170";

    const double SALES_TAX_RATE = 0.0875;

    // --- VARIABLES ---
    string Game1Title = "Battlefield 6";
    string Game2Title = "Call of Duty 7";
    string Game3Title = "Kerbal Space Program";

    string firstName;  // Removed hardcoded values
    string lastName;
    string streetName;
    string city;
    string state;
    string zipCode;

    double Game1Price = 69.99;
    double Game2Price = 69.99;
    double Game3Price = 29.99;

    int Game1Quantity = 0;
    int Game2Quantity = 0;
    int Game3Quantity = 0;

    // --- INPUT SECTION (Chapter 3.1 - 3.8) ---
    cout << "--- CUSTOMER DATA ENTRY ---" << endl;
    
    cout << "Enter Customer First Name: ";
    cin >> firstName;
    
    cout << "Enter Customer Last Name: ";
    cin >> lastName;

    cin.ignore(); 

    cout << "Enter Street Address: ";
    getline(cin, streetName); // Allows spaces in address

    cout << "Enter City: ";
    getline(cin, city);

    cout << "Enter State: ";
    cin >> state;

    cout << "Enter Zip Code: ";
    cin >> zipCode;

    cout << endl << "--- ORDER ENTRY ---" << endl;
    cout << "How many copies of " << Game1Title << "? ";
    cin >> Game1Quantity;

    cout << "How many copies of " << Game2Title << "? ";
    cin >> Game2Quantity;

    cout << "How many copies of " << Game3Title << "? ";
    cin >> Game3Quantity;

    // --- PROCESSING SECTION (Calculations) ---
    double Game1Amount = Game1Price * Game1Quantity;
    double Game2Amount = Game2Price * Game2Quantity;
    double Game3Amount = Game3Price * Game3Quantity;
    
    double subTotal = Game1Amount + Game2Amount + Game3Amount;
    double taxTotal = subTotal * SALES_TAX_RATE;
    double grandTotal = subTotal + taxTotal;

    // --- OUTPUT SECTION (Formatting) ---
    cout << endl << "RECEIPT" << endl;
    cout << "------------------------------------------------" << endl;

    cout << STORE_NAME << endl;
    cout << ADDRESS_STREET << endl;
    cout << ADDRESS_CITY << ", " << ADDRESS_ZIPCODE << endl << endl;

    cout << "Bill To:" << endl;
    cout << firstName << " " << lastName << endl;
    cout << streetName << endl;
    cout << city << ", " << state << " " << zipCode << endl << endl;

    cout << fixed << showpoint << setprecision(2); 

    // Table Header
    cout << left << setw(10) << "QTY" 
         << setw(30) << "DESCRIPTION" 
         << setw(12) << "UNIT PRICE" 
         << setw(12) << "TOTAL" << endl;
    
    cout << "----------------------------------------------------------------" << endl;

    // Row 1
    cout << setw(10) << Game1Quantity 
         << setw(30) << Game1Title 
         << "$" << setw(11) << Game1Price 
         << "$" << Game1Amount << endl;

    // Row 2
    cout << setw(10) << Game2Quantity 
         << setw(30) << Game2Title 
         << "$" << setw(11) << Game2Price 
         << "$" << Game2Amount << endl;

    // Row 3
    cout << setw(10) << Game3Quantity 
         << setw(30) << Game3Title 
         << "$" << setw(11) << Game3Price 
         << "$" << Game3Amount << endl;

    cout << endl;

    // Totals Area (Using right alignment for numbers if desired, keeping left for simplicity)
    cout << right; // Switch to right alignment for totals
    cout << setw(53) << "Subtotal: $ " << setw(8) << subTotal << endl;
    cout << setw(53) << "Tax: $ " << setw(8) << taxTotal << endl;
    cout << setw(53) << "Total: $ " << setw(8) << grandTotal << endl;

    cout << endl << "Thank you and come again!" << endl << endl;

    return 0;
}