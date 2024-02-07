#include <iostream>
using namespace std;
void merge(int arr[],int s,int e){
	int mid = (s+e)/2;
	
	int len1 = mid-s+1;
	int len2 = e-mid;
	
	int first[len1];  //int *first = new int [len1];    --> only for this     delete []first;
	int second[len2];  //int *second = new int [len2];                        delete []second;
	
	//copy values
	int MainArrayIndex = s;
	for(int i=0;i<len1;i++){
		first[i]=arr[MainArrayIndex++];
	}
	MainArrayIndex = mid + 1;
	for(int i=0;i<len2;i++){
		second[i]=arr[MainArrayIndex++];
	}
	//merge 2 sorted arrays
	int index1 = 0;
	int index2 = 0;
	MainArrayIndex = s;
	
	while (index1<len1 && index2<len2){
		if (first[index1] < second[index2]){
			arr[MainArrayIndex++]=first[index1++];
		}
		else{
			arr[MainArrayIndex++]=second[index2++];
		}
	}
	while (index1<len1){
		arr[MainArrayIndex++]=first[index1++];
	}
	while (index2<len2){
		arr[MainArrayIndex++]=second[index2++];
	}
//	delete []first;
//	delete []second;
}
void mergesort(int arr[],int s,int e){
	//base case
	if(s>=e){
		return ;
	}
	int mid = (s+e)/2;
	//left part sort karna h
	mergesort(arr,s,mid);
	//right part sort karna h
	mergesort(arr,mid+1,e);
	//merge
	merge(arr,s,e);
}
int main (){
	int arr[15]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
	int n = 15;
	mergesort(arr,0,n-1);
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
/*

#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int> & arr,int s ,int e){
    // mid value 
    int mid = (s+e)/2;
    // finding length
    int len1 = mid-s+1;
    int len2 = e-mid;
    // creating new array
    vector<int> first(len1);
    vector<int> second(len2);
    // copying values in array
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }
    // now merge two array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1<len1&&index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }
}
void mergesort(vector<int> & arr,int s,int e){
    // base case
    if(s>=e){
        return;
    }
    // mid value
    int mid = (s+e)/2;
    // sort left part
    mergesort(arr,s,mid);
    // sort right part
    mergesort(arr,mid+1,e);
    // merge
    merge(arr,s,e);
}
int main(){
    vector <int> arr = {4,5,7,8,5,4,3,2,1,9,0,7,6,4,6,6,5,4,3,3,325,66667,5,4,33,32};
    mergesort(arr,0,arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<" ";
    }
    return 0;
}

*/






/*
#include <iostream>
#include <vector>
using namespace std;
int merge(vector<int>&arr,int s,int e){
    // mid value 
    int mid = (s+e)/2;
    // taking length
    int len1 = mid-s+1;
    int len2 = e-mid;
    // creating new array to store these array
    vector<int> first(len1);
    vector<int> second(len2);
    // copying elements into new array
    int k = s;
    for(int i=0;i<len1;i++){
        first.at(i) = arr.at(k++);
    }
    k = mid+1;
    for(int i=0;i<len2;i++){
        second.at(i) = arr.at(k++);
    }
    //  now merge two array
    int index1 = 0;
    int index2 = 0;
    k  = s;
    while(index1<len1 && index2<len2){
        if(first.at(index1)<second.at(index2)){
            arr.at(k++) = first.at(index1++);
        }
        else{
            arr.at(k++) = second.at(index2++);
        }
    }
    while(index1<len1){
        arr.at(k++) = first.at(index1++);
    }
    while(index2<len2){
        arr.at(k++) = second.at(index2++);
    }
}
int mergesort(vector<int>&arr,int s,int e){
    // base case
    if(s>=e) return 0;
    // mid value 
    int mid = (s+e)/2;
    // sort left part
    mergesort(arr,s,mid);
    // sort right part
    mergesort(arr,mid+1,e);
    // for merge
    merge(arr,s,e);
}
int main (){
    vector<int>arr;
    int element;
    cout<<"Enter the elements of array (for stop enter -1) : "<<endl;
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
    cout<<"sorting array :-  ";
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }
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
