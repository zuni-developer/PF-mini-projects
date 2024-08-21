//simple calculator
#include<iostream>
using namespace std;
int main(){
	double x,y,answer;
	char operation;
	int stop=1;
	
	do{
	cout<<"\t\t----CALCULATOR----"<<endl; 
    cout<<"Enter 1st numbre: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<"Select an operator: "<<endl;
    cout<<"Enter 'a' for addition "<<endl; 
	cout<<"Enter 'b' for subtraction "<<endl; 
	cout<<"Enter 'c' for multiplication "<<endl; 
	cout<<"Enter 'd' for divition "<<endl; 
    cin>>operation;
     if(operation=='a'){
    	answer= x+y;
        cout<<" x+y: "<<answer<<endl;
	}
	else if(operation=='b'){
		answer= x-y;
        cout<<"x-y: "<<answer<<endl;
	}
    else if(operation=='c'){
		answer= x*y;
        cout<<"x*y: "<<answer<<endl;
	}
	else if(operation=='d'){
		if(y!=0){
            answer= x/y;
            cout<<"x/y: "<<answer<<endl;
        }
		else{
            cout<<"Division by zero error is not possible!"<<endl;
        }
	}
	else{
	   cout <<"Invalid operation!"<<endl;
	}
	cout<<"----TO EXIT PRESS ZERO!----"<<endl;
	cout<<"----TO CONTINUE PERSS ANY NUMBER ITHER THAN ZERO!----"<<endl;
	cin>>stop;
	}
	while(stop!=0);
    return 0;
}

