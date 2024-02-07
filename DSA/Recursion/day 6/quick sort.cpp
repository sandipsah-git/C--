#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;
    // for counting position
    for(int i=s+1;i<=e;i++){
        if (arr[i]<=pivot){
            count++;
        }
    }
    //placing pivot element to the right position
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);
    //now for left and right part
    int i = s,j=e;
    while (i<pivotIndex && j>pivotIndex){
        while (arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e)
    return;
    // for partition 
    int p = partition(arr,s,e);
    //sort for left part
    quickSort(arr,s,p-1);
    //sort for right part
    quickSort(arr,p+1,e);
}
int main(){
    int arr[15]={4,3,2,1,9,0,0,9,8,7,6,5,5,4,3};
    int n = 15;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
/*
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>&arr,int s,int e){
    int pivot = arr.at(s);
    int count = 0;
    // now we have to count the steps to the right place
    for(int i=s+1;i<=e;i++){
        if(arr.at(i)<=pivot){
            count = count + 1;
        }
    }
    // now placing pivot element to the right place
    int pivotIndex = s+count;
    swap(arr.at(pivotIndex),arr.at(s));
    // now for left and right parts
    while(s<pivotIndex && e>pivotIndex){
        while(arr.at(s)<=pivot){
            s++;
        }
        while(arr.at(e)>pivot){
            e--;
        }
        if(s<pivotIndex && e>pivotIndex){
            swap(arr.at(s++),arr.at(e--));
        }
    }
    return pivotIndex;
}
int quickSort(vector<int>& arr,int s, int e){
    //base case
    if(s>=e)
    return 0;
    // making for partition
    int p=partition(arr,s,e);
    // sort for left part
    quickSort(arr,s,p-1);
    // sort for right part
    quickSort(arr,p+1,e);
}
int main(){
    vector<int> arr= {2,3,57,8,6,4,4,33,5,8,0,9,1,24,6,4};
    int n = arr.size();
    cout<<"without sorting elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    cout<<"the sorting result is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }
    return 0;
}

*/




/*
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& arr,int s,int e){
    // first take a first element as pivot
    int pivot = arr[s];
    int count = 0;
    // now counting steps for pivot to put in right place
    for(int i=s+1;i<=e;i++){
        if(arr.at(i)<=pivot){
            count++;
        }
    }
    // now placing this pivot value in right place
    int pivotIndex = s + count;
    swap(arr.at(pivotIndex),arr.at(s));
    // now time for left and right parts 
    while(s<pivotIndex && e>pivotIndex){
        while(arr.at(s)<=pivot){
            s++;
        }
        while(arr.at(e)>pivot){
            e--;
        }
        if(s<pivotIndex && e>pivotIndex){
            swap(arr.at(s++),arr.at(e--));
        }
    }
    return pivotIndex;
}
int quicksort(vector <int> &arr,int s,int e){
    // base case
    if(s>=e) return 0;
    // for partition
    int p = partition(arr,s,e);
    // sort left part
    quicksort(arr,s,p-1);
    // sort right part
    quicksort(arr,p+1,e);
}
int main(){
    vector <int> arr;
    int element;
    cout<<"Enter the elements of array (for stop enter -1)"<<endl;
    // while(element != -1){
    //     cin>>element;
    //     if(element != -1){
    //         arr.push_back(element);
    //     }
    // }
    while(cin>>element && element != -1){
        arr.push_back(element);
    }
    cout<<endl;
    int n = arr.size();
    cout<<"Without sorting array :-  ";
    for(int i=0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"Sorting arrays :-  ";
    for(int i=0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}

*/








#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int element;
    int n = 0;
    cout<<"Enter the elements of array :- "<<endl;
    // while(cin>>element && element != -1){
    //     arr[n++] = element;
    // }
    while(element != -1){
        cin>>element;
        if(element != -1){
            arr[n++] = element;
        }
    }
    cout<<"the value of n is :- "<<n<<endl;
    cout<<"Without sorting array :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
