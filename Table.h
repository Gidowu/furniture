#include "Furniture.h"

class Table : public Furniture {
private:
    int numOfLegs;

public:
    Table(std::string n, double p, int q, int legs, std::string c, std::string m, std::string qual)
        : Furniture(n, p, q, c, m, qual), numOfLegs(legs) {}

    //Constructor to create a table using the Furniture class
    //Postconditions: All attributes of furniture and the number of table legs are set 
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture
    //@param legs is the number of table legs


    int getNumOfLegs() const { return numOfLegs; }
    //Function to return the number of table legs
    //Postconditions: The number of table legs is returned

    void setNumOfLegs(int legs) { numOfLegs = legs; }
      //Function to set the number of seats on the sofa
    //Postconditions: numOfSeats is set to seats


    void display() const override {
        Furniture::display();
        std::cout << "Number of Legs: " << numOfLegs << std::endl;
    }
    // Virtual display method
    //Postcondition: All information about the table is returned
};

