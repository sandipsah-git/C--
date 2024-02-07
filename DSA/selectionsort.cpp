#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{            
    for(int i = 0; i < n-1; i++ ){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main(){
    int arr[10] = {3, 7, 0, 5, 1, 9, 4, 8, 3, 0};
    int n = 10;
    selectionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


/*
#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{            
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) 
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[10] = {3,7,0,5,1,9,4,8,3,0};
    int n = 10;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/
