#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        ms.insert(a);
    }
    auto be= ms.begin();
    ms.erase(be);
    auto end = ms.end();
    ms.erase(--end);
    double ans = 0;
    for(auto i:ms)
        ans+=i;
    printf("%.02lf",ans/(n-2));
    return 0;
}