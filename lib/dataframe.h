#include "dict.h"
#include <iostream>

// Simple DataFrame
class DataFrame {
    public:
        void addColumn(
            const std::string& columnName, 
            const std::vector<int>& columnData) {

            data[columnName] = columnData;
        }

        std::vector<int>& operator[](const std::string& columnName) {
            return data[columnName];
        }

        size_t size() const {
            if (data.empty()) {
                return 0;
                
            } else {
                // Assuming all columns have the same size
                return data.begin() -> second.size();
            }
        }

    private:
        std::map <std::string, std::vector<int>> data;
};
