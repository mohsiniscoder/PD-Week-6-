#include<iostream>
using namespace std;
main()
{
string temp,humidity;
cout<<"Enter Temperature=";
cin>>temp;
cout<<"Enter Humidity=";
cin>>humidity;
if ( temp == "warm" && humidity == "dry"  )
{
cout<<"PLay Tennis";

}
else if ( temp == "warm" && humidity == "humid"  )
{
cout<<"Swim";

}
else if ( temp == "cold" && humidity == "dry"  )
{
cout<<"Play basketball";

}
else if ( temp == "cold" && humidity =="humid" )
cout<<"Watch TV";
}
