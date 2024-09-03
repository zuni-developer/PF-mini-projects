//Coffee Machine Simulation
#include<iostream>
using namespace std;

int main(){
	char option, size, choice;
	int item;
	string capacity;
	double total_price = 0.0;
	cout<<"WELCOME TO BARISTA COFFEE MACHINES !\n"<<endl;
	do{
		double price = 0.0;
		cout<<"what would you like today? "<<endl;
		cout<<"Enter 'a' for Cappuccino"<<endl;
		cout<<"Enter 'b' for Caffè macchiato"<<endl;
		cout<<"Enter 'c' for Latte"<<endl;
		cout<<"Enter 'd' for Mocha"<<endl;
		cout<<"Enter 'e' for Americano"<<endl;
		cout<<"Enter 'f' for Cortado "<<endl;
		cout<<"Enter 'g' for Doppio "<<endl;
		cin>>option;
		switch(option){
			case 'a':
			case 'A':
				item = 1;
				price += 2.5;
				break;
			case 'b':
			case 'B':
				item= 2 ;
				price += 2.0;
				break;
			case 'c':
			case 'C':
				item= 3 ;
				price += 3.0;
				break;
			case 'd':
			case 'D':
				item= 4 ;
				price += 3.5;
				break;
			case 'e':
			case 'E':
				item= 5 ;
				price += 2.0;
				break;
			case 'f':
			case 'F':
				item= 6 ;
				price += 2.5;
				break;
			case 'g':
			case 'G':
				item= 7 ;
				price += 2.0;
				break;
			default:
				cout<<"Invalid drink option! Please choose a valid option." <<endl;
				break;
		}
		do{
			cout<<"what size whould you prefer?"<<endl;
			cout<<"small (S)"<<endl;
			cout<<"medium (M)"<<endl;
			cout<<"large (L)"<<endl;
			cin>>size;
			switch(size){
				case 's':
				case 'S':
					capacity="Small";
					break;
				case 'm':
				case 'M':
					capacity="Medium";
					break;
				case 'l':
				case 'L':
					capacity="Large";
					break;
			}
		}while (size!='s' && size!='S' && size!='m' && size!='M' && size!='l' && size!='L');
		cout<<"You ordered ";
		switch(item){
			case 1:
				cout<<"Cappuccino";
				break;
			case 2:
				cout<<"Caffè macchiato";
				break;
			case 3:
				cout<<"Latte";
				break;
			case 4:
				cout<<"Mocha";
				break;
			case 5:
				cout<<"Americano";
				break;
			case 6:
				cout<<"Cortado";
				break;
			case 7:
				cout<<"Doppio";
				break;
		}
		cout<<" in "<<capacity<<" size."<<endl;
		cout<<"The price for this order is: $"<<price<<endl;
		total_price += price;
		cout<<"Do you need something else? (y/n)"<<endl;
		cin>>choice;
		}while(choice=='y' || choice=='Y');
	cout<<"Your total amount for all orders is: $"<<total_price<<endl;
	cout << "Thank you for using our coffee machine!" << endl;
	return 0;
}
