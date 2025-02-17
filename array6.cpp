#include <iostream>
using namespace std;
class Array
{
private:
  int a[5], i, po;

public:
  void getdata()
  { cout << "enter the 5 values in the array \n";
    for (i = 0; i < 5; i++)
    {
      cin >> a[i];
    }
    cout << "enter the poisition bwt 1 to 5\n";
    cin >> po;
    cout << "enter the number to be enter \n";
    cin >> a[po - 1];
  }
  void display()
  {
    cout << "the array is \n";
    for (i = 0; i < 5; i++)
    {
      cout << a[i] << " ";
    }
  }
};

int main()
{ Array a1;
  a1.getdata();
  a1.display();

  return 0;
}
