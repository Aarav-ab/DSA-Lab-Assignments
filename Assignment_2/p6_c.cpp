#include <iostream>
using namespace std;

int multiply_matrix(int trip1[][3], int size1, int trip2[][3], int size2, int result[][3]){

    for(int i=0; i<100; i++){
        for(int j=0; j<3; j++){
            result[i][j] = 0;
        }
    }

    int size = 0;
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(trip1[i][1]==trip2[j][1]){
                result[size][0] = trip1[i][0];
                result[size][1] = trip2[j][0];
                result[size][2] += trip1[i][2]*trip2[j][2];
                size++;
            }
        }
    }

    // Bubble Sort of the Transpose array
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(result[j][0]>result[j+1][0]) {
                for(int k=0; k<3; k++){
                    int temp = result[j][k];
                    result[j][k] = result[j+1][k];
                    result[j+1][k] = temp;
                }
            }
            else if(result[j][0]==result[j+1][0] && result[j][1]>result[j+1][1]){
                for(int k=0; k<3; k++){
                    int temp = result[j][k];
                    result[j][k] = result[j+1][k];
                    result[j+1][k] = temp;
                }
            }
        }
    }
    return size;
}

int main(){
    
    // Initialization of an First Sparse Matrix
    int n;
    int m;
    cout << "\nEnter the order of the first sparse matrix: ";
    cin >> n >> m;

    int arr[n][m];
    cout << "\nEnter the elements of the first matrix:\n";
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    // Calculating the size for Triplet array of the First Sparse Matrix
    int size1 = 0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j]!=0){
                size1++;
            }
        }
    }

    // Converting First Matrix into Triplet
    int trip1[size1][3];
    int k=0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(arr[i][j]!=0){
                trip1[k][0] = i;
                trip1[k][1] = j;
                trip1[k][2] = arr[i][j];
                k++;
            }
        }
    }

    // Initialization of an Second Sparse Matrix
    int brr[m][n];
    cout << "\nEnter the elements of the second matrix:\n";
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; j++){
            cin >> brr[i][j];
        }
    }

    // Calculating the size for Triplet array of the Second Sparse Matrix
    int size2 = 0;
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; j++){
            if(brr[i][j]!=0){
                size2++;
            }
        }
    }

    // Transposing of the Triplet array
    int trip2[size2][3];
    k=0;
    for(int i=0; i<m; i++){
        for (int j = 0; j < n; j++){
            if(brr[i][j]!=0){
                trip2[k][0] = j;
                trip2[k][1] = i;
                trip2[k][2] = brr[i][j];
                k++;
            }
        }
    }

    // Bubble Sort of the Transpose array
    for(int i=0; i<size2-1; i++){
        for(int j=0; j<size2-i-1; j++){
            if(trip2[j][0]>trip2[j+1][0]) {
                for(int k=0; k<3; k++){
                    int temp = trip2[j][k];
                    trip2[j][k] = trip2[j+1][k];
                    trip2[j+1][k] = temp;
                }
            }
            else if(trip2[j][0]==trip2[j+1][0] && trip2[j][1]>trip2[j+1][1]){
                for(int k=0; k<3; k++){
                    int temp = trip2[j][k];
                    trip2[j][k] = trip2[j+1][k];
                    trip2[j+1][k] = temp;
                }
            }
        }
    }

    
    int result[100][3];
    int result_size = multiply_matrix(trip1, size1, trip2, size2, result);

     // Printing of the Multiplied Triplet Array
    cout << endl;
    for(int i=0; i<result_size; i++){
        for (int j = 0; j < 3; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}