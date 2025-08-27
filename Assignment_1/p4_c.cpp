#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout << "\nEnter the order of the matrix: \n";
    cin >> n >> m;
    int arr[n][m];
    int brr[m][n];
    
    // Initialising the matrix
    cout << "\nEnter the elements of the matrix\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "\nThe Transpose of the matrix is: \n";
    // Transposing the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            brr[j][i] = arr[i][j];
        }
    }

    // Printing the matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << brr[i][j] << " ";
        }
       cout << endl;
    }
    return 0;
}