#include <iostream>
#include <nlohmann/json.hpp>
#include <map>
#include <vector>

using json = nlohmann::json;

class DataFrame {
    public:
        DataFrame(const json& data) {
            // Assuming all columns have the same size
            size_t numRows = data.begin()->second.size();

            // Iterate over columns and create dictionary for each
            for (auto& column : data.items()) {
                if (column.second.size() != numRows) {
                    throw std::runtime_error("All columns must have the same size.");
                }

                columns[column.first] = column.second;
            }
        }

        void print() const {
            for (const auto& column : columns) {
                std::cout << column.first << ": ";
                for (const auto& value : column.second) {
                    std::cout << value << " ";
                }
                std::cout << std::endl;
            }
        }

    private:
        std::map<std::string, std::vector<int>> columns;
};

int main() {
    // JSON-like data
    json jsonData = {
        {"column1", {1, 2, 3}},
        {"column2", {4, 5, 6}},
        {"column3", {7, 8, 9}}
    };

    try {
        // Create a DataFrame from the JSON-like data
        DataFrame myDataFrame(jsonData);

        // Print the DataFrame
        myDataFrame.print();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
