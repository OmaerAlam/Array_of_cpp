//c++ program to find largest element in an array.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,a[100],size;
    cin>>size;//Enter array size;
    for(i=0;i<size;i++){
        cin>>a[i];//Enter array elements;
    }
    cout<<"Output::"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    int largest=a[0];
    for(i=0;i<size;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    cout<<endl<<largest<<endl;//Output::Largest value;
    return 0;
}
