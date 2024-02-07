#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j;
        for( j = i-1; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}
int main(){
    int arr[7] = {7,6,5,4,3,2,1};
    int n = 7;
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}