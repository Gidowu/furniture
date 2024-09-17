//Furniture.cpp
//Program by Wisdom Akanwe, Godwin Idowu
//This program details the member functions of the furniture base class

#include "Furniture.h"

class Chair : public Furniture {
private:
    bool hasArmrest; //unique attribute for chair

public:
    Chair(std::string n, double p, int q, std::string c, std::string m, std::string qual, bool armrest)
        : Furniture(n, p, q, c, m, qual), hasArmrest(armrest) {}

    //Constructor to create a chair using the Furniture class
    //Postconditions: All attributes of furniture are set and hasArmrest = true/false
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture
    //@param armrest determines whether or not the chair has an armrest

    bool getHasArmrest() const { return hasArmrest; }
    //Function to return whether or not the a chair has armrest
    //Postconditions: True if the chair has an armrest, false if it does not.

    void setHasArmrest(bool armrest) { hasArmrest = armrest; }
    //Function to set if there is an armrest or not
    //Postconditions: If armrest = true, hasArmrest = true, otherwise hasArmrest = false.

    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
    }
    //Display method
    //Postcondition: All information about the chair is returned
};
