//c++ program to display first and last element of an array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,size,a[100];
    cin>>size;//Enter array size;
    for(i=0;i<size;i++){
        cin>>a[i];//Enter array elements;
    }
    cout<<"Output::"<<endl<<a[0]<<endl;//Output::the first value;
    cout<<a[size-1]<<endl;//Output::the last value;
    return 0;
}
