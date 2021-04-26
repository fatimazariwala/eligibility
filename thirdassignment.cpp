#include <iostream>
using namespace std;

int main()
{
int age;
cout<< "Enter your Age:";
cin >>age;

if (age >=18 )
{ cout <<"\n You are eligible for voting";
}

else {

 cout << "\nYou are not eligible for vothing";
  cout<< "\nwait for :" <<"\t" << 18-age << "\tyear(s)";

}
return 0;
}
