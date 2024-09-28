#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>
using namespace std;

char array[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,column;

void display_board(){
	system ("cls");
    cout<<"\t    |     |    \n"; 
    cout<<"\t "<<array[0][0]<<"  | "<<array[0][1]<<"   | " <<array[0][2]<<endl;
    cout<<"\t____|_____|____\n"; 
    cout<<"\t    |     |    \n"; 
    cout<<"\t "<<array[1][0]<<"  | "<<array[1][1]<<"   | " <<array[1][2]<<endl;
    cout<<"\t____|_____|____\n";
	cout<<"\t    |     |    \n"; 
	cout<<"\t "<<array[2][0]<<"  | "<<array[2][1]<<"   | " <<array[2][2]<<endl;
	cout<<"\t    |     |    \n";
}
void player_turn(string name1,string name2){
		int choice;
    	bool validInput=false;
    	if(turn=='X'){
        	cout<<name1<<"'s turn: ";
    	} 
		else if(turn=='O'){
    	    cout<<name2<<"'s turn: ";
    	}
	while(!validInput){
        if (!(cin>>choice)){
            cout<<"Invalid input! Please enter a number between 1 and 9: ";
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        } 
		else if(choice<1 || choice>9){
            cout<<"Invalid input! Please enter a number between 1 and 9: ";
        } 
		else{
            validInput=true;
        }
    }
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
    }
	if(turn=='X' && array[row][column]!='X' && array[row][column]!='O'){
		array[row][column]='X';
		turn='O';
	}			
	else if(turn=='O' && array[row][column]!='X' && array[row][column]!='O'){
		array[row][column]='O';
		turn='X';
	} 
	else{
		cout<<"The box is filled!\ntry any other box!\n ";
		player_turn(name1,name2);
	}
}   
bool gameover(){
    for(int i=0;i<3;i++){
        if(array[i][0]==array[i][1] && array[i][0]==array[i][2]){
        	return true;
		}
        if(array[0][i]==array[1][i] && array[0][i]==array[2][i]){
        	return true;
		} 
    }
    if(array[0][0]==array[1][1] && array[0][0]==array[2][2]){
    	return true;
	} 
    if(array[0][2]==array[1][1] && array[0][2]==array[2][0]){
    	return true;
	} 
    return false;
}
void single_player_turn(string name){
    int choice;
    bool validInput=false;
    cout<<name<<"'s turn (X): ";
    while(!validInput){
        if(!(cin>>choice)){
            cout<<"Invalid input! Please enter a number between 1 and 9: ";
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        } 
		else if(choice<1 || choice>9){
            cout<<"Invalid input! Please enter a number between 1 and 9: ";
        } 
		else{
            validInput=true;
        }
    }
    int row, column;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
    }
    if(array[row][column]!='X' && array[row][column]!='O'){
        array[row][column]='X';
        turn='O';
    } 
	else{
        cout<<"The box is filled! Try any other box!\n";
        single_player_turn(name);
    }
}
bool isFull(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(array[i][j]!='O' && array[i][j]!='X'){
                return false;
            }
        }
    }
    return true;
}
void computer_turn(){
    int choice;
    bool validInput=false;
    cout<<"Computer's turn..."<<endl;
    while(!validInput){
        choice=rand()%9+1; // Generate random number between 1 and 9
        if(array[(choice-1)/3][(choice-1)%3]!='X' && array[(choice-1)/3][(choice-1)%3]!='O'){
            validInput=true;
        }
    }
    row=(choice-1)/3;
    column=(choice-1)%3;
    array[row][column]=turn;
	if(turn=='X' && array[row][column]!='X' && array[row][column]!='O'){
		array[row][column]='X';
		turn='O';
	}			
	else{
		array[row][column]='O';
		turn='X';
	} 
}
int main(){
	int game_choice;
	char choice;
	srand(time(0)); 
    	int player_mood;
    	string name, name1, name2;
		cout<<"==================================="<<endl;
    	cout<<"  Welcome to TIC-TAC-TOE!"<<endl;
    	cout<<"==================================="<<endl;
    	cout<<"\nChoose a player mode:"<<endl;
    	cout<<"1. Single Player"<<endl;
    	cout<<"2. Multi-Player"<<endl;
    	while (!(cin>>player_mood) || (player_mood<1||player_mood>2)){
        	cin.clear(); 
        	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        	cout<<"Invalid input. Please enter 1 for Single Player or 2 for Multi-Player: ";
    	}
        do{
            turn='X';
    		switch(player_mood){
    		case 1:
    			cout<<"Enter your name: "<<endl;
    			cin>>name;
    			cout<<"You are playing against the Computer!"<<endl;
    			while(!gameover() && !isFull()){
                    display_board();
                    if(turn=='X'){
                        single_player_turn(name);
                   	} 
					else{
                    	computer_turn();
                	}
                }
                display_board();
                if(gameover()){
                	if(turn=='X'){
                    	cout<<"Computer Wins!!";
                   	}
					else{
                        cout<<name<<" Wins!!";
                    }
                }
				else if(isFull()){
    				cout<<"Draw";
    			}
    	break;
    	case 2:
			cout<<"Enter the name of PLAYER 1: ";
			cin>>name1;
			cout<<"Enter the name of PLAYER 2: ";
			cin>>name2;
			while(!gameover() && !isFull()){
				display_board();
				player_turn(name1,name2);
				gameover();
			}	
			display_board();
			if(gameover()){
				if(turn == 'X'){
					cout<<name2<<" Wins!!" ;
				}
				if(turn == 'O'){
				    cout<<name1<<" Wins!!" ;
				}
			}
			else if(isFull()){
				cout<<"Draw";
			}
    	break;
    	default:
    		cout<<"Unfortunately, due to some reason 'GAMEGALAXY' is not working! \nPlease try agin later!"<<endl;
   		break;
   		}
	}while(choice=='y');
	return 0;
}
