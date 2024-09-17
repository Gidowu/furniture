#include "Furniture.h"

class Wardrobe : public Furniture {
private:
    int numOfDoors; // Number of doors
    bool hasMirror; // Whether wardrobe has a mirror
    bool hasDrawers; // Whether wardrobe has drawers
    std::string finish; // Finish of the wardrobe (e.g., Glossy, Matte)

public:
    Wardrobe(std::string n, double p, int q, int doors, std::string c, std::string m, std::string qual, bool mirror, bool drawers, std::string fin)
        : Furniture(n, p, q, c, m, qual), numOfDoors(doors), hasMirror(mirror), hasDrawers(drawers), finish(fin) {}

    void display() const override {
        Furniture::display();
        std::cout << "Number of Doors: " << numOfDoors << std::endl;
        std::cout << "Mirror: " << (hasMirror ? "Yes" : "No") << std::endl;
        std::cout << "Drawers: " << (hasDrawers ? "Yes" : "No") << std::endl;
        std::cout << "Finish: " << finish << std::endl;
    }
};
