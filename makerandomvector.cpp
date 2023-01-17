#include <iostream>
#include <vector>
#include <cstdlib> // For rand

using namespace std;

void print(const vector<int>& v){
    for (int elem : v){
        cout << elem << " ";
    }
    cout << endl;
}