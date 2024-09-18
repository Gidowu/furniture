//Furniture.cpp
//Program by Wisdom Akanwe, Godwin Idowu
//This program details the member functions of the furniture base class

#include "Furniture.h"

class Chair : public Furniture {
private:
    bool hasArmrest; //Whether or not the chair has an armrest
    bool hasCushion; //Whether or not the chair has a cushion
    std::string chairType; //What kind of chair is this (stool, dining room chair, armchair, etc)
    bool hasWheels; //Whether or not the chair has wheels
    

public:
    Chair(std::string n, double p, int q, std::string c, std::string m, std::string qual, bool armrest,
    bool cushion, std::string type, bool wheels)
        : Furniture(n, p, q, c, m, qual), hasArmrest(armrest), hasCushion(cushion), chairType(type), hasWheels(wheels) {}

    //Constructor to create a chair using the Furniture class
    //Postconditions: All attributes of furniture are set, hasArmrest = true/false, 
    //chairType =type, hasWheels=true/false
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture
    //@param armrest determines whether or not the chair has an armrest
    //@param cushion determines whether or not the chair has a cushion
    //@param type is the kind of chair (stool, dining room chair, armchair, etc)
    //@param wheels determines whether or not the chair has wheels

    bool getHasArmrest() const { return hasArmrest; }
    //Function to return whether or not the a chair has armrest
    //Postconditions: True if the chair has an armrest, false if it does not.

    bool getHasCushion() const { return hasCushion; }
    //Function to return whether or not the a chair has a cushion
    //Postconditions: True if the chair has an cushion, false if it does not.

    std::string getChairType() const { return chairType; }
    //Function to return the chair type
    //Postconditions: The chair type is printed.

    bool getHasWheels() const { return hasWheels; }
    //Function to return whether or not the a chair has wheels
    //Postconditions: True if the chair has wheels, false if it does not.

    void setHasArmrest(const bool& armrest) { hasArmrest = armrest; }
    //Function to set if there is an armrest or not
    //Postconditions: If armrest = true, hasArmrest = true, otherwise hasArmrest = false.
    //@param armest is true or false

    void setHasCushion(const bool& cushion) { hasCushion = cushion; }
    //Function to set if there is a cushion or not
    //Postconditions: hascushion = cusion
    //@param cushion is true or false

    void setChairType(const std::string& type ){ chairType = type; }
    //Function to set the chair type
    //Postconditions: chairType = type
    //@param type is the the type of chair

    void setHasWheels(bool wheels) { hasWheels = wheels; }
    //Function to set whether or not the chair has wheels
    //Postconditions: hasWheels = wheels
    //@param wheels is true or false


    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
        std::cout << "Cushion: " << (hasCushion ? "Yes" : "No") << std::endl;
        std::cout << "Type of chair: " << chairType << std::endl;
        std::cout << "Wheels: " << (hasWheels ? "Yes" : "No") << std::endl;
    }
    //Display method
    //Postcondition: All information about the chair is returned
};
