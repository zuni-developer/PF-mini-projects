//Global Flavors
#include<iostream>
using namespace std;
int main(){
	int item_no, quantity;
	char choice;
	double total_price=0.0;
	cout<<"WELCOME TO GLOBAL FLAVOURS!"<<endl;
	cout<<"how can I assist you today?"<<endl;
	cout<<"GO ahead and select your order from the MENU given below!"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"\tM   M EEEEE N N   N U     U"<<endl;
	cout<<"\tMM MM E     N  N  N U     U"<<endl;
	cout<<"\tM M M EEEE  N   N N U     U"<<endl;
	cout<<"\tM M M E     N    NN U     U"<<endl;
	cout<<"\tM   M EEEEE N    NN  UUUUU "<<endl<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"\t\t Appetizers"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"1. Garlic Bread $4.99"<<endl;
	cout<<"2. Spring Rolls (Asia) $6.49"<<endl;
	cout<<"3. Hummus with Pita (Middle East) $8.49"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"\t\t Main Courses"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"4. Grilled Salmon $14.99"<<endl;
	cout<<"5. Chicken Tikka Masala (India) $14.99"<<endl;
	cout<<"6. Sushi Platter (Japan) $18.99"<<endl;
	cout<<"-----------------------------------------"<<endl;	
	cout<<"\t\t Desserts"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"7. Tiramisu (Italy) $7.49"<<endl;
	cout<<"8. Baklava (Middle East) $6.99"<<endl;
	cout<<"9. Mango Sticky Rice (Thailand) $8.99"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"\t\t Beverages"<<endl;	
	cout<<"-----------------------------------------"<<endl;
	cout<<"10. Soft Drinks $2.49"<<endl;
	cout<<"11. Freshly Brewed Coffee $2.99"<<endl;
	cout<<"12. Iced Tea $2.49"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"\t\t Specials"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"13. Korean BBQ $19.99"<<endl;
	cout<<"14. Canadian Poutine $11.99"<<endl;
	cout<<"15. Seafood Platter $18.99"<<endl;
	cout<<"16. Iced Tea $2.49"<<endl;
	cout<<"-----------------------------------------"<<endl;
	do{
		do{
			cout<<"Enter the item number (1-17):"<<endl;
			cin>>item_no;
			if(item_no<1 || item_no>17){
			cout<<"Invalid item number. Please try again."<<endl;
			}
		}while(item_no<1 || item_no>17);
		cout<<"Enter the quantity:"<<endl;
		cin>>quantity;
		switch(item_no){
			case 1:
				total_price += quantity*4.99;
				break;
			case 2:
				total_price += quantity*6.49;
				break;
			case 3:
				total_price += quantity*8.49;
				break;
			case 4:
				total_price += quantity*14.99;
				break;
			case 5:
				total_price += quantity*14.99;
				break;
			case 6:
				total_price += quantity*18.99;
				break;
			case 8:
				total_price += quantity*7.49;
				break;
			case 9:
				total_price += quantity*6.99;
				break;
			case 10:
				total_price += quantity*8.99;
				break;
			case 11:
				total_price += quantity*2.49;
				break;
			case 12:
				total_price += quantity*2.99;
				break;
			case 13:
				total_price += quantity*2.49;
				break;
			case 14:
				total_price += quantity*19.99;
				break;
			case 15:
				total_price += quantity*11.99;
				break;
			case 16:
				total_price += quantity*18.99;
				break;
			case 17:
				total_price += quantity*2.49;
				break;
			default:
				cout << "Invalid item number. Please try again." << endl;
				continue;
		}
		cout<<"Do you need something else (y/n)?"<<endl;
		cin >>choice;
		}while(choice=='y' || choice=='Y');
		cout<<"TOTAL PRICE: $"<<total_price<<endl; //try to tell the customer what they got and make a proper bill
	return 0;
}
