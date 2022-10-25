// Sums all numbers up to "n" (not included)


// Includes & Namespace

#include <iostream>
#include <vector>
using namespace std;

// Functions

inline void sum(int& p, int n, vector<int> d){ // Sums values stored in vector d and stores it in p
    p = 0;
    for(int i = 0; i < n; ++i) p += d[i];
}

// Main

int main(){
    cout << "Please enter n: ";
    int n;
    cin >> n;
    vector<int> data(n);
    for(int i = 0; i < n; ++i) data[i] = i; //Initializes vector data with its indices
    int accum;
    sum(accum, n, data);
    cout << "The sum of all numbers up to " << n << " is " << accum << endl;
    return 0;
}
