#include "lib/dict.h"
#include "lib/dataframe.h"

// DataFrame example
DataFrame myDataFrame;

#include <iostream>

int main() {

    // Dictionary<std::string, int> myDictionary;
    // myDictionary.insert("apple", 5);
    // myDictionary.insert("banana", 3);

    // std::cout << "Number of apples: " << myDictionary["apple"] << std::endl;

    // if (myDictionary.contains("banana")) {
    //     std::cout << "Number of bananas: " << myDictionary["banana"] << std::endl;
    // } else {
    //     std::cout << "Bananas not found in the dictionary." << std::endl;
    // }


    std::cout << "Size of the DataFrame: " << myDataFrame.size() << std::endl;

    std::cout << "Values in column1:" << std::endl;
    for (int value : myDataFrame["column1"]) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}