#include <iostream>
#include <algorithm>
using namespace std;

int addArrays(int trip1[][3], int size1, int trip2[][3], int size2, int result[][3]){
    int i=0, j=0, k=0;

    while(i<size1 && j<size2){
        if(trip1[i][0]<trip2[j][0] || trip1[i][0]==trip2[j][0] && trip1[i][1]<trip2[j][1]){
            result[k][0] = trip1[i][0];
            result[k][1] = trip1[i][1];
            result[k][2] = trip1[i][2];
            i++;
            k++;
        }
        else if(trip1[i][0]>trip2[j][0] || trip1[i][0]==trip2[j][0] && trip1[i][1]>trip2[j][1]){
            result[k][0] = trip2[j][0];
            result[k][1] = trip2[j][1];
            result[k][2] = trip2[j][2];
            j++;
            k++;
        }
        else {
            result[k][0] = trip1[i][0];
            result[k][1] = trip1[i][1];
            result[k][2] = trip1[i][2]+trip2[j][2];
            i++;
            j++;
            k++;
        }
    }
    while(i<size1){
            result[k][0] = trip1[i][0];
            result[k][1] = trip1[i][1];
            result[k][2] = trip1[i][2];
            i++;
            k++;
    }
    while(j<size2){
            result[k][0] = trip2[j][0];
            result[k][1] = trip2[j][1];
            result[k][2] = trip2[j][2];
            j++;
            k++;
    }
    return k;
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
    int brr[n][m];
    cout << "\nEnter the elements of the second matrix:\n";
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            cin >> brr[i][j];
        }
    }

    // Calculating the size for Triplet array of the Second Sparse Matrix
    int size2 = 0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(brr[i][j]!=0){
                size2++;
            }
        }
    }

    // Converting Second Matrix into Triplet
    int trip2[size2][3];
    int l=0;
    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++){
            if(brr[i][j]!=0){
                trip2[l][0] = i;
                trip2[l][1] = j;
                trip2[l][2] = brr[i][j];
                l++;
            }
        }
    }

    int result[100][3];
    int result_size = addArrays(trip1, size1, trip2, size2, result);

    // Printing of the Added Triplet Array
    cout << endl;
    for(int i=0; i<result_size; i++){
        for (int j = 0; j < 3; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}