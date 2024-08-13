#include <iostream>
using namespace std;
int main() {
    // Declarations
    int number_of_classes;
    double attendance;
    double percentage;
    string subject;
    // Inputs
    cout << "Enter your subject name: ";
    cin >> subject;
    cout << "Enter the total number of classes held: ";
    cin >> number_of_classes;
    cout << "Enter the number of classes attended: ";
    cin >> attendance;
    // Calculate the percentage of classes attended
    percentage = (attendance / number_of_classes) * 100;
    // Output the calculated percentage
    cout << "\nYour percentage of attendance in " << subject << " class is " << percentage <<" %. " << endl;
    // Check if the student is allowed to sit in the exam
    if (percentage >= 75) {
        cout << "You are allowed to sit in the exam." << endl;
    }
	else if (percentage<75){
		char condition;
        cout << "Was their a medical reasons for not attending the classes? (enter 'y' if yes and enter 'n' if no ): " << endl;
        cin>>condition;
        if (condition == 'y' || condition == 'Y'){
        	cout<<"You are allowed to sit in the exam." <<endl;
		}
		else if (condition == 'n' || condition == 'N'){
			cout<<"You are not allowed to sit in the exam." <<endl;
		}
		else{
			cout<<"Invalid input!" <<endl;
		}
    }
    return 0;
}
