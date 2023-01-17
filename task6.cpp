    #include<iostream>
    using namespace std;
    main(){
    string month;
    int number_of_days;
    float studio;
    float apartment;
    float studio_discount;
    float apartment_discount;
    cout<<"Enter The Month=";
    cin>>month;
    cout<<"Enter number of days=";
    cin>>number_of_days;
    if ( month == "may" || month == "october"){
        studio = 50;
        apartment = 65;
        if ( number_of_days <= 14 && number_of_days > 7 ){

      studio_discount = (studio*number_of_days) - ((studio*number_of_days)*0.05);
      cout<<"Studio:"<<studio_discount;
      apartment_discount = (apartment*number_of_days) - ((apartment*number_of_days)* 0.10);
      cout<<"Apartment:"<<apartment_discount;
        }
       if ( number_of_days > 14 ){       
      studio_discount = (studio*number_of_days) - ((studio*number_of_days)*0.30);
      cout<<"Studio:"<<studio_discount;
      apartment_discount = (apartment*number_of_days) - ((apartment*number_of_days) *0.10);
      cout<<"Apartment:"<<apartment_discount;
       }      
    }
    else if ( month == "june" || month == "september"){
        studio = 75.2;
        apartment = 68.70;
       if ( number_of_days > 14 ){        
      studio_discount = (studio*number_of_days) - ((studio*number_of_days)*0.20);
      cout<<"Studio:"<<studio_discount;
      apartment_discount = (apartment*number_of_days) - ((apartment*number_of_days) *0.10);
      cout<<"Apartment:"<<apartment_discount;
       }      
    }
    else if ( month == "july" || month == "august"){
        studio = 76;
        apartment = 77;
       if ( number_of_days > 14 )
      studio_discount = (studio*number_of_days) ;
      cout<<"Studio:"<<studio_discount;
      apartment_discount = (apartment*number_of_days) - ((apartment*number_of_days)* 0.10);
      cout<<"Apartment:"<<apartment_discount;
       }      
   else 
   cout<<"values are not valid according to given conditions";
    }