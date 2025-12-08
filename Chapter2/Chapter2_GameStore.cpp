#include <iostream>

using namespace std;

int main()
{
    const string STORE_NAME = "Games and Stuff";
    const string ADDRESS_STREET = "123 I Can Dr.";
    const string ADDRESS_CITY = "Oklahoma City";
    const string ADDRESS_STATE = "OK";
    const string ADDRESS_ZIPCODE = "73170";

    const double SALES_TAX = 0.0875;

    string GameOneTitle = "Battlefield 6";
    string GameTwoTitle = "Call of Duty 7";
    string GameThreeTitle = "Kerbal Space Program";

    string firstName = "";
    string lastName = "";
    string streetName = "";
    string city = "";
    string state = "";
    string zipCode = "";

    double Game1Price = 69.99;
    double Game2Price = 69.99;
    double Game3Price = 29.99;

    int Game1Quantity = 0;
    int Game2Quantity = 0;
    int Game3Quantity = 0;

    double Game1Amount = Game1Price * Game1Quantity;
    double Game2Amount = Game2Price * Game2Quantity;
    double Game3Amount = Game3Price * Game3Quantity;
    double subTotal = Game1Amount + Game2Amount + Game3Amount;
    double taxTotal = subTotal * SALES_TAX;
    double grandTotal = taxTotal + subTotal;

    cout << endl << "Reciept" << endl << endl;

    cout << STORE_NAME << endl;
    cout << ADDRESS_STREET << endl;
    cout << ADDRESS_CITY << ", " << ADDRESS_ZIPCODE << endl << endl;

    cout << "Bill To" << endl;
    cout << firstName << " " << lastName << endl;
    cout << streetName << endl;
    cout << city << ", " << state << " " << zipCode << endl << endl;

    cout << "--------\t" << "-----------\t" << "\t----------\t\t" << "-----" << endl;
    cout << "Quantity\t" << "Description\t" << "\tUnit Price\t\t" << "Total" << endl;
    cout << "--------\t" << "-----------\t" << "\t----------\t\t" << "-----" << endl << endl;

    cout << Game1Quantity << "\t\t" << GameOneTitle << "\t\t" << Game1Price << "\t\t\t" << Game1Amount << endl; 
    cout << Game2Quantity << "\t\t" << GameTwoTitle << "\t\t" << Game2Price << "\t\t\t" << Game2Amount << endl;
    cout << Game3Quantity << "\t\t" << GameThreeTitle << "\t" << Game3Price << "\t\t\t" << Game3Amount << endl;

    cout << endl;

    cout << "\t\t\t\t\tSubtotal\t\t" << subTotal << endl;
    cout << "\t\t\t\t\tSales Tax " << SALES_TAX * 100 << "%\t\t" << taxTotal << endl;
    cout << "\t\t\t\t\tTotal\t\t\t" << grandTotal << endl << endl;
    cout << "Thank you and come again!" << endl << endl;

    return 0;
}