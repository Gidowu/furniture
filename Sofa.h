#include "Furniture.h"

class Sofa : public Furniture {
private:
    int numOfSeats; //Number of seats

public:
    Sofa(std::string n, double p, int q, int seats, std::string c, std::string m, std::string qual)
        : Furniture(n, p, q, c, m, qual), numOfSeats(seats) {}

     //Constructor to create a sofa using the Furniture class
    //Postconditions: All attributes of furniture and the number of seats on the sofa are set 
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture
    //@param seats is the number of seats

    int getNumOfSeats() const { return numOfSeats; }
    //Function to return the number of seats on the sofa
    //Postconditions: The number of seats is returned

    void setNumOfSeats(int seats) { numOfSeats = seats; }
     //Function to set the number of seats on the sofa
    //Postconditions: numOfSeats is set to seats

    void display() const override {
        Furniture::display();
        std::cout << "Number of Seats: " << numOfSeats << std::endl;
    }
    // Virtual display method
    //Postcondition: All information about the sofa is returned
};
