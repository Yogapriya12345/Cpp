#include <iostream>
#include <string>
using namespace std;

int main ()
{
   
    string email, location;
    int choice;
    cout << "welocome to weather app:\n";
    
    cout << "Enter your email address: ";
    cin >> email;

    cout << "Enter your location: ";
    cin >> location;


    cout << "Weather Menu" << endl;
    cout << "1. Weekly report" << endl;
    cout << "2. Current climate" << endl;

    
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
      
            
        case 1:
            cout << "enter todays's weather:";
            cout<<"todays climate is slightly cloudy";
            break;

        case 2:
            cout << "enter tomorrow's weather:";
            cout<<"\nsunny";
            break;

        case 3:
            cout << "enter yesterday's weather:";
            cout<<"\n rainy";
            break;
        default:
            cout << "Invalid choice" << endl;
           cout <<"Good bye"<<endl;
            break;
    }

    return 0;
}