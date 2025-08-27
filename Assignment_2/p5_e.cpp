#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int arr[4][4] = {{2,4,6,0},{4,1,9,5},{6,9,4,7},{0,5,7,0}};
    int num = n*(n+1)/2;
    int brr[num];
    int crr[4][4] = {0};

    // Compressed
    int l=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            brr[l] = arr[i][j];
            l++;
        }
    }

    // Printing the compressed array
    cout << "Compressed: \n";
    for(int i=0; i<num; i++){
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Uncompressed
    l=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            crr[i][j] = brr[l];
            crr[j][i] = brr[l];
            l++;
        }
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