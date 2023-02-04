#include <iostream>
using namespace std;

string decide(string temp,string humidity);
main()
{
 string temp;
 string humidity;
 string pakro;

  cout<<"Enter temperature status(warm or cold) : ";
  cin>>temp;

  cout<<"Enter humidity status(dry or humid) : ";
  cin>>humidity;

  pakro = decide(temp,humidity);
  cout<<pakro<<endl;

}









string decide(string temp,string humidity)
{
	if(temp=="warm" && humidity=="dry")
	{return "Play Tennis";}
	if(temp=="warm" && humidity=="humid")
	{return "Swim";}
	if(temp=="cold" && humidity=="dry")
	{return "Play Basketball";}
	if(temp=="cold" && humidity=="humid")
	{return "Watch TV";}
   return 0;
}


