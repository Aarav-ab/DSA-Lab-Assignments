#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    int check = 0;
    
    

    while(check==0){

        int operation;
        cout << "\nEnter the NUMBER of the operation to be done: \n";
        cout << "--------------------MENU--------------------- \n";
        cout << "----------------1. CREATE-------------------- \n"; //
        cout << "----------------2. DISPLAY------------------- \n"; //
        cout << "----------------3. INSERT-------------------- \n";
        cout << "----------------4. DELETE-------------------- \n";
        cout << "-----------5. LINEAR SEARCH------------------ \n"; // 
        cout << "-----------------6. EXIT--------------------- \n\n";
        cin >> operation;

        switch(operation) {

            case 1:

                cout << "\nEnter the number of elements you want in the array: ";
                cin >> n;

                for(int i=0; i<n; i++){
                    cin >> arr[i];
                }
                break;

            case 2:

                for(int i=0; i<n; i++){
                    cout << arr[i] << " ";
                }
                cout << "\n";
                break;

            case 3:

                int inserted_num, insertion_index;
                cout << "\nEnter the number and its index where to be inserted: ";
                cin >> inserted_num >> insertion_index;

                for(int i=n-1; i>=insertion_index; i--){
                    arr[i+1] = arr[i];
                }
                arr[insertion_index] = inserted_num;
                n++;
                break;

            case 4:
                int deletion_index;
                cout << "\nEnter the index of the element to be deleted: ";
                cin >> deletion_index;

                for(int i=deletion_index; i<n-1; i++){
                    arr[i] = arr[i+1];
                }
                n--;
                break;

            case 5:{

                int search_num;
                cout << "\nEnter the number element to be searched in the array: ";
                cin >> search_num;
                int flag = 0;

                for(int i=0; i<n; i++){
                    if(search_num == arr[i]) {
                        cout << search_num << " is found at the index " << i;
                        flag = 1;
                    }
                    
                }

                if(!flag) cout << "Element not found.";
                break;
            }

            case 6:
                check = 1;
                break;
        }   
    }
    

    
    return 0;
}