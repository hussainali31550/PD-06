 #include <iostream>
 using namespace std;

float totalBill( char  category, char  period,int minutes);

 main()
 {
 char category;
 char period;
 int minutes;
 float pakaro;
 

cout<<"Enter which type of customer you are Premium(p) or Regular(r) : ";
cin>>category;

cout<<"Enter (d) for day time and (n) for night time : ";
cin>>period;

cout<<"Enter the number of minutes you used your service : ";
cin>>minutes;

 pakaro = totalBill( category,  period, minutes);
cout<<"Your Total Bill is : "<<pakaro;


}



 float totalBill( char  category, char  period,int minutes)
{

float bill;


if (category=='r')
{
  if(minutes>50)
   { float remaining1 = minutes - 50;
     float extraBill1 =  remaining1 * 0.20;
      bill = 10 + extraBill1;
     return bill;} 

     if(minutes<=50)
   { bill = 10 ;
    return bill;}

}

  if(category=='p')
  {
      if(period=='d')
      {
        if(minutes<75)  
        {
         bill = 25;
         return bill;
        }

         if(minutes>75)  
        {
       float remaining2 = minutes - 75;
       float extraBill2 =  remaining2 * 0.10;
       bill = 25 + extraBill2;
       return bill;
       }
      }
        if(period=='n')
        {    
             if(minutes<100)  
          {
         bill = 25;
         return bill;
        }

         if(minutes>100)  
        {
        float remaining3 = minutes - 100;
        float extraBill3 =  remaining3 * 0.05;
        bill = 25 + extraBill3;
        return bill;
      }
         }
   }
return 0;
 }


	
















