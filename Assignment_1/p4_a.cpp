#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of the elements in the array: ";
    cin >> n;
    int arr[n];

    // Initialising the array
    cout << "\nEnter the elements: \n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Reversing the array
    for(int i=0; i<n/2; i++){
        int check;
        check = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = check;
    }

    // Printing the array
    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}