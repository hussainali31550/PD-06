#include<iostream>
using namespace std;
float studio (string month,float stay);
float apartment(string month ,float stay);
main()
{
   string month;
   float stay,res,apartmentres;
   cout<<"Enter the month";
   cin>> month;
   cout<<"Enter the number of stay";
   cin>> stay;
   res=studio(month,stay);
   cout<<"studio,your total bill is :"<<res<<endl;
   apartmentres=apartment(month,stay);
   cout<<"apartment,your bill is:"<<apartmentres<<endl;
}
  float studio (string month,float stay)
{
 float total,discount;

 if(month=="may"||month=="october")
 {
   total=stay*50;
    if (stay > 7 || stay < 14)
{
    discount=(total*5)/100;
    discount=total-discount;
    return discount;
}  
else
{
  return total;

}
   if (stay > 14)
{
    discount=(total*30)/100;
    discount=total-discount;
    return discount;
}
 
 }
  else if(month=="june"||month=="september")
 {
 
   total=stay*70.20;
    if (stay > 14 )
{
    discount=(total*20)/100;
    discount=total-discount;
    return discount;
}
 }
 if(month=="july"||month=="august")
 {
  total=stay*76;
  return total;
 }
}

float apartment(string month ,float stay)
{
  float total,discount;
  if(month=="may"||month=="october") 
  
  {
    total=stay*65;
  }
  if(month=="june"||month=="september") 
  
  {
    total=stay*68.70;
  }
  if(month=="july"||month=="august") 
  
  {
    total=stay*77;
  }
  if(stay>14)
  {
    discount=(total*10)/100;
    discount=total-discount;
    return discount;   
  }
  else
  {
    return total;
  }
  

}