#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y;
	char answer;
	char continue_exit='o';
	
	while(continue_exit=='o' || continue_exit=='O'){
	cout<<"\t\t\t\t\t----CALCULATOR----\n";//just to seperate the loops
	cout<<"Enter 1st number: ";
	cin>>x;
	cout<<"Enter 2nd number: ";
	cin>>y;
	cout<<"Enter 'a' for Addition:"<<endl;
	cout<<"Enter 'b' for Subtraction:"<<endl;
	cout<<"Enter 'c' for Multiplication:"<<endl;
	cout<<"Enter 'd' for Divition:"<<endl;
	cout<<"Enter 'e' for Modulo:"<<endl<<endl;
	cout<<"Operation to perform: ";
	cin>>answer;
	cout<<"ANSWER: ";
	if(answer=='a'){
		cout<<x<<" + "<<y<<" = "<<x+y<<endl;
	}
	else if(answer=='b'){
		cout<<x-y<<endl;
	}
	else if(answer=='c'){
		cout<<x<<" * "<<y<<" = "<<x*y<<endl;
	}
	else if(answer=='d'){
		    if(y!=0){
            cout<<x<<" / "<<y<<" = "<<x/y<< endl;
			}
			else{
            cout<<"Error! Division by zero."<<endl;
            }
    }
	else if(answer=='e'){
		cout<<x<<" % "<<y<<" = "<< fmod(x,y) <<endl;
	}
	else{
        cout<<"Invalid input! Please try again!"<<endl;
    }
	cout<<"\n";
	cout<<"ENTER 'X' TO EXIT or ENTER 'O' TO CONTINUE!!"<<endl;
	cin>>continue_exit;
}
    cout<<"\n----Calculator exited. Goodbye!----"<<endl;
return 0;	
}
