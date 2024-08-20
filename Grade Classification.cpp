#include<iostream>
using namespace std;
int main()
{
	double Score;
    cout<<"ENTER YOUR SCORE: ";
	cin>>Score;
	if (Score >= 85 && Score <= 100){
		cout<<"A";
		cout<<endl;
	}
	if (Score >= 80 && Score < 85){
		cout<<"A-";
		cout<<endl;
	}
	else if(Score >= 75 && Score < 80){
		cout<<"B";
	    cout<<endl;
	}
	if (Score >= 70 && Score < 75){
		cout<<"B+";
		cout<<endl;
	}
	else if(Score >= 65 && Score < 70){
		cout<<"C";
		cout<<endl;
	}
	else if(Score >= 60 && Score < 65){
		cout<<"C+";
		cout<<endl;
	}
	else if(Score >= 55 && Score < 60){
		cout<<"D";
		cout<<endl;
	}
	else if(Score >= 50 && Score < 55){
		cout<<"D+";
		cout<<endl;
	}
	else if ( Score < 50){
		cout<<"F";
		cout<<endl;
	}
	else {
		cout<<"Ivalid input! Try agian!";
		cout<<endl;
	}	
	return 0;
}
