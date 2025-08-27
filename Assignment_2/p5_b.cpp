#include <iostream>
using namespace std;

int main(){
    
    int n = 4;
    int arr[4][4] = {{2,1,0,0},{3,1,3,0},{0,5,2,7},{0,0,9,0}};
    int num = 3*n-2;
    int brr[num];
    int crr[4][4] = {0};

    // Compressed
    int k=0;
    for(int i=0; i<n; i++){
        brr[k] = arr[i][i];
        k++;
    }
    for(int i=0; i<n-1; i++){
        brr[k] = arr[i][i+1];
        k++;
    }
    for(int i=1; i<n; i++){
        brr[k] = arr[i][i-1];
        k++;
    }

    // Printing the compressed array
    cout << "Compressed: \n";
    for(int i=0; i<num; i++){
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Uncompressed
    int l=0;
    for(int i=0; i<n; i++){
        crr[i][i] = brr[l];
        l++;
    }

    for(int i=0; i<n-1; i++){
        crr[i][i+1] = brr[l];
        l++;
    }

    for(int i=1; i<n; i++){
        crr[i][i-1] = brr[l];
        l++;
    }

    // Printing the uncompressed array
    cout << "Uncompressed: \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}