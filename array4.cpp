# include<iostream>
using namespace std ;
class Totalandavg
{
    float avg=0,total=0;

public:
    
 void total_and_avg(int arr[],int n){
  
    for(int i=0 ; i<5 ; i++){
        total=total+arr[i];
    }
    cout<<"total of element in the array is :" << total <<endl;
    avg=total/5;
    cout<<"avrage of elements in array is :" << avg <<endl;
 }

};
 int main(){
    Totalandavg a1;
    int a[5];
    cout<<"Enter the 5 elements in the array \n";
    for(int i=0 ; i<5 ; i++){
        cin>>a[i]; 
    }
    a1.total_and_avg(a,5);
 }