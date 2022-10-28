//c++ program to remove chracters in string except alphabets.
#include<bits/stdc++.h>
using namespace std;
int main(){
   string l;
   int i,len;
   cin>>l;//Enter the string;
   len=l.size();
   for(i=0;i<len;++i){
    if(!(l[i]>='a'&&l[i]<='z')||(l[i]>='A'&&l[i]<='Z')){
        l[i]='\0';
    }
   }
   cout<<l<<endl;//After the remove chracters in string;
        return 0;
}
