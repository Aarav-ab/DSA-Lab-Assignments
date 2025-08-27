#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "\nEnter the order of the first matrix: \n";
    cin >> a >> b;

    int c;
    int d;
    cout << "\nEnter the order of the second matrix: \n";
    cin >> c >> d;

    // Error Statement
    if(b!=c) {
        cout << "These matrices cannot be multiplied.";
        return 0;
    }
    
    int arr[a][b];
    int brr[c][d];

    // Initialising First Matrix
    cout << "\nEnter the elements of the first matrix: \n";
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> arr[i][j];
        }
    }

    // Initialising Second Matrix
    cout << "\nEnter the elements of the second matrix: \n";
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            cin >> brr[i][j];
        }
    }

    // Multiplying Both Matrices
    int crr[a][d];
    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
            crr[i][j] = 0;
            for(int z=0; z<b; z++){

                crr[i][j] += arr[i][z]*brr[z][j];
            }
        }
    }
    
    // Printing the Resultant Matrix
    cout << endl;
    for(int i=0; i<a; i++){
        for(int j=0; j<d; j++){
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}