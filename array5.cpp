#include <iostream>
using namespace std;

class Reversed
{
private:
  int a[5], b[5], i, j;

public:
  void getdata()
  {
    cout<<"enter the 5 values in the array \n";
    for (i = 0; i < 5; i++)
    {
      cin>>a[i];
    }
  }
    void reversed()
    {
      i = 4;
      for (j = 0; j < 5; j++)
      {
        b[j] = a[i];
        i--;
      }
    }
    void display()
    {

      cout<<"reversed string is \n";

      for (i = 0; i < 5; i++)
      {
       cout<< b[i] <<" ";
      }
    }
  
};

  int main()
  {
    Reversed R1;
        R1.getdata();
        R1.reversed();
        R1.display();
    return 0;
  }
