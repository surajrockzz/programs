#include <iostream>
#include <cstdio>
#include<set>
#include<algorithm>
using namespace std;

int main() {
    set<char> myset;
    string s ;
    getline(cin,s);
    int ans =0,i=0,j=0;
    while(i<s.length()&&j<s.length()){
        if(myset.find(s[j])==myset.end()){
            myset.insert(s[j++]);
            ans = max(ans,j-i);
        }
        else{
            myset.erase(s[i++]);
        }
    }
    cout<<ans;
    return 0;
}

