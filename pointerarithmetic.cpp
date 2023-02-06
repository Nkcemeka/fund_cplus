#include <iostream>
using namespace std;

int main(){
    // Make an array
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // P points to the first element
    cout << *p << endl; // Prints 10, does not change p
    cout << p[0] << endl; // Prints 10, does not change p
    cout << p[1] << endl; // Prints 20, does not change p
    cout << *p << endl; // Prints 10, does not change p
    p++; // Advances p to the next element
    cout << *p << endl; // Prints 20, does not change p
    p += 2; // Advance p two places
    cout << *p << endl; // Prints 40, does not change p
    cout << p[0] << endl; // Prints 40, does not change p
    cout << p[1] << endl; // Prints 50, does not change p
    p--; // Moves p back one place
    cout << *p << endl; // Prints 30, does not change p
}