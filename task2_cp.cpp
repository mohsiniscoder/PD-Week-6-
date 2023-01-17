#include<iostream>
using namespace std;
main()
{
int english,math,chem,ssc,bio;
string name;
cout<<"Enter Your Name= ";
cin>>name;
cout<<"Enter English Marks=";
cin>>english;
cout<<"Enter Math Marks=";
cin>>math;
cout<<"Enter Chemistry Marks=";
cin>>chem;
cout<<"Enter Social Sciences  Marks=";
cin>>ssc;
cout<<"Enter Bio Marks=";
cin>>bio;
int total_marks = english+math+chem+ssc+bio;
float total_per = (total_marks/500.0)*100;
if (total_per >=90 && total_per<=100)
{

    cout<<"A+";
}
else if (total_per >=80 && total_per<=89)
{

    cout<<name<<" A";
}
else if (total_per >=70 && total_per<=79)
{

    cout<<name<<" B+";
}
else if (total_per >=60 && total_per<=69)
{

    cout<<name<<" B";
}
else if (total_per >=50 && total_per<=59)
{

    cout<<name<<" C";
}
else if (total_per >=40 && total_per<=49)
{

    cout<<name<<" D";
}
else 
cout<<name<<" Fail :(";
}