//Furniture.cpp
//Program by Wisdom Akanwe, Godwin Idowu
//This program details the member functions of the furniture base class


#include <iostream>
#include <string>

class Furniture {
protected:
    std::string name; //Name of furniture
    std::string category; //Specializes the purpose of the furniture
    std::string material; //The material the furniture is made from
    std::string quality; //The quality of the future (cheap, expensive)
    double price; //The price of the furniture
    int quantity; //The number of pieces in stock
    int inventoryID;  // New attribute for unique inventory ID

private:
    static int nextID;  // Static class variable to generate unique IDs

public:
    
    Furniture(std::string n, double p, int q, std::string c, std::string m, std::string qual)
        : name(n), price(p), quantity(q), category(c), material(m), quality(qual),inventoryID(nextID++) {}
    //Constructor to assign the name, price, quantity, quality, material, and category of a piece of furniture
    //Postconditions: n=name, p=price, q=quantity, m=material, qual=quality, c=category, and nextID increments the ID by 1.
    //@param n is the name of the furtniture (sofa, table, chair, etc)
    //@param p is the price of the furniture piece
    //@param q is the quantity of furniture
    //@param c is the category of furniture
    //@param m is the material of the furniture
    //@param qual is the quality of the furniture

    
    virtual ~Furniture() {}
    // Virtual destructor to ensure proper cleanup in derived classes
    //Postcondition: The class is destroyed when it leaves the scope

    ///// Getter Functions /////
    std::string getName() const { return name; }
    //Function to get the name of the furniture
    //Postcondition: The furniture name is returned

    std::string getCategory() const { return category; }
    //Function to get the category of the furniture
    //Postcondition: The furniture category is returned

    std::string getMaterial() const { return category; }
    //Function to get the material of the furniture
    //Postcondition: The furniture material is returned

    std::string getQuality() const { return category; }
    //Function to get the quality of the furniture
    //Postcondition: The furniture quality is returned

    double getPrice() const { return price; }
    //Function to get the price of the furniture
    //Postcondition: The furniture price is returned

    int getQuantity() const { return quantity; }
    //Function to get the quanity of the furniture in stock
    //Postcondition: The furniture quantity is returned

    int getInventoryID() const { return inventoryID; }  // Getter for inventoryID
    //Function to get the inventoryID of the furniture
    //Postcondition: The inventoryID is returned



    // Setters
    void setName(const std::string& n) { name = n; }
    //Function to set the name of the furniture
    //Postcondition: The furniture name is set to n
    //@param n is the new name of the furniture

    void setCategory(const std::string& c) { category = c; }
    //Function to set the category of the furniture
    //Postcondition: The furniture category is set to c
    //@param c is the new category of the furniture

    void setMaterial(const std::string& m) { material = m; }
    //Function to set the material of the furniture
    //Postcondition: The furniture material is set to m
    //@param m is the new material of the furniture

     void setMaterial(const std::string& qual) { quality = qual; }
    //Function to set the quality of the furniture
    //Postcondition: The furniture quality is set to q
    //@param q is the new quality of the furniture

    void setPrice(double p) { price = p; }
    //Function to set the price of the furniture
    //Postcondition: The furniture price is set to p
    //@param p is the new price of the furniture


    void setQuantity(int q) { quantity = q; }
    //Function to set the quantity of furniture in stock
    //Postcondition: The furniture quantity is set to q
    //@param q is the quantity of furniture in stock
    
    virtual void display() const {
        std::cout << "Inventory ID: " << inventoryID << std::endl;
        std::cout << "Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << std::endl;
    }
    // Virtual display method
    //Postcondition: All information about a given piece of furniture is returned
};

// Initialize static variable
int Furniture::nextID = 1;
