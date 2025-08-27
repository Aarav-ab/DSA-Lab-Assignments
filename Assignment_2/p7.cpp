#include <iostream>
using namespace std;

int main(){
    
    // Initialization of an array
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements of the array:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Checking number of inversions
    int check = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i]>arr[j]) check++;
        }
    }

    cout << "\nTotal number of inversion elements are: " << check << endl;
    
    return 0;
}