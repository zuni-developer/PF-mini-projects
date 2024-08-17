//fortune teller
#include <iostream>
using namespace std;

int main() {
    int birthMonth, birthDay;
    cout << "Welcome to the Fortune Teller!" << endl;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    //birthMonth check
    if (birthMonth < 1 || birthMonth > 12) {
        cout << "Invalid month! Please enter a valid month (1-12).\n\n";
    	cout << "Re-enter your birth month (1-12): ";
    	cin >> birthMonth;
    }
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;
    //birthDate check
    if (birthDay < 1 || birthDay > 31) {
        cout << "Invalid day! Please enter a valid day (1-31).\n\n";
    	cout << "Re-enter your birth day (1-31): ";
    	cin >> birthDay;
    }
    // Determine astrological sign based on birth month and day
    string astroSign;
	if ((birthMonth == 12 && birthDay >= 22) || (birthMonth == 1 && birthDay <= 19)) {
        astroSign = "Capricorn";
    }
	else if ((birthMonth == 1 && birthDay >= 20) || (birthMonth == 2 && birthDay <= 18)) {
        astroSign = "Aquarius";
    }
	else if ((birthMonth == 2 && birthDay >= 19) || (birthMonth == 3 && birthDay <= 20)) {
        astroSign = "Pisces";
    }
    else if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 4 && birthDay <= 19)) {
        astroSign = "Aries";
    }
	else if ((birthMonth == 4 && birthDay >= 20) || (birthMonth == 5 && birthDay <= 20)) {
        astroSign = "Taurus";
    }
	else if ((birthMonth == 5 && birthDay >= 21) || (birthMonth == 6 && birthDay <= 20)) {
        astroSign = "Gemini";
    }
	else if ((birthMonth == 6 && birthDay >= 21) || (birthMonth == 7 && birthDay <= 22)) {
        astroSign = "Cancer";
    }
	else if ((birthMonth == 7 && birthDay >= 23) || (birthMonth == 8 && birthDay <= 22)) {
        astroSign = "Leo";
    }
	else if ((birthMonth == 8 && birthDay >= 23) || (birthMonth == 9 && birthDay <= 22)) {
        astroSign = "Virgo";
    }
	else if ((birthMonth == 9 && birthDay >= 23) || (birthMonth == 10 && birthDay <= 22)) {
        astroSign = "Libra";
    }
	else if ((birthMonth == 10 && birthDay >= 23) || (birthMonth == 11 && birthDay <= 21)) {
        astroSign = "Scorpio";
    }
	else if ((birthMonth == 11 && birthDay >= 22) || (birthMonth == 12 && birthDay <= 21)) {
        astroSign = "Sagittarius";
    }
    else{
    	cout<<"ERROR!!";
	}

    cout << "\nYour astrological sign is " << astroSign << "." << endl;
    // Generate a unique fortune for each sign
    string fortune;
	if (astroSign == "Capricorn") {
        fortune = "Your discipline and ambition will drive you toward your goals.";
    }
	else if (astroSign == "Aquarius") {
        fortune = "Your creativity and innovation will help you stand out.";
    }
	else if (astroSign == "Pisces") {
        fortune = "Your intuition and compassion will guide you to help others.";
    }
    else if (astroSign == "Aries") {
        fortune = "Your adventurous spirit will lead you to exciting opportunities!";
    }
	else if (astroSign == "Taurus") {
        fortune = "Patience and persistence will pay off in your endeavors.";
    }
	else if (astroSign == "Gemini") {
        fortune = "Your wit and communication skills will be your superpower.";
    }
	else if (astroSign == "Cancer") {
        fortune = "Your compassion and empathy will bring you closer to others.";
    }
	else if (astroSign == "Leo") {
        fortune = "Your charisma and leadership will inspire those around you.";
    }
	else if (astroSign == "Virgo") {
        fortune = "Your attention to detail and analytical mind will serve you well.";
    }
	else if (astroSign == "Libra") {
        fortune = "Your diplomacy and balance will help you in complex situations.";
    }
	else if (astroSign == "Scorpio") {
        fortune = "Your passion and determination will lead you to success.";
    }
	else if (astroSign == "Sagittarius") {
        fortune = "Your adventurous nature will bring you new experiences.";
    }
    else{
    	cout<<"ERROR!";
	}
    cout << "Fortune: " << fortune << endl;

    return 0;
}
