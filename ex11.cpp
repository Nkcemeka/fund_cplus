#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sum_positive(const vector<int> &v){
    int sum_pos = 0; // sum of positive integers
    if (v.empty()){
        return 0;
    }

    for (int elem:v){
        if (elem > 0){
            sum_pos += elem;
        };
    }
    return sum_pos;
}

int count_evens(const vector<int> &v){
    int sum = 0;
    for (int elem:v){
        if (elem%2 == 0){
            sum += elem;
        }
    }
    return sum;
}

int count_evens(const vector<vector<int>> &v){
    int sum = 0;
    for (const vector<int> row : v){
        for (int col:row){
            if ((col%2)==0){
                sum += col;
            }
        }
    }
    return sum;
}


bool contains(const vector<int> &v1, const vector<int> &v2){
    int vec_size1 = v1.size();
    int vec_size2 = v2.size();
    int position = 0; // tracks position as we move through the vectors

    if (vec_size1 != vec_size2){
        return false;
    }

    do{
        if (v1[position] == v2[position]){
            position++;
            continue;
        }else{
            return false;
        }
    } while (position < vec_size1);

    return true;
}

bool proc(const int *begin, const int *end){
    for (const int *elem = begin; elem != end; elem++){
        cout << *elem;
    }
    cout << endl;
    return false;
}

int main(){
    vector<int> list{45, -3, 16, 8};
    vector<int> list2{45,-3, 16, 8};
    vector<int> list3{0,1,0,2};
    typedef vector<vector<int>> Matrix;
    Matrix mat1= {{2,4,6,7}, {5,8,9,2}};
    vector<vector<int>> collection(100, vector<int>(200));

    int *a;
    a = new int[20];
    for (int i=0; i<5; i++){
        a[i] = i;
    }

    cout << proc(a, a+5) << endl;
}