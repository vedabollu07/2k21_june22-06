#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s1,s2;
 cin>>s1>>s2;
 if(s1.length()==s2.length())
 {
     int l=s1.length();
     string rev;
     for(int i=l-1;i>=0;i--)
     rev.push_back(s1[i]);
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
     int i=0;
     while(s1[i]!='\0')
     {
        if(s1[i]==s2[i]) i++;
        else{
            cout<<"no";
            break;
        }
     }
     if(l==i) cout<<rev<<endl;
     
 }
 else cout<<"no";

    return 0;
}
