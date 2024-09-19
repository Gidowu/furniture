#include "Furniture.h"

class Wardrobe : public Furniture {
private:
    int numOfDoors;        // Number of doors on the wardrobe
    bool hasMirror;        // Whether or not the wardrobe has a mirror
    bool hasDrawers;       // Whether or not the wardrobe has drawers
    std::string finish;    // Finish of the wardrobe 
    double height;         //The height of the wardrobe

public:
    Wardrobe(std::string n, double p, int q, int doors, std::string c, std::string m, std::string qual, bool mirror, bool drawers, 
    std::string fin, double h)
        : Furniture(n, p, q, c, m, qual), numOfDoors(doors), hasMirror(mirror), hasDrawers(drawers), finish(fin), height(h) {}

    // Constructor to create a wardrobe using the Furniture class
    // Postconditions: All attributes of furniture are set, numOfDoors = doors, hasMirror = mirror,
    // hasDrawers = drawers, finish = fin, height = h
    //@param n is the name of the furniture (wardrobe)
    //@param p is the price of the wardrobe
    //@param q is the quantity of wardrobes
    //@param doors is the number of doors on the wardrobe
    //@param c is the category of the wardrobe
    //@param m is the material of the wardrobe
    //@param qual is the quality of the wardrobe
    //@param mirror determines whether the wardrobe has a mirror
    //@param drawers determines whether the wardrobe has drawers
    //@param fin is the finish of the wardrobe (e.g., Glossy, Matte)
    //@param h is the height of the wardrobe

    int getNumOfDoors() const { return numOfDoors; }
    // Function to return the number of doors on the wardrobe
    // Postconditions: Returns the number of doors.

    bool getHasMirror() const { return hasMirror; }
    // Function to return whether or not the wardrobe has a mirror
    // Postconditions: True if the wardrobe has a mirror, false otherwise.

    bool getHasDrawers() const { return hasDrawers; }
    // Function to return whether or not the wardrobe has drawers
    // Postconditions: True if the wardrobe has drawers, false otherwise.

    std::string getFinish() const { return finish; }
    // Function to return the finish of the wardrobe
    // Postconditions: Returns the finish (e.g., Glossy, Matte).

    double getHeight() const {return height;}
    // Function to return the height of the wardrobe
    // Posttconditions: Returns the height of the wardrobe

    void setNumOfDoors(const int& doors) { numOfDoors = doors; }
    // Function to set the number of doors on the wardrobe
    // Postconditions: numOfDoors = doors
    //@param doors is the number of doors on the wardrobe

    void setHasMirror(const bool& mirror) { hasMirror = mirror; }
    // Function to set if there is a mirror or not
    // Postconditions: hasMirror = mirror
    //@param mirror is true or false

    void setHasDrawers(const bool& drawers) { hasDrawers = drawers; }
    // Function to set if there are drawers or not
    // Postconditions: hasDrawers = drawers
    //@param drawers is true or false

    void setFinish(const std::string& fin) { finish = fin; }
    // Function to set the finish of the wardrobe
    // Postconditions: finish = fin
    //@param fin is the finish of the wardrobe (e.g., Glossy, Matte)

    void setHeight(const double& h) {height = h;}
    //Function to set the height of the wardrobe
    //Postconditions: height = h
    //@param h is the height of the wardrobe

    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Number of Doors: " << numOfDoors << std::endl;
        std::cout << "Mirror: " << (hasMirror ? "Yes" : "No") << std::endl;
        std::cout << "Drawers: " << (hasDrawers ? "Yes" : "No") << std::endl;
        std::cout << "Finish: " << finish << std::endl;
        std::cout << "Height: " << height << std::endl;
    }
    // Display method
    // Postcondition: All information about the wardrobe is returned
};
