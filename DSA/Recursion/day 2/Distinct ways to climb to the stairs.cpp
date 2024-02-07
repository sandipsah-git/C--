#include <iostream>
using namespace std;
void printDistinctWays(int n, string steps) {
    if (n == 0) {
    	cout << steps << endl;
        return;
    }
    if (n < 0) {
        return;
    }
    printDistinctWays(n - 1, steps + "1 ");  // Take one step
    printDistinctWays(n - 2, steps + "2 ");  // Take two steps
}
int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    cout << "Distinct ways to climb to the " << n << "th step:" << endl;
    printDistinctWays(n,"");
    return 0;
}
/*write a c++ code of "you have been given a number of stairs. 
you are at the 0th stair, and you need to reach the Nth stairs. 
each time you can either climb one step or two steps.
 you are supposed to return the number of distinct ways 
 in which you can climb from the 0th step to Nth step.*/
