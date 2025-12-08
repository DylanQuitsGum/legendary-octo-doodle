#include <iostream>

int main()
{
    const std::string STORE_NAME = "Games and Stuff";
    const std::string ADDRESS_STREET = "123 I Can Dr.";
    const std::string ADDRESS_CITY = "Oklahoma City";
    const std::string ADDRESS_STATE = "OK";
    const std::string ADDRESS_ZIPCODE = "73170";

    const double SALES_TAX = 0.0875;

    std::string GameOneTitle = "Battlefield 6";
    std::string GameTwoTitle = "Call of Duty 7";
    std::string GameThreeTitle = "Kerbal Space Program";

    std::string firstName = "";
    std::string lastName = "";
    std::string streetName = "";
    std::string city = "";
    std::string state = "";
    std::string zipCode = "";

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

    std::cout << Game1Quantity << "\t\t" << GameOneTitle << "\t\t" << Game1Price << "\t\t\t" << Game1Amount << std::endl; 
    std::cout << Game2Quantity << "\t\t" << GameTwoTitle << "\t\t" << Game2Price << "\t\t\t" << Game2Amount << std::endl;
    std::cout << Game3Quantity << "\t\t" << GameThreeTitle << "\t" << Game3Price << "\t\t\t" << Game3Amount << std::endl;

    std::cout << std::endl;

    std::cout << "\t\t\t\t\tSubtotal\t\t" << subTotal << std::endl;
    std::cout << "\t\t\t\t\tSales Tax " << SALES_TAX * 100 << "%\t\t" << taxTotal << std::endl;
    std::cout << "\t\t\t\t\tTotal\t\t\t" << grandTotal << std::endl << std::endl;
    std::cout << "Thank you and come again!" << std::endl << std::endl;

    return 0;
}