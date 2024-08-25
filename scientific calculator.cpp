//scientific calculator
#include <iostream>
#include <cmath> 
//using another library to perform functions
using namespace std;
int main() {
	int stop=1;
    double x, y, result; 
    char operation;
    
    do{
    //title or heading
    cout << "  SSS  CCCC  III  EEEEE  N   N  TTTTT  III  FFFFF III  CCC       CCCC   A   L      CCCC  U   U  L       A    TTTTT  OOO   RRRR"<<endl;
    cout << " S     C      I   E      NN  N    T     I   F      I  C   C     C      A A  L     C      U   U  L      A A     T   O   O  R   R"<<endl;
    cout << "  SSS  C      I   EEEE   N N N    T     I   FFF    I  C         C     AAAAA L     C      U   U  L     AAAAA    T   O   O  RRRR"<<endl;
    cout << "     S C      I   E      N  NN    T     I   F      I  C   C     C     A   A L     C      U   U  L     A   A    T   O   O  R  R"<<endl;
    cout << " SSS   CCCC  III  EEEEE  N   N    T    III  F     III  CCC       CCCC A   A LLLLL  CCCC   UUU   LLLL  A   A    T    OOO   R   R"<<endl<<endl;
    //just to seperate the loops
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<"Enter an operation: "<<endl;
    cout<<" 'a' for Addition (+) "<<endl;
    cout<<" 'b' for Subtraction (-) "<<endl;
    cout<<" 'c' for Multiplication (*) "<<endl;
    cout<<" 'd' for Division (/) "<<endl;
    cout<<" 'e' for Modulo (%) "<<endl;
    cout<<" 'f' for Exponentiation (^) "<<endl;
    cout<<" 'g' for Sine (sin) "<<endl;
    cout<<" 'h' for Cosine (cos) "<<endl;
    cout<<" 'i' for Tangent (tan) "<<endl;
    cout<<" 'j' for Square Root (sqrt) "<<endl;
    cout<<" 'k' for Logarithm (log) "<<endl;
    cin>>operation;
    
    if(operation=='a'){
    	result= x+y;
        cout<<" x+y: "<<result<<endl;
	}
	else if(operation=='b'){
		result= x-y;
        cout<<"x-y: "<<result<<endl;
	}
    else if(operation=='c'){
		result= x*y;
        cout<<"x*y: "<<result<<endl;
	}
	else if(operation=='d'){
		if(y!=0){
            result= x/y;
            cout<<"x/y: "<<result<<endl;
        }
		else{
            cout<<"Division by zero error is not possible!"<<endl;
        }
	}
	else if(operation=='e'){
		if(y!=0){
            result= fmod(x,y);
            cout<<"Modulo of x and y: " <<result<<endl;
        }
		else {
            cout<<"Modulo by zero error!"<<endl;
        }
	}    
      else if(operation=='f'){
		result= pow(x,y);
        cout<<x<<" raised to power of "<<y<<" is: "<<result<<endl;
	} 
    else if(operation=='g'){
		result= sin(x);
        cout<<"Sin of x: "<<result<<endl;
        result= sin(y);
        cout<<"Sin of y: "<<result<<endl;
	}
    else if(operation=='h'){
        result= cos(x);
        cout<<"Cos of x: "<<result<<endl;
        result= sin(y);
        cout<<"Cos of y: "<<result<<endl;
	}
    else if(operation=='i'){
		result= tan(x);
        cout<<"Tan of x: "<<result<<endl;
        result= tan(y);
        cout<<"Tan of y: "<<result<<endl;
	}
    else if(operation=='j'){
		if(x>=0){
        result= sqrt(x);
        cout<<"Sqaure root of x: "<<result<<endl;
        result= sqrt(y);
        cout<<"Sqaure root of y: "<<result<<endl;
        }
		else{
            cout<<"Square root of a negative number is not defined!"<<endl;
        }
	}
    else if(operation=='k'){
	    if(x>0){
            result= log(x);
            cout<<"log of x: "<<result<<endl;
          result= log(y);
            cout<<"log of y: "<<result<<endl;  
        }
		else{
            cout<<"Logarithm of a negative number is not defined!"<<endl;
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

