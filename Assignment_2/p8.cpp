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

    // Checking total number of duplicated elements
    int check = 0;
    for(int i=0; i<n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i]==arr[j]) {
                check++;
                break;
            }
        }
    }

    cout << "\nTotal unique elements in the array are: " << n-check << endl;
    return 0;
}