#include <iostream>
using namespace std;

int main(){
    const int n=5;
    const int m=6;
    char arr[5] = {'H','e','l','l','o'};
    char brr[6] = {'H','e','l','l','o','o'};
    int sum = n+m;

    char result[sum+1];
    for (int i = 0; i < sum; i++){
        if(i<n) result[i] = arr[i];
        else result[i] = brr[i-n];
    }
    result[sum] = '\0';

    /*
    for (int i = 0; i < sum; i++){
       cout << result[i] << " ";
    }
    */

    cout << result;
    return 0;
}