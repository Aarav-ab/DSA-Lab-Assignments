#include <iostream>
using namespace std;

int main(){
    
    const int n = 5;
    char arr[5] = {'h','e','l','l','o'};
    
    // Arranging the string in alphabetical order
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Printing the sorted string
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    return 0;
}