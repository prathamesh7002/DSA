# include<iostream>
using namespace std ;
 int main(){
    int a[5];
    cout<<"Enter the 5 elements in the array \n";
    for(int i=0 ; i<5 ; i++){
        cin>>a[i];
    }
    cout<<"Entered elements are : \n";
    for(int i=0 ; i<5 ; i++){
        cout<<a[i]<<" ";
    }
 }