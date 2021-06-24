
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int a=v[n-1];
    int b=v[0];
    int c=v[n-2];
    int d=v[1];
    cout<<(abs(a-b)+abs(b-c)+abs(c-d)+abs(d-a));
    return 0;
}
