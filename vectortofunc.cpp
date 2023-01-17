#include <iostream>
#include <vector>

using namespace std;

/*
 * print(v)
 *  Prints the contents of an int vector
 *  v is the vector to print
*/

void print(vector<int> v){
    for (int elem: v){
        cout << elem << " ";
    }
    cout << endl;
}

/*
 * sum(v)
 *  Adds up the contents of an int vector
 *  v is the vector to sum
 *  Returns the sum of all the elements
 *  or zero if the vector is empty.
*/

int sum(vector<int> v){
    int result = 0;
    for (int elem : v){
        result += elem;
    }
    return result;
}

int main(){
    vector<int> list{2, 4, 6, 8};
    // Print the contents of the vector
    print(list);
    // Compute and display sum
    cout << sum(list) << endl;
    // Zero out all the elements of list
    int n = list.size();
    for (int i = 0; i < n; i++){
        list[i] = 0;
    }
    // Reprint the contents of the vector
    print(list);
    // Compute and display sum
    cout << sum(list) << endl;
}