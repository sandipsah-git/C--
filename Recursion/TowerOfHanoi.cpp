#include <iostream>
using namespace std;
int TowerOfHanoi(int n,char source,char auxiliary,char destination,int &MoveCount){
    // base case
    if(n<=0){
        return 0;
    }

    TowerOfHanoi(n-1,source,destination,auxiliary,MoveCount);
    cout<<MoveCount<<". move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    MoveCount++;
    TowerOfHanoi(n-1,auxiliary,source,destination,MoveCount);
}
int main(){
    int disknumber;
    cout<<endl;
    cout<<"Enter the disknumber :-> ";
    cin>>disknumber;
    int MoveCount = 1; // initializing move count
    TowerOfHanoi(disknumber,'A','B','C',MoveCount);
    return 0;
}