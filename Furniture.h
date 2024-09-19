#ifndef FURNITURE_H
#define FURNITURE_H

#include <iostream>
#include <string>

class Furniture {
protected:
    std::string name; // Name of furniture
    std::string category; // Specializes the purpose of the furniture
    std::string material; // The material the furniture is made from
    std::string quality; // The quality of the furniture (cheap, expensive)
    double price; // The price of the furniture
    int quantity; // The number of pieces in stock
    int inventoryID;  // Unique inventory ID

private:
    static int nextID;  // Static class variable to generate unique IDs

public:
    // Constructor with parameters
    Furniture(std::string n, double p, int q, std::string c, std::string m, std::string qual)
        : name(n), price(p), quantity(q), category(c), material(m), quality(qual), inventoryID(nextID++) {}

    // Virtual destructor
    virtual ~Furniture() {}

    ///// Getter Functions /////
    std::string getName() const { return name; }
    std::string getCategory() const { return category; }
    std::string getMaterial() const { return material; }
    std::string getQuality() const { return quality; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    int getInventoryID() const { return inventoryID; }

    ///// Setter Functions /////
    void setName(const std::string& n) { name = n; }
    void setCategory(const std::string& c) { category = c; }
    void setMaterial(const std::string& m) { material = m; }
    void setQuality(const std::string& q) { quality = q; }
    void setPrice(const double& p) { price = p; }
    void setQuantity(const int& q) { quantity = q; }

    // Virtual display method
    virtual void display() const {
        std::cout << "Inventory ID: " << inventoryID << std::endl;
        std::cout << "Name: " << name << ", Category: " << category
                  << ", Material: " << material << ", Quality: " << quality
                  << ", Price: $" << price << ", Quantity: " << quantity << std::endl;
    }
};

// Initialize static variable
int Furniture::nextID = 1;

#endif // FURNITURE_H
