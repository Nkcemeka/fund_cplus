#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int SIZE = 3;
    vector<int> a{5, 5, 5};
    // Print the contents of the vector
    cout << "a contains ";
    for (int i = 0; i < SIZE; i++){
        cout << a.at(i) << " ";
    }
    cout << endl;
    // Change all the 5s in vector a to 8s
    for (int i = 0; i<=SIZE; i++){ // Bug: <= should be <
        a.at(i) = 8;
    }
    // Reprint the contents of the vector
    cout << "a contains ";
    for (int i = 0; i < SIZE; i++){
        cout << a.at(i) << " ";
    }
    cout << endl;
}