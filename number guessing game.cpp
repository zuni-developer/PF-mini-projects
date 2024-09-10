#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;
int main(){
    int guess, tries=5;
    int level, randomNumber;
    cout<<"WELCOME TO THE GUESSING GAME!"<<endl<<endl;
    cout<<"Choose a difficulty level to play: "<<endl;
	cout<<"1.Easy"<<endl;
	cout<<"2.Medium"<<endl;
	cout<<"3.Hard"<<endl;
	//validating user input for difficulty level (handle all cases)
    while (!(cin>>level) || (level<1||level>3)){
        cin.clear(); // Clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        cout<<"Invalid input. Please choose between (1-3): ";
    }
    //setting the guessing range based on level
    int lower, upper;
    if(level==1){
        lower=1;
        upper=50;
    } 
	else if(level==2){
        lower=1;
        upper=100;
    }
	else{
        lower=1;
        upper=500;
    }
    //generating a random number within the choosen range
    srand(time(0));
    randomNumber= rand()%upper;

    cout<<"Guess a number between ("<<lower<<"-"<<upper<<")"<<":"<<endl;
    cout<<"Tries left: "<<tries<<endl;
    
    for (tries=5; tries>0; tries--) {
        //validating guess input (handle non-numeric input)
        while (!(cin>>guess)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid guess. Please enter a number: ";
        }
        if(guess==randomNumber) {
            cout<<"\nCongratulations!!"<<endl;
			cout<<"You guessed the number in  "<<4-tries<<" tries!"<<endl;
            cout<<"YOU WON :)"<<endl;
            break;
        }
        if(tries==1){
            cout<<"\nYOU LOSE! :(  \nThe number was "<<randomNumber<<endl;
            break;
        }
        if(guess>randomNumber){
            cout<<"Your guess is too high."<<endl;
        }
		else{
            cout<<"Your guess is too low."<<endl;
        }
        cout<<"Tries left: "<<tries-1<<endl;
    }
    return 0;
}
