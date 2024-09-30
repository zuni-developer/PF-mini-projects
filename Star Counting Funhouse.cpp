#include<iostream>  
#include<cstdlib>
#include<ctime>
using namespace std;

void displayStars(int count){
    for(int i=0;i<count;i++){
        cout<<" * ";
        if(i%10==0){ 
            cout<<endl;
        }
    }
    cout<<endl<<"How many stars are there? ";
}

int main(){
    srand(time(0)); 
    cout<<"Welcome to the Number Funhouse!"<<endl;
    cout<<"Let's count the stars in the sky."<<endl;
    int starCount=rand()%100+1; 
    displayStars(starCount);
    int userGuess;
    cin>>userGuess;
    if(userGuess==starCount){
        cout<<"Great job! You counted the stars correctly!"<<endl;
    }
	else{
        cout<<"Not quite, there were "<<starCount<<" stars. Let's try again!"<<endl;
    }
    return 0;
}
