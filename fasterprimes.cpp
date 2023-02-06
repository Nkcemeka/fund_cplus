#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Display the prime numbers between 2 and 500,000 and
// time how long it takes

// Largest potential prime considered
// const int MAX = 500000

const int MAX = 500;

// Each position in the boolean vector indicates 
// if the number of that position is not prime:
// false means "prime," and true means composite.
// Initially all numbers are prime until proven otherwise
vector<bool> nonprimes(MAX); // Global vector initialized all to false

int main(){
    clock_t start_time = clock(); // Record start time

    // First prime number is 2; 0 and 1 are not prime
    nonprimes[0] = nonprimes[1] = true;

    // Start at the first prime number, 2.
    for (int i = 2; i < MAX; i++){
        // See if i is prime
        if (!nonprimes[i]){
            cout << i << " ";
            // It is prime, so eliminate all of its 
            // multiples that cannot be prime
            for (int j = 2*i; j<MAX; j+=i){
                nonprimes[j] = true;
            }
        }
    }
    cout << endl; // Move cursor down to next line
    // Print the elapsed time
    cout << "Elapsed time: "
         << static_cast<double>(clock()-start_time)/CLOCKS_PER_SEC
         << " seconds" << endl;
}