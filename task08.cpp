#include<iostream>
using namespace std;
string text(int x,int y,int h);
main()
{
  int num1,num2,h;
  string num3;
  cout<<"enter the integer h:";
  cin>>h;
  cout<<"enter the x coordinate:";
  cin>>num1;
  cout<<"enter the y coordinate:";
  cin>>num2;
  num3=text(h,num1,num2);
  cout<<""<<num3;
}
string text(int x,int y,int h)
{
 string res;
  if (x==2 || x<=4)
  {
   if (y<8);
   res="inside";

  }
else if(x==2||x==4)
{
 if(y<8)
 {
    res="border";
 }
else{
    res="inside";
}
return res;
}

}