#include "Furniture.h"
#include "Sofa.h"
#include "Table.h"
#include "Chair.h"
#include "Wardrobe.h"
#include "Bed.h"
#include <cassert>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iostream>

// Function to parse a single line of CSV
std::vector<std::string> ParseCSVLineString(const std::string& line) {
    std::vector<std::string> result;
    std::stringstream ss(line);
    std::string item;

    while (getline(ss, item, ',')) {
        result.push_back(item);
    }
    return result;
}

// Function to load furniture from a CSV file
void LoadFurniture(const std::string& filename) {
    std::ifstream file(filename); // Open the file using the provided filename
    std::string line;
    
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::cout << "Loading furniture from " << filename << "...\n";
    while (getline(file, line)) {
        std::vector<std::string> data = ParseCSVLineString(line);
        std::string type = data[0];
        
        // Handle different furniture types based on the 'type' field
        if (type == "sofa") {
            // Assuming format: sofa, name, price, quantity, category, material, quality, seats, upholsteryMaterial, removableCovers, cupholders
            if (data.size() >= 11) {
                Sofa sofa(data[1], std::stod(data[2]), std::stoi(data[3]), std::stoi(data[7]), data[4], data[5], data[6], data[8], data[9] == "true", data[10] == "true");
                sofa.display();
            }
        } else if (type == "table") {
            // Assuming format: table, name, price, quantity, category, material, quality, legs, glossySheen, tableType, shape
            if (data.size() >= 11) {
                Table table(data[1], std::stod(data[2]), std::stoi(data[3]), std::stoi(data[7]), data[4], data[5], data[6], data[8] == "true", data[9], data[10]);
                table.display();
            }
        } else if (type == "chair") {
            // Assuming format: chair, name, price, quantity, category, material, quality, hasArmRest, hasCushion, chairType, hasWheels
            if (data.size() >= 11) {
                Chair chair(data[1], std::stod(data[2]), std::stoi(data[3]), data[4], data[5], data[6], data[7] == "true", data[8] == "true", data[9], data[10] == "true");
                chair.display();
            }
        } else if (type == "wardrobe") {
            // Assuming format: wardrobe, name, price, quantity, category, material, quality, numOfDoors, hasMirror, hasDrawers, finish, height
            if (data.size() >= 12) {
                Wardrobe wardrobe(data[1], std::stod(data[2]), std::stoi(data[3]), std::stoi(data[7]), data[4], data[5], data[6], data[8] == "true", data[9] == "true", data[10], std::stod(data[11]));
                wardrobe.display();
            }
        } else if (type == "bed") {
            // Assuming format: bed, name, price, quantity, category, material, quality, size, hasHeadboard, hasStorage, mattressType, isAdjustable
            if (data.size() >= 12) {
                Bed bed(data[1], std::stod(data[2]), std::stoi(data[3]), data[7], data[4], data[5], data[6], data[8] == "true", data[9] == "true", data[10], data[11] == "true");
                bed.display();
            }
        }
        // Add more types of furniture here if needed
    }

    file.close(); // Close the file after reading all the data
}

int main() {
    // Test 1: Create derived class objects using their respective constructors
    Sofa sofa("Luxury Sofa", 799.99, 5, 3, "Living Room", "Leather", "High Quality", "Velvet", true, true);
    Table table("Dining Table", 399.99, 3, 4, "Dining", "Wood", "Premium", true, "Dining Table", "Rectangular");
    Chair chair("Office Chair", 149.99, 10, "Office", "Plastic", "Medium", true, false, "Armchair", true);
    Wardrobe wardrobe("Classic Wardrobe", 599.99, 4, 3, "Bedroom", "Wood", "High", true, false, "Glossy", 6.5);
    Bed bed("Queen Size Bed", 499.99, 2, "Queen", "Bedroom", "Metal", "Medium", true, true, "Memory Foam", false);

    // Display each object
    sofa.display();
    table.display();
    chair.display();
    wardrobe.display();
    bed.display();

    // Test 2: Polymorphism with display method
    Furniture* items[] = { &sofa, &table, &chair, &wardrobe, &bed };
    std::cout << "\nDisplaying all furniture items:" << std::endl;
    for(auto item : items) {
        item->display();
    }

    // Test 3: Dynamic Allocation and Cleanup
    Furniture* dynamicChair = new Chair("Gaming Chair", 299.99, 5, "Gaming", "Mesh", "High", true, true, "Office Chair", true);
    dynamicChair->display();
    delete dynamicChair;
    std::cout << "Dynamic allocation test passed." << std::endl;

    // Test 4: Load Furniture from CSV
    LoadFurniture("furniture_data.csv"); // Specify the CSV filename here

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}
