#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "\nEnter the order of the matrix: \n";
    cin >> a >> b;
    int arr[a][b];

    // Initialising the Matrix
    cout << "\nEnter the elements of the Matrix: \n";
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> arr[i][j];
        }
    }
    
    // Calculating and Printing the sum of every element
    
    for(int i=0; i<a; i++){
        int sum = 0;
        for(int j=0; j<b; j++){
            sum += arr[i][j];
        }
        cout << endl << "The sum of "<< i+1 << " row is: " << sum << endl;
    }
    
    cout << endl;

    for(int i=0; i<a; i++){
        int sum = 0;
        for(int j=0; j<b; j++){
            sum += arr[j][i];
        }
        cout << endl << "The sum of "<< i+1 << " column is: " << sum << endl;
    }
    
    return 0;
}