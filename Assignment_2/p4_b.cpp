#include <iostream>
using namespace std;

int main(){
    
    const int n = 5;
    char arr[5] = {'H','e','l','l','o'};
    char brr[n];
    
    // Reversing the string
    for(int i=0; i<n; i++){
        brr[n-i-1] =  arr[i];
    }

    // Printing the reversed string
    for(int i=0; i<n; i++){
        cout << brr[i];
    }
    return 0;
}