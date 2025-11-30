#include <iostream>

int main()
{
    const std::string STORE_NAME = "Games and Stuff";
    const std::string ADDRESS_STREET = "123 I Can Dr.";
    const std::string ADDRESS_CITY = "Oklahoma City";
    const std::string ADDRESS_STATE = "OK";
    const std::string ADDRESS_ZIPCODE = "73170";

    const double SALES_TAX = 0.0875;

    std::string Battlefield6Title = "Battlefield 6";
    std::string CoD7Title = "Call of Duty 7";
    std::string KerbalSpaceProgramTitle = "Kerbal Space Program";

    std::string firstName = "";
    std::string lastName = "";
    std::string streetName = "";
    std::string city = "";
    std::string state = "";
    std::string zipCode = "";

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

    std::cout << std::endl << "Reciept" << std::endl << std::endl;

    std::cout << STORE_NAME << std::endl;
    std::cout << ADDRESS_STREET << std::endl;
    std::cout << ADDRESS_CITY << ", " << ADDRESS_ZIPCODE << std::endl << std::endl;

    std::cout << "Bill To" << std::endl;
    std::cout << firstName << " " << lastName << std::endl;
    std::cout << streetName << std::endl;
    std::cout << city << ", " << state << " " << zipCode << std::endl << std::endl;

    std::cout << "--------\t" << "-----------\t" << "\t----------\t\t" << "-----" << std::endl;
    std::cout << "Quantity\t" << "Description\t" << "\tUnit Price\t\t" << "Total" << std::endl;
    std::cout << "--------\t" << "-----------\t" << "\t----------\t\t" << "-----" << std::endl << std::endl;

    std::cout << Battlefield6Quantity << "\t\t" << Battlefield6Title << "\t\t" << Battlefield6Price << "\t\t\t" << Battlefield6Amount << std::endl; 
    std::cout << CallofDutyQuantity << "\t\t" << CoD7Title << "\t\t" << CallofDuty7Price << "\t\t\t" << CallofDuty7Amount << std::endl;
    std::cout << KerbalSpaceProgramQuantity << "\t\t" << KerbalSpaceProgramTitle << "\t" << KerbalSpaceProgramPrice << "\t\t\t" << KerbalSpaceProgramAmount << std::endl;

    std::cout << std::endl;

    std::cout << "\t\t\t\t\tSubtotal\t\t" << subTotal << std::endl;
    std::cout << "\t\t\t\t\tSales Tax " << SALES_TAX * 100 << "%\t\t" << taxTotal << std::endl;
    std::cout << "\t\t\t\t\tTotal\t\t\t" << grandTotal << std::endl << std::endl;
    std::cout << "Thank you and come again!" << std::endl << std::endl;

    return 0;
}