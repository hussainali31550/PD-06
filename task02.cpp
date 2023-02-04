 #include <iostream>
 using namespace std;

 string grade(float english,float math,float chemistry,float bio,float science,float fisad);

 main()
 {
 float english;
 float math;
 float chemistry;
 float bio;
 float science;
 string gradeBack;
 string name;
 float totalMarks;
 float fisad;


 cout<<"Enter your name : ";
 cin>>name;

 cout<<"Enter marks in English : ";
 cin>>english;

 cout<<"Enter marks in Mathematics : ";
 cin>>math;

 cout<<"Enter marks in Chemistry : ";
 cin>>chemistry;

 cout<<"Enter marks in Biology : ";
 cin>>bio;

 cout<<"Enter marks in Social Science : ";
 cin>>science;

 fisad = ((english+math+chemistry+bio+science)*100)/500;

 gradeBack = grade(english,math,chemistry,bio,science,fisad);

 cout<<"Your name is : "<<name;
 cout<<endl;
 cout<<"Your Total Marks are : 500";
 cout<<endl;
 cout<<"Your Percentage is : "<<fisad;
 cout<<endl;
 cout<<"Your Grade is : "<<gradeBack;
 cout<<endl;

}




  string grade(float english,float math,float chemistry,float bio,float science,float fisad)
{
 
 if( fisad >=90 && fisad <=100)
{ return "A+";}
if( fisad >=80 && fisad <=89)
{ return "A";}
if( fisad >=70 && fisad <=79)
{ return "B+";}
if( fisad >=60 && fisad <=69)
{ return "B";}
if( fisad >=50 && fisad <=59)
{ return "C";}
if( fisad >=40 && fisad <=49)
{ return "D";}
if( fisad < 40)
{ return "F";}


return 0;


}





 

 