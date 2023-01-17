#include<iostream>
using namespace std; 
main()
{
    int date;
    string month;
    cout<<"Enter date=";
    cin>>date;
    cout<<"Enter month=";
    cin>>month;
    if ( (month == "january" && date >=20 ) || ( month == "fabuary" && date <=18)) 
    {
        cout<<"Aquarius";
    }
    else if ( (month == "fabuary" && date >=19 ) || ( month == "march" && date <=20)) 
    {
        cout<<"Pisces";
    }
    else if ( (month == "march" && date >=21 ) || ( month == "april" && date <=19)) 
    {
        cout<<"Aries";
    }
    else if ( (month == "april" && date >=20 ) || ( month == "may" && date <=20)) 
    {
        cout<<"Taurus";
    }
    else if ( (month == "may" && date >=21 ) || ( month == "june" && date <=20)) 
    {
        cout<<"Gemini";
    }
     else if ( (month == "may" && date >=21 ) || ( month == "june" && date <=20)) 
    {
        cout<<"Gemini";
    }
     else if ( (month == "june" && date >=21 ) || ( month == "july" && date <=22)) 
    {
        cout<<"Cancer";
    }
      else if ( (month == "july" && date >=23 ) || ( month == "august" && date <=22)) 
    {
        cout<<"Leo";
    }
      else if ( (month == "august" && date >=23 ) || ( month == "september" && date <=22)) 
    {
        cout<<"Virgo";
    }
       else if ( (month == "september" && date >=23 ) || ( month == "october" && date <=22)) 
    {
        cout<<"Libra";
    }
     else if ( (month == "october" && date >=23 ) || ( month == "november" && date <=21)) 
    {
        cout<<"Scorpio";
    }
      else if ( (month == "november" && date >=22 ) || ( month == "december" && date <=21)) 
    {
        cout<<"Sagittarius";
    }
      else if ( (month == "december" && date >=22 ) || ( month == "january" && date <=19)) 
    {
        cout<<"capricon";
    }
}