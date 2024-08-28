//Seasonal Fruit Suggester
#include <iostream>
using namespace std;
int main(){
    char choice;
    cout<<"Welcome to the Seasonal Fruit Suggester!"<<endl;
    do{
        cout<<"\nSelect a season to get suggested seasonal fruits:"<<endl;
        cout<<"1. Spring"<<endl;
        cout<<"2. Summer"<<endl;
        cout<<"3. Autumn"<<endl;
        cout<<"4. Winter"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice (1-5): ";
        cin>>choice;
        switch(choice){
            case '1':
                cout<<"\nSpring Fruits: Apple, Banana, Cherry, Kiwi, Mango"<<endl;
                break;
            case '2':
                cout<<"\nSummer Fruits: Watermelon, Strawberry, Pineapple, Peach, Grapes"<<endl;
                break;
            case '3':
                cout<<"\nAutumn Fruits: Pear, Plum, Fig, Persimmon, Pomegranate"<<endl;
                break;
            case '4':
                cout<<"\nWinter Fruits: Orange, Grapefruit, Clementine, Persimmon, Kiwi"<<endl;
                break;
            case '5':
                cout<<"\nExiting the program. Goodbye!";
                return 0;
            default:
                cout<<"\nInvalid choice! Please enter a number from 1 to 5."<<endl;
        }
    }while(choice!='5');
    return 0;
}

