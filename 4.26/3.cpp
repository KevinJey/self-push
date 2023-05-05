#include <bits/stdc++.h>

using namespace std;
int dp[51][51];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n ; ++i){
        for(int j = 1 ; j <=i ; ++j)
        {
            if(j == 1) dp[i][j]=1;
            else if(j == i){
                dp[i][j]=1;
            }else{
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
    }
    for(int i = n; i >=1;--i){
        for(int j = 1 ; j <= i ; ++j)
            cout << dp[i][j]<< " ";
        cout << endl;
    }
    return 0;
}