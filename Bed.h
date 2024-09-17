#include "Furniture.h"

class Bed : public Furniture {
private:
    std::string size; // Size of bed 
    bool hasHeadboard; // Whether bed has a headboard
    bool hasStorage; // Whether bed has storage underneath
    std::string mattressType; // Type of mattress 
    bool isAdjustable; // Whether the bed is adjustable

public:
    Bed(std::string n, double p, int q, std::string s, std::string c, std::string m, std::string qual, bool headboard, bool storage, std::string mattress, bool adjustable)
        : Furniture(n, p, q, c, m, qual), size(s), hasHeadboard(headboard), hasStorage(storage), mattressType(mattress), isAdjustable(adjustable) {}

    void display() const override {
        Furniture::display();
        std::cout << "Size: " << size << std::endl;
        std::cout << "Headboard: " << (hasHeadboard ? "Yes" : "No") << std::endl;
        std::cout << "Storage: " << (hasStorage ? "Yes" : "No") << std::endl;
        std::cout << "Mattress Type: " << mattressType << std::endl;
        std::cout << "Adjustable: " << (isAdjustable ? "Yes" : "No") << std::endl;
    }
};
