#include<iostream>
using namespace std;
int number (int tmin,int tminar,int res,int final,int totalmin,int totalhour);
int number2(int returnhour,int res);
string number3(int returnmin );
int main()
{
    int hour,min,hourar,minar,tmin,tminar,res,final,totalmin,totalhour,returnhour,returnmin;
    string returntext;
    cout<<"Exam starting time(hour)";
    cin>>hour;
    cout<<"Exam starting time(min)";
    cin>>min;
    cout<<"Studen arrival time(hour)";
    cin>>hourar;
    cout<<"Student arrival  time(min)";
    cin>>minar;
    tmin=(hour*60)+min;
    tminar=(hourar*60)+minar;
    res=tmin-tminar;
    returnhour=number(tmin,tminar,res,final,totalmin,totalhour);
    returnmin=number2(returnhour,res);
    returntext =number3(returnmin);
    cout<<""<<returntext<<endl;
    if(res<0){
        if(returnhour>0)
           {
            cout<<""<<returnhour<<":"<<returnmin<<"hour after the start";
           }
           else{
            cout<<""<<returnhour<<":"<<returnmin<<"minute after the start";
           }
           
           }
    else if(res>=0)
{

     if(returnhour>0)
           {
            cout<<""<<returnhour<<":"<<returnmin<<"hour after the start";
           }

    else
   {
    cout<<""<<returnhour<<":"<<returnmin<<"minutes before the start";
   }

}
}




   int number (int tmin,int tminar,int res,int final,int totalmin,int totalhour)
{

final =res/60;
return final;
}



int number2(int returnhour,int res)
{
   int totalmin,finalmin;
   totalmin=returnhour*60;
   finalmin=res-totalmin;
   return finalmin;
}


string number3(int returnmin )
{
 string num;

  if( returnmin<0 )
{
 num="Late";

}
else  if( returnmin>=0 )
{
 num="Early";

}

 else if( returnmin>0 && returnmin<=30 )
{
 num="On Time";

}
else 
{
 cout<<"invlid input";

}
return num;
}