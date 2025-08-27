#include <iostream>
using namespace std;

int main(){
    
    // Initialization of an Sparse Matrix
    int n;
    int m;
    cout << "\nEnter the order of the sparse matrix: ";
    cin >> n >> m;

    int arr[n][m];
    cout << "\nEnter the elements of the matrix:\n";
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    // Calculating the size for Triplet array
    int size = 0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j]!=0){
                size++;
            }
        }
    }

    // Converting Matrix into Triplet
    /*
    int triplet[size][3];
    int k=0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j]!=0){
                triplet[k][0] = i;
                triplet[k][1] = j;
                triplet[k][2] = arr[i][j];
                k++;
            }
        }
    }
    */

    // Transposing of the Triplet array
    int transpose_triplet[size][3];
    int k=0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j]!=0){
                transpose_triplet[k][0] = j;
                transpose_triplet[k][1] = i;
                transpose_triplet[k][2] = arr[i][j];
                k++;
            }
        }
    }

    // Printing of the Transposed array
    cout << endl;
    for(int i=0; i<size; i++){
        for (int j = 0; j < 3; j++){
            cout << transpose_triplet[i][j] << " ";
        }
        cout << endl;
    }

    // Bubble Sort of the Transpose array
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(transpose_triplet[j][0]>transpose_triplet[j+1][0]) {
                for(int k=0; k<3; k++){
                    int temp = transpose_triplet[j][k];
                    transpose_triplet[j][k] = transpose_triplet[j+1][k];
                    transpose_triplet[j+1][k] = temp;
                }
            }
            else if(transpose_triplet[j][0]==transpose_triplet[j+1][0] && transpose_triplet[j][1]>transpose_triplet[j+1][1]){
                for(int k=0; k<3; k++){
                    int temp = transpose_triplet[j][k];
                    transpose_triplet[j][k] = transpose_triplet[j+1][k];
                    transpose_triplet[j+1][k] = temp;
                }
            }
        }
    }

    // Printing of the Transposed array
    cout << endl;
    for(int i=0; i<size; i++){
        for (int j = 0; j < 3; j++){
            cout << transpose_triplet[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}