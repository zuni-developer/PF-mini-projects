#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	char stop;
	cout<<"Welcome to Rock-Paper-Scissors game!"<<endl;
	do {
		cout<<"Choose: "<<endl;
		cout<<" (r) for Rock: "<<endl;
		cout<<" (p) for Paper: "<<endl;
		cout<<" (s) for Scissors: "<<endl;
		cin>>stop;
		//computer choice
		srand(time(0));
		char computerChoice="rps"[rand()%3];
		cout<<"Computer choose: "<<computerChoice<<endl;
		switch(stop){
		//rock
		case 'r':
		case 'R':
			if(computerChoice=='r'){
				cout<<"It's a tie!"<<endl;
			}
			else if(computerChoice=='p'){
				cout<<"You lose!"<<endl;
			}
			else{
				cout<<"You win!"<<endl;
			}
			break;
		//paper
		case 'p':
		case 'P':
			if(computerChoice=='p'){
				cout<<"It's a tie!"<<endl;
			}
			else if(computerChoice=='s'){
				cout<<"You lose!"<<endl;
			}
			else{
				cout<<"You win!"<<endl;
			}
			break;
		//scissors
		case 's':
		case 'S':
			if(computerChoice=='s'){
				cout<<"It's a tie!"<<endl;
			}
			else if(computerChoice=='r'){
				cout<<"You lose!"<<endl;
			}
			else{
				cout<<"You win!"<<endl;
			}
			break;
		//default
		default:
			cout<<"Invalid choice!"<<endl;
		}
		//choice
		cout<<"Do you want to play again? (y/n): ";
		cin>>stop;
	}while(stop=='y'||stop=='Y');
	//ending message
	cout<<"Thanks for playing!"<<endl;
	return 0;
}
