#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "\nEnter the number of elements in the array:\n";
    cin >> n;
    int arr[n];

    // Initialising the array
    cout << "\nEnter the elements in the array: \n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // arr[5] = {1,2,3,3,4};
    for(int i=0; i<n; i++){
        int check = arr[i];
        for(int j=i+1; j<n;){
            if(arr[j] == check) {
                for(int k=j; k<n-1; k++){
                    arr[k] = arr[k+1];
                }
                n--;
            }
            else j++;
        }
    }

    // Printing the new array:
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}