//C++ program to display first and last element of an array.
#include<bits/stdc++.h>
using namespace std;
void reverse_array(int ar[],int size);
int main(){
    int i,a[100],size;
    cin>>size;
    for(i=0;i<size;i++){
        cin>>a[i];//Enter array elements;
    }
    cout<<"Output::"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";//Enter array elements;
    }
    cout<<endl;
    reverse_array(a,size);
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";//Enter array elements;
    }
return 0;
}
void reverse_array(int ar[],int size){
int temp;
size--;
for(int i=0;size>=i;size--,i++){
    temp=ar[i];
    ar[i]=ar[size];
    ar[size]=temp;
}
}
