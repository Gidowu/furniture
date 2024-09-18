#include "Furniture.h"

class Table : public Furniture {
private:
    int numOfLegs; //How many legs the table has
    bool glossySheen; //The kind of material used to make the table (wood, plastic, metal, etc)
    std::string tableType; //The kind of table (desk, dining room, kitchen, etc)
    std::string shape; //round, square, rectangle


public:
    Table(std::string n, double p, int q, int legs, std::string c, std::string m, std::string qual, bool sheen,
    std::string type, std::string s)
        : Furniture(n, p, q, c, m, qual), numOfLegs(legs), glossySheen(sheen), tableType(type), shape(s) {}

    //Constructor to create a table using the Furniture class
    //Postconditions: All attributes of furniture are set. numOfLegs = legs, glossySheen is true or false,
    //tableType = type, shape = s
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture
    //@param legs is the number of table legs
    //@param sheen is true/false
    //@param type is the kind of table
    //@param s is the shape of the table


    int getNumOfLegs() const { return numOfLegs; }
    //Function to return the number of table legs
    //Postconditions: The number of table legs is returned

    bool getGlossySheen() const { return glossySheen; }
    //Function to return the table material
    //Postconditions: The table material is returned

    std::string getTableType() const { return tableType; }
    //Function to return the type of table
    //Postconditions: The table type is returned

    std::string getShape() const { return shape; }
    //Function to return the shape of the table
    //Postconditions: The table shape is returned


    void setNumOfLegs(int legs) { numOfLegs = legs; }
    //Function to set the number of seats on the sofa
    //Postconditions: numOfSeats is set to seats
    //@param legs is the number of new number of table legs

    void setGlossySheen(const bool& sheen) { glossySheen = sheen; }
    //Function to set the table material
    //Postconditions: tableMaterial = material
    //@param material is the new material

    void setTableType(const std::string& type) { tableType = type; }
    //Function to set the table type
    //Postconditions: tableType = type  
    //@param is the new table type

    void setShape(const std::string& s) { shape = s; }
    //Function to set the table sahpe
    //Postconditions: shape = p
    //@param s is the new table shape

    void display() const override {
        Furniture::display();
        std::cout << "Number of Legs: " << numOfLegs << std::endl;
        std::cout << "Glossy Sheen: " << (glossySheen ? "Yes" : "No") << std::endl;
        std::cout << "Type of table: " << tableType << std::endl;
        std::cout << "Table shape: " << shape << std::endl;
    }
    // Virtual display method
    //Postcondition: All information about the table is returned
};

