#include "Furniture.h"

class Sofa : public Furniture {
private:
    int numOfSeats; //Number of seats
    std::string upholsteryMaterial; //The material used for the upholstery of the sofa
    bool removableCovers; //Indicates if the sofa's cushion covers are removable
    bool cupholders; //Indicates if the sofa has cupholders


public:
    Sofa(std::string n, double p, int q, int seats, std::string c, std::string m, std::string qual,
    std::string material, bool Cov, bool cup)
        : Furniture(n, p, q, c, m, qual), numOfSeats(seats), upholsteryMaterial(material), removableCovers(Cov), cupholders(cup){}

    //Constructor to create a sofa using the Furniture class
    //Postconditions: All attributes of furniture, upholsteryMaterial = material, numOfSeats=seats, 
    //removableCovers=Cov, bupholders=cup, and an indicator for the presence
    //of cupholders are set 
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture
    //@param seats is the number of seats
    //@param material is the upholstery material
    //@param Cov is true or false depending on whether or not the cushion covers are emovable
    //@param cup is true or false depending on the presence of cupholders

    int getNumOfSeats() const { return numOfSeats; }
    //Function to return the number of seats on the sofa
    //Postconditions: The number of seats is returned

    std::string getUpholsteryMaterial() const { return upholsteryMaterial; }
    //Function to return the upholstery material of the sofa
    //Postconditions: The type of upholstery material is returned

    bool getCupholders() const { return cupholders;}
    //Function to return whether or not the sofa has cupholders
    //Postconditons: True or false is returned

    bool getCovers() const { return removableCovers;}
    //Function to return whether or not the sofa has removable covers
    //Postconditons: True or false is returned

    void setNumOfSeats(const int& seats) { numOfSeats = seats; }
     //Function to set the number of seats on the sofa
    //Postconditions: numOfSeats is set to seats
    //@param seats is the number of sofa seats

    void setUpholsteryMaterial(const std::string& material){upholsteryMaterial = material;}
    //Function to set the upholstery material of the sofa
    //Postconditions: upholsteryMaterial is set to material
    //@param material is the kind of upholstery material

    void setRemovableCovers(const bool& Cov){removableCovers = Cov;}
    //Function to set whether or not the sofa has removable covers
    //Postconditions: removableCovers is set to Cov
    //@param cov is true or false

     void setCupholders(const bool& cup){cupholders = cup;}
    //Function to set whether or not the sofa has cupholders
    //Postconditions: cupholders is set to cup
    //@param cup is true or false


    void display() const override {
        Furniture::display();
        std::cout << "Number of Seats: " << numOfSeats << std::endl;
        std::cout << "Upholstery Material: " << upholsteryMaterial << std::endl;
        std::cout << "Removable Covers: " << (removableCovers ? "Yes" : "No") << std::endl;
        std::cout << "Cupholders: " << (cupholders ? "Yes" : "No") << std::endl;
    }
    // Virtual display method
    //Postcondition: All information about the sofa is returned
};
