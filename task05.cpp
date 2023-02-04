#include<iostream>
using namespace std;
float price(string fruit,string day,float quan);
main()
{
   string fruit,day;
   float quantity,res;
   cout<<"Enter the fruit name";
   cin>>fruit;
   cout<<"Enter the day";
   cin>>day;
   cout<<"Enter the quantity";
   cin>>quantity;
   res=price(fruit,day,quantity);
   cout<<"Your bill is"<<res;

}
float price(string fruit,string day,float quan)
{
  float total;
 if(day!="saturday"&& day!="sunday")
{
  if (fruit=="banana")
{
  total=2.50*quan;
}
  else if (fruit=="apple")
     
{
  total=1.20*quan;
}
 else if (fruit=="orange")
{
  total=0.85*quan;
}
 else if (fruit=="grapfruit")
{
  total=1.45*quan;
}
  else if (fruit=="kiwi")
{
  total=2.70*quan;
}

  else   if (fruit=="grapes")
{
  total=3.85*quan;
}
else if (fruit=="pineapple")
{
  total=5.50*quan;
}
else
{
  cout<<"invalid input";
  return 0;
}
}
  if (day=="saturday"|| day=="sunday")
{
   if (fruit=="banana")
{
  total=2.70*quan;
}
 else if (fruit=="apple")
{
  total=1.25*quan;
}
 else if (fruit=="orange")
{
  total=0.90*quan;
}

 else if (fruit=="grapfruit")
{
  total=1.60*quan;
}
 else if (fruit=="kiwi")
{
  total=3.00*quan;
}

 else if (fruit=="grapes")
{
  total=4.20*quan;
}
 else if (fruit=="pineapple")
{
  total=5.60*quan;

}
else{
  cout<<"Invalid input";
  return 0;
}
}
 return total;
}