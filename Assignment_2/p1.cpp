#include <iostream>
using namespace std;

int main(){
    
    // Initialization of an array
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "\nEnter the elements of the array in a sorted manner:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Binary Search
    int search_num;
    cout << "\nEnter the search number: ";
    cin >> search_num;
    
    int a=0;
    int b=n-1;

    while(a<=b){
        int avg = (b+a)/2;
        if(search_num == arr[avg]){
            cout << "Your number is found at index: " << avg << endl;
            return 0;
        }
        else if(search_num < arr[avg]){
            b = avg-1;
        }
        else {
            a = avg+1;
        }
    }

    cout << "\nThe searched number has not found.";
    
    return 0;
}