// Essence of this project is to understand file streams.

#include <iostream>
#include <fstream> // needed to use ifstream and of stream
#include <vector>

using namespace std;

int main(){
    char arr[100];
    cout << "Enter your name and age: ";
    string x;

    // for strings, you say getline(cin, variable, delimiter (optional)) as 
    // cin does not read multi-words etc....
    // For characters however, you say cin.getline(pointer_to_array, delimiter: size of array)
    cin.getline(arr, 100); 


    // create an output stream object. This is like cout
    // but cout points to stdout while myfile points to xyz.txt
    ofstream myfile("xyz.txt"); // When you call this function, by default the file is opened
    // above code is equal to "fstream myfile('xyz.txt', ios::out)"

    // To prevent the code from overwriting the contents of the file
    // each time you run it, type "ofstream myfile('filename', ios::app)"
    // It opens the file in append mode. The default is ios::out
    // You can also use "fstream myfile('xyz.txt', ios::out|ios::app)" for output operation in append mode

    if (myfile.is_open()){
        myfile << arr; // sending content in arr to myfile
    }else{
        myfile.open("xyz.txt");
        myfile << arr;
    }

    myfile.close();
    cout << "File write operation performed successfully." << endl << endl;



    // Reading from files
    cout << "Reading from file operation started." << endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1, 100);
    cout << "Array content: " << arr1 << endl;;
    obj.close();
    cout << "File read operation completed.";
    return 0;
}