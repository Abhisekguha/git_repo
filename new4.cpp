#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<double>> readCSV(string filename) {
    vector<vector<double>> data;
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        vector<double> row;
        stringstream ss(line);
        string value;

        while (getline(ss, value, ',')) {
            try {
                double num = stod(value);
                row.push_back(num);
            } catch (const invalid_argument& ia) {
                cout << "Invalid input: " << value << endl;
            }
        }

        if (!row.empty()) {
            data.push_back(row);
        }
    }

    file.close();
    return data;
}

int main() {
    vector<vector<double>> data = readCSV("css101.csv");

    // Print the data
    for (vector<double> row : data) {
        for (double num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
