#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void print(const vector<int>& v){
    for (int elem:v)
        cout << elem << " ";
    cout << endl;
}


/*
    is_prime(n)
        Determines the primality of a given value
        n an integer to test for primality
        Returns true if n is prime; otherwise, return false
*/

bool is_prime(int n){
    if (n<2)
        return false;
    else{
        bool result = true; // Provisionally, n is prime
        double r = n, root = sqrt(r);
        // Try all possible factors from 2 to the square root of n
        for (int trial_factor = 2; result && trial_factor <= root; trial_factor++){
            result = (n % trial_factor != 0);
            return result;
        }
    }
}

/*
    primes(begin, end)
        Returns a vector containing the prime
        numbers in the range begin...end.
        begin is the first number in the range
        end is the last number in the range
*/

vector<int> primes(int begin, int end){
    vector<int> result;
    for (int i = begin; i <= end; i++){
        if (is_prime(i))
            result.push_back(i);
    }
    return result;
}

int main(){
    int low, high;
    cout << "Please enter lowest and highest values in "
         << "the range: ";
    cin >> low >> high;
    vector<int> prime_list = primes(low, high);
    print(prime_list);
}