#include<iostream>
using namespace std;
float calculate(char service,char time_of_day,float minutes);
main()
{
    char time_of_day,service;
    float minutes;
    cout<<"Which type of Service you are using p/n =";
    cin>>service;
    cout<<"Enter The Time of Day.D/N=";
    cin>>time_of_day;
    cout<<"Enter the Number of minutes the service was used = ";
    cin>>minutes;
    float result = calculate(service, time_of_day,minutes);
    cout<<"$ "<<result;
}
    float calculate(char service,char time_of_day,float minutes){
     float charges;
    if ( service == 'n')
    {
      if ( minutes <= 50)
      {

        charges = 10;
      return charges;
      }
      else if(minutes > 50)
      {
      
      charges = (minutes*0.20) + 10; 
      return charges;

      }

    }
    else if ( time_of_day == 'D')
    {
            if ( service == 'p')
            {
            if ( minutes <=75)
            {
                charges = 25.00;
                return charges;
            }
            else if ( minutes > 75)
            {
                charges = (0.10*minutes) + 25;
                return charges;
            }
            }              
    }
    else if(time_of_day == 'N')
            {
            if ( service == 'p')
            {
             if ( minutes <=100)
             {
                charges = 25.00;
                return charges;
             }
             else if ( minutes > 100)
             {
                charges = (0.05*minutes) + 25;
                return charges;
             }
            }       
            }
    
    }