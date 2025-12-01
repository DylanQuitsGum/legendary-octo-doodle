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

    string Battlefield6Title = "Battlefield 6";
    string CoD7Title = "Call of Duty 7";
    string KerbalSpaceProgramTitle = "Kerbal Space Program";

    string firstName = "";
    string lastName = "";
    string streetName = "";
    string city = "";
    string state = "";
    string zipCode = "";

    double Battlefield6Price = 69.99;
    double CallofDuty7Price = 69.99;
    double KerbalSpaceProgramPrice = 29.99;

    int Battlefield6Quantity = 0;
    int CallofDutyQuantity = 0;
    int KerbalSpaceProgramQuantity = 0;

    double Battlefield6Amount = Battlefield6Price * Battlefield6Quantity;
    double CallofDuty7Amount = CallofDuty7Price * CallofDutyQuantity;
    double KerbalSpaceProgramAmount = KerbalSpaceProgramPrice * KerbalSpaceProgramQuantity;
    double subTotal = Battlefield6Amount + CallofDuty7Amount + KerbalSpaceProgramAmount;
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

    cout << Battlefield6Quantity << "\t\t" << Battlefield6Title << "\t\t" << Battlefield6Price << "\t\t\t" << Battlefield6Amount << endl; 
    cout << CallofDutyQuantity << "\t\t" << CoD7Title << "\t\t" << CallofDuty7Price << "\t\t\t" << CallofDuty7Amount << endl;
    cout << KerbalSpaceProgramQuantity << "\t\t" << KerbalSpaceProgramTitle << "\t" << KerbalSpaceProgramPrice << "\t\t\t" << KerbalSpaceProgramAmount << endl;

    cout << endl;

    cout << "\t\t\t\t\tSubtotal\t\t" << subTotal << endl;
    cout << "\t\t\t\t\tSales Tax " << SALES_TAX * 100 << "%\t\t" << taxTotal << endl;
    cout << "\t\t\t\t\tTotal\t\t\t" << grandTotal << endl << endl;
    cout << "Thank you and come again!" << endl << endl;

    return 0;
}