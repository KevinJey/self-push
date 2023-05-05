#include <bits/stdc++.h>

using namespace std;
int calc(int x){
    int sum=0;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    int x,y,t;
    cin >>x >> y >> t;
    int left,right;
    left=x;
    right=y;
    // while(left<=right){
    while(calc(left)!= t) {
        ++left;
        // cout << calc(left) << endl;
    }
    cout << left << endl;
    while(calc(right)!= t) {
        // cout << right << endl;
        --right;
        
    }
    cout << right << endl;
    return 0;
}