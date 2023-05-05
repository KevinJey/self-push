#include <bits/stdc++.h>

using namespace std;
priority_queue<int,vector<int>,greater<int>> pq;
void process(string str){
    int pos=0;
    while(1){
        if(pos < str.size() && !isdigit(str[pos])) ++pos;
        int sum = 0;
        bool res=false;
        while(pos < str.size() && isdigit(str[pos])){
            sum=sum*10+str[pos]-'0';
            ++pos;
            res=true;
        }
        // cout << sum 
        if(res)
            pq.push(sum);
        if(pos >= str.size()) break;
    }
}
int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        process(str);
    }
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}