// hashing is the thing when u make a array in this array a number how many times repeat that u solve by hasing 
// [1,7,1,2,1,3] in this array how many times does 1 repeat   
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Hash array
    int hash[100] = {0};

    // Store occurrences
    for (int i = 0; i < size; i++) {
        hash[arr[i]]++;

    }

    return 0;
}