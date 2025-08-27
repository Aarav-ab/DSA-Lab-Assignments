#include <iostream>
using namespace std;

int main(){
    
    int n = 6;
    char arr[5] = {'H','e','l','l','o'};
    
    // arr[5] = {'H','e','l','l','o'};
    for(int i=0; i<n; i++){
        char check = arr[i];
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
    

    // Printing the reversed string
    for(int i=0; i<n; i++){
        cout << arr[i];
    }
    return 0;
}