#include <iostream>
using namespace std;

int main(){
    
    // Diagonal Matrix
    int n = 3;
    int arr[3][3] = {{1,0,0},{0,2,0},{0,0,3}};
    int brr[3];

    // Compressed
    cout << "Compressed: \n";
    for(int i=0; i<n; i++){
        brr[i] = arr[i][i];
    }

    for(int i=0; i<n; i++){
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Uncompressed
    cout << "Uncompressed: \n";
    int crr[3][3] = {0};

    for(int i=0; i<n; i++){
        crr[i][i] = brr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}