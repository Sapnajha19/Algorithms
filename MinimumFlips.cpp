#include<iostream>
using namespace std;
int minFlips(string s){
    int Fn=0;
    int F0=0;
    int F1=0;
    //string starting with 0
    char ch0='0';
    for(int i=0;i<s.size();i++)
    {if(s[i]!=ch0)
    {F0++;}
    ch0=int(ch0)^1;}
    //string starting with 1
    char ch1='1';
    for(int i=0;i<s.size();i++)
    {if(s[i]!=ch1)
    {F1++;}
    ch1=int(ch1)^1;}
    Fn=min(F0,F1);
    return Fn;
}
int main(){
    string s;
    cin>>s;
    cout<<minFlips(s);
    return 0;
}