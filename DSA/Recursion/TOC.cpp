#include <iostream>
using namespace std;
void TOC(int n,char source,char auxiliary,char destination){
    if(n<=0){
        return;
    }
    // Move n-1 disks from source to auxiliary using destination as temporary peg
    TOC(n-1,source,destination,auxiliary); 
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
        TOC(n-1,auxiliary,source,destination);
    }
int main(){
    int disknumber = 5;
    TOC(disknumber,'A','B','C');
    return 0;
}