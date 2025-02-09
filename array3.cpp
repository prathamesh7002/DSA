# include<iostream>
using namespace std ;
 int main(){
    int a[5],large,small;
    cout<<"Enter the 5 elements in the array \n";
    for(int i=0 ; i<5 ; i++){
        cin>>a[i];
    }
    large=a[0];
    for(int i=0 ; i<5 ; i++){
        if(a[i]>large){
            large=a[i];
        }
    }
    cout<<"largest element in the array is :" << large <<endl;
    small=a[0];
    for(int i=0 ; i<5 ; i++){
        if(a[i]<small){
            small=a[i];
        }
    }
    cout<<"smallest element in the array is :" << small <<endl;
 }