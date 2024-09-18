#include "Furniture.h"

class Bed : public Furniture {
private:
    std::string size;       // Size of the bed (e.g., twin, queen, king)
    bool hasHeadboard;      // Whether or not the bed has a headboard
    bool hasStorage;        // Whether or not the bed has storage underneath
    std::string mattressType; // Type of mattress (e.g., foam, spring, hybrid)
    bool isAdjustable;      // Whether or not the bed is adjustable

public:
    Bed(std::string n, double p, int q, std::string s, std::string c, std::string m, std::string qual, bool headboard, bool storage, std::string mattress, bool adjustable)
        : Furniture(n, p, q, c, m, qual), size(s), hasHeadboard(headboard), hasStorage(storage), mattressType(mattress), isAdjustable(adjustable) {}

    // Constructor to create a bed using the Furniture class
    // Postconditions: All attributes of furniture are set, size = s, hasHeadboard = headboard, 
    // hasStorage = storage, mattressType = mattress, isAdjustable = adjustable
    //@param n is the name of the furniture (bed)
    //@param p is the price of the bed
    //@param q is the quantity of beds
    //@param s is the size of the bed (e.g., twin, queen, king)
    //@param c is the category of the bed
    //@param m is the material of the bed
    //@param qual is the quality of the bed
    //@param headboard determines whether the bed has a headboard
    //@param storage determines whether the bed has storage underneath
    //@param mattress is the type of mattress used in the bed
    //@param adjustable determines whether the bed is adjustable

    std::string getSize() const { return size; }
    // Function to return the size of the bed
    // Postconditions: Returns the bed size.

    bool getHasHeadboard() const { return hasHeadboard; }
    // Function to return whether or not the bed has a headboard
    // Postconditions: True if the bed has a headboard, false otherwise.

    bool getHasStorage() const { return hasStorage; }
    // Function to return whether or not the bed has storage
    // Postconditions: True if the bed has storage, false otherwise.

    std::string getMattressType() const { return mattressType; }
    // Function to return the type of mattress
    // Postconditions: Returns the mattress type.

    bool getIsAdjustable() const { return isAdjustable; }
    // Function to return whether or not the bed is adjustable
    // Postconditions: True if the bed is adjustable, false otherwise.

    void setSize(const std::string& s) { size = s; }
    // Function to set the size of the bed
    // Postconditions: size = s
    //@param s is the size of the bed (e.g., twin, queen, king)

    void setHasHeadboard(const bool& headboard) { hasHeadboard = headboard; }
    // Function to set if there is a headboard or not
    // Postconditions: hasHeadboard = headboard
    //@param headboard is true or false

    void setHasStorage(const bool& storage) { hasStorage = storage; }
    // Function to set if there is storage or not
    // Postconditions: hasStorage = storage
    //@param storage is true or false

    void setMattressType(const std::string& mattress) { mattressType = mattress; }
    // Function to set the mattress type
    // Postconditions: mattressType = mattress
    //@param mattress is the type of mattress used in the bed

    void setIsAdjustable(const bool& adjustable) { isAdjustable = adjustable; }
    // Function to set whether the bed is adjustable
    // Postconditions: isAdjustable = adjustable
    //@param adjustable is true or false

    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Size: " << size << std::endl;
        std::cout << "Headboard: " << (hasHeadboard ? "Yes" : "No") << std::endl;
        std::cout << "Storage: " << (hasStorage ? "Yes" : "No") << std::endl;
        std::cout << "Mattress Type: " << mattressType << std::endl;
        std::cout << "Adjustable: " << (isAdjustable ? "Yes" : "No") << std::endl;
    }
    // Display method
    // Postcondition: All information about the bed is returned
};
