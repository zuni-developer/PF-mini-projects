//truth and dare
#include<iostream>
using namespace std;
int main(){
	int truthCount = 0; 
    int dareCount = 0; 
	string name;
	char stop;
	cout<<"Welcome to truth dare suggester!"<<endl;
	do{
		char choice;
		cout<<"\nEnter your name: ";
		cin>>name;
		cout<<"Hi, "<<name<<"!"<<endl;
		do{
		    cout<<"Choose one of the following: "<<endl;
		    cout<<"Enter 'T' for truth"<<endl;
		    cout<<"Enter 'D' for dare"<<endl;
	    	cin>>choice;
		    if(choice=='t' || choice=='T'){
			   truthCount++;
                switch(truthCount){
                    case 1:
                        cout<<"Truth: What is your biggest fear?"<<endl;
                        break;
                    case 2:
                        cout<<"Truth: What is your most embarrassing moment?"<<endl;
                        break;
                    case 3:
                        cout<<"Truth: What is your guilty pleasure?"<<endl;
                        break;
                    case 4:
                        cout<<"Truth: What is the weirdest dream you've ever had?"<<endl;
                        break;
				    case 5:
                        cout<<"Truth: Have you ever cheated on a test?"<<endl;
                        break;
					case 6:
                        cout<<"Truth: What is your guilty pleasure?"<<endl;
                        break;
					case 7:
                        cout<<"Truth: What is the craziest thing you've ever done?"<<endl;
                        break;
					case 8:
                        cout<<"Truth: What is your guilty pleasure?"<<endl;
                        break;
					case 9:
                        cout<<"Truth: What is your most embarrassing nickname?"<<endl;
                        break;
					case 10:
                        cout<<"Truth: What is your worst habit?"<<endl;
                        break;   
                    default:
                        cout<<"Truth: What is something you've done that you hope your parents never find out about?"<<endl;
                        break;
                }
		    }
		    if(choice=='d' || choice=='D'){
			   dareCount++;
                switch(dareCount) {
                    case 1:
                        cout<<"Dare: Sing your favorite song out loud!"<<endl;
                        break;
                    case 2:
                        cout<<"Dare: Do your best impression of a celebrity!"<<endl;
                        break;
                    case 3:
                        cout<<"Dare: Until the next round, talk super loud, like nobody can hear you."<<endl;
                        break;
                    case 4:
                        cout<<"Dare: Go outside and shout 'I'm a superstar!"<<endl;
                        break;
				    case 5:
                        cout<<"Dare: Wear socks on your hands for the next 5 minutes."<<endl;
                        break;
					case 6:
                        cout<<"Dare: Do 20 jumping jacks."<<endl;
                        break;
					case 7:
                        cout<<"Dare: Speak in an accent for the next 10 minutes."<<endl;
                        break;
					case 8:
                        cout<<"Dare: Take a selfie with a stranger!"<<endl;
                        break;
					case 9:
                        cout<<"Dare:  Walk around with a sign that says 'I'm lost, please help me find my way home'!"<<endl;
                        break;
					case 10:
                        cout<<"Dare: Put 10 different available liquids into a cup and drink it."<<endl;
                        break;
                    default:
                        cout << "Dare: Call a friend and tell them you're getting married tomorrow (then let them off the hook)!" << endl;
                        break;
		    }
		}
		    else{
			cout<<"Invalid input!"<<endl;
			}
		}while(!(choice=='t' || choice=='T' || choice=='d' || choice=='D'));
		cout<<"\nWanna keep playing? (y/n): "<<endl;
		cin>>stop;
	}while(stop=='y' || stop=='Y');
	cout<<"\nHope you enjoyed!"<<endl;
	return 0;
}
