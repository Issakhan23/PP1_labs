//518
#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    // Dynamically allocate 2D array
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }
    
    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }
    
    // Arrays to store min values and their coordinates
    int* minValues = new int[m];
    int* minRows = new int[m];
    
    // Initialize min values using first element of each column
    for (int j = 0; j < m; j++) {
        minValues[j] = matrix[0][j];
        minRows[j] = 0;
    }
    
    // Find minimum in each column
    for (int j = 0; j < m; j++) {
        for (int i = 1; i < n; i++) {
            if (matrix[i][j] < minValues[j]) {
                minValues[j] = matrix[i][j];
                minRows[j] = i;
            }
        }
    }
    
    // Calculate sum and output coordinates
    std::cout << "coordinates of min elements:\n";
    long long sum = 0;
    
    for (int j = 0; j < m; j++) {
        // Output coordinate in format: (row+1)(column+1)
        std::cout << (minRows[j] + 1) << ";" << (j + 1) << "\n";
        sum += minValues[j];
    }
    
    std::cout << "\nTheir sum:\n" << sum << std::endl;
    
    // Clean up memory
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] minValues;
    delete[] minRows;
    
    return 0;
}