#include <iostream>
using namespace std;

int main(){
    
    char ch;
    cout << "Enter the character in the uppercase: ";
    cin >> ch;

    if(ch>64 && ch<91){
        int result = ch + 32;
        cout << "The character in the lowercase: " << char(result) << endl;
    }
    else {
        cout << "Only enter the character in uppercase";
        return 1;
    }

    return 0;
}