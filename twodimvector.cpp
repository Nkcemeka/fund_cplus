#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

typedef vector<vector<double>> Matrix;

// Allow the user to enter the elements of the Matrix
void populate_matrix(Matrix& m){
    cout << "Enter the "  << m.size() << " rows of the matrix. " << endl;
    for (unsigned row = 0; row < m.size(); row++){
        cout << "Row #" << row << " (enter " << m[row].size() << " values) ";
        for (double& elem : m[row]){
            cin >> elem;
        }
    }
}

void print_matrix(const Matrix& m){
    for (auto row:m){
        for (double elem: row){
            cout << setw(5) << elem;
        }
        cout << endl;
    }
}

int main(){
    int rows, columns;
    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    // Declare the 2D vector
    Matrix mat(rows, vector<double> (columns));
    // Populate the vector
    populate_matrix(mat);
    // Print the vector
    print_matrix(mat); 
}