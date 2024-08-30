 //personality pallete
 #include<iostream>   
 using namespace std;
 int main(){
 	char start;
    string name;
    cout<<"Enter your first name: ";
    cin>>name;
 	/*int age;
    cout<<"Enter your age: ";
    cin>>age;      
	//Try to modify this with different age groups and then give them different choices according to their age groups*/
    cout<<"DO YOU WANNA PLAY A GAME? (y/n): ";
    cin>>start;
    if(start=='y' || start=='Y'){
    	cout<<"\t\tW   W  EEEEE  L      CCCC   OOO  M   M  EEEE  "<<endl;
    	cout<<"\t\tW   W  E      L     C      O   O MM MM  E     "<<endl;
    	cout<<"\t\tW W W  EEEE   L     C      O   O M M M  EEEE  "<<endl;
    	cout<<"\t\tWW WW  E      L     C      O   O M   M  E     "<<endl;
    	cout<<"\t\tW   W  EEEEE  LLLLL  CCCC   OOO  M   M  EEEEE "<<endl;
    	cout<<"\n\t\tTO THE PERSONALITY PALETTE GAME!\n"<<endl;
    string weather;
    do{
	char choice_1;
    cout<<"Choose your faviroute season: "<<endl;
    cout<<"Enter 'a' for Winter"<<endl;
    cout<<"Enter 'b' for Summer"<<endl;
    cout<<"Enter 'c' for Autumn"<<endl;
    cout<<"Enter 'd' for Spring"<<endl;
    cin>>choice_1;
    	if(choice_1=='a' || choice_1=='A'){
    		weather="Winter";
		}
		else if(choice_1=='b' || choice_1=='B'){
    		weather="Summer";
		}
		else if(choice_1=='c' || choice_1=='C'){
    		weather="Autumn";
		}
		else if(choice_1=='d' || choice_1=='D'){
    		weather="Spring";
		}
		else{
			cout<<"This option doesn't exist!!"<<endl;
			cout<<"please choose again..."<<endl;
		}
	}while(!(weather=="Winter" || weather=="Summer" || weather=="Autumn" ||weather=="Spring"));
    string color;
	char choice_2;
    do{
    cout<<"\nWhat's your faviroute color: "<<endl;
    cout<<" 'a' to choose purple"<<endl;
    cout<<" 'b' to choose pink"<<endl;
    cout<<" 'c' to choose orange"<<endl;
    cout<<" 'd' to choose yellow"<<endl;
    cout<<" 'e' to choose voilet"<<endl;
    cout<<" 'f' to choose royal blue"<<endl;
    cout<<" 'g' to choose sky blue"<<endl;
    cout<<" 'h' to choose dark green"<<endl;
    cout<<" 'i' to choose light green"<<endl;
    cout<<" 'j' to choose black"<<endl;
    cout<<" 'k' to choose grey"<<endl;
    cout<<" 'l' to choose brown"<<endl;
    cout<<" 'm' to choose red"<<endl;
    cout<<" 'n' to choose white"<<endl;
    cout<<" 'o' to choose mustard"<<endl;
    cout<<" 'p' to choose skin"<<endl;
    cout<<" 'q' to choose crimson"<<endl;
    cout<<" 'r' to choose aqua"<<endl;
    cout<<" 's' to choose peach"<<endl;
    cout<<" 't' to choose golden"<<endl;
    cout<<" 'u' to choose silver"<<endl;
    cout<<" 'v' to choose bronze"<<endl;
    cout<<" 'w' to choose lime"<<endl;
    cout<<" 'x' to choose cyan"<<endl;
    cout<<" 'y' to choose navy blue"<<endl;
    cout<<" 'z' to choose teal"<<endl;
    cin>>choice_2;
    switch(choice_2) {
        case 'a':
        case 'A':
            color="purple";
            break;
        case 'b':
        case 'B':
            color="pink";
            break;
        case 'c':
        case 'C':
            color="orange";
            break;
        case 'd':
        case 'D':
            color="yellow";
            break;
        case 'e':
        case 'E':
            color="voilet";
            break;
        case 'f':
        case 'F':
            color="royal blue";
            break;
        case 'g':
        case 'G':
            color="sky blue";
            break;
        case 'h':
        case 'H':
            color="dark green";
            break;
        case 'i':
        case 'I':
            color="light green";
            break;
        case 'j':
        case 'J':
            color="black";
            break;
        case 'k':
        case 'K':
            color="grey";
            break;
        case 'l':
        case 'L':
            color="brown";
            break;
        case 'm':
        case 'M':
            color="red";
            break;
        case 'n':
        case 'N':
            color="white";
            break;
        case 'o':
        case 'O':
            color="mustard";
            break;
        case 'p':
        case 'P':
            color="skin";
            break;
        case 'q':
        case 'Q':
            color="crimson";
            break;
        case 'r':
        case 'R':
            color="aqua";
            break;
        case 's':
        case 'S':
            color="peach";
            break;
        case 't':
        case 'T':
            color="golden";
            break;
        case 'u':
        case 'U':
            color="silver";
            break;
        case 'v':
        case 'V':
            color="bronze";
            break;
        case 'w':
        case 'W':
            color="lime";
            break;
        case 'x':
        case 'X':
            color="cyan";
            break;
        case 'y':
        case 'Y':
            color="navy blue";
            break;
        case 'z':
        case 'Z':
            color="teal";
            break;
        default:
            cout << "Invalid input!" << endl;
        }
    }while(!(choice_2>='a' && choice_2<='z'));
	string animal;
    char choice_3;
    do{
    cout<<"\nChoose an animal "<<endl;
	cout<<" 'a' for elephant"<<endl;
	cout<<" 'b' for lion"<<endl;
	cout<<" 'c' for dolphin"<<endl;
	cout<<" 'd' for dove"<<endl;
	cout<<" 'e' for buttrefly"<<endl;
	cout<<" 'f' for wolf"<<endl;
	cout<<" 'g' for horse"<<endl;
	cout<<" 'h' for penguin"<<endl;
	cout<<" 'i' for Hummingbird"<<endl;
	cin>>choice_3;
	switch(choice_3){
        case 'a':
        case 'A':
            animal="elephant";
            break;
        case 'b':
        case 'B':
            animal="lion";
            break;
        case 'c':
        case 'C':
            animal="dolphin";
            break;
        case 'd':
        case 'D':
            animal="dove";
            break;
        case 'e':
        case 'E':
            animal="buttrefly";
            break;
        case 'f':
        case 'F':
            animal="wolf";
            break;
        case 'g':
        case 'G':
            animal="horse";
            break;
        case 'h':
        case 'H':
            animal="penguin";
            break;
        case 'i':
        case 'I':
            animal="Hummingbird";
            break;
        default: 
            cout<<"Invalid input!"<<endl;
    }
	}while(!(choice_3>='a' && choice_3<='i'));
	//predicting their personality 
	if(weather=="Winter"){
		if(animal=="elephant"){
			cout<<"\n"<<name<<"! Your personality is as majestic as the winter landscape, and you are as strong and resilient as an elephant.";
		}
		else if(animal=="lion"){
			cout<<"\n"<<name<<"! Your personality roars with warmth and strength, much like a lion in the winter wilderness.";
		}
		else if(animal=="dolphin"){
			cout<<"\n"<<name<<"! Your personality is as playful and free-spirited as a dolphin dancing through icy waters in winter.";
		}
		else if(animal=="dove"){
			cout<<"\n"<<name<<"! Your personality radiates peace and tranquility, much like a gentle dove amidst a snowy winter scene.";
		}
		else if(animal=="buttrefly"){
			cout<<"\n"<<name<<"! Your personality is as vibrant and transformative as a butterfly emerging from its winter cocoon.";
		}
		else if(animal=="wolf"){
			cout<<"\n"<<name<<"! Your personality is as fierce and loyal as a wolf leading its pack through the snowy depths of winter.";
		}
		else if(animal=="horse"){
			cout<<"\n"<<name<<"! Your personality gallops with grace and freedom, much like a horse running through a winter wonderland.";
		}
		else if(animal=="penguin"){
			cout<<"\n"<<name<<"! Your personality is as cool and collected as a penguin navigating the icy depths of winter.";
		}
		else{
			cout<<"\n"<<name<<"! Your personality is as vibrant and energetic as a hummingbird flitting through a frosty winter garden.";
		}
	}
	else if(weather=="Summer"){
		if(animal=="elephant"){
			cout<<"\n"<<name<<"! You're strong and majestic, like an elephant enjoying the summer sun.";
		}
		else if(animal=="lion"){
			cout<<"\n"<<name<<"! You're bold and brave, just like a lion basking in the summer heat.";
		}
		else if(animal=="dolphin"){
			cout<<"\n"<<name<<"! You're playful and carefree, like a dolphin frolicking in the summer waves.";
		}
		else if(animal=="dove"){
			cout<<"\n"<<name<<"! You bring peace and serenity, like a dove cooing in the summer breeze.";
		}
		else if(animal=="buttrefly"){
			cout<<"\n"<<name<<"! You're vibrant and joyful, like a butterfly fluttering in the summer air.";
		}
		else if(animal=="wolf"){
			cout<<"\n"<<name<<"! You're fierce and determined, like a wolf prowling through the summer forest.";
		}
		else if(animal=="horse"){
			cout<<"\n"<<name<<"! You're free-spirited and wild, like a horse running in the summer fields.";
		}
		else if(animal=="penguin"){
			cout<<"\n"<<name<<"! You're cool and collected, like a penguin chilling out in the summer sun.";
		}
		else{
			cout<<"\n"<<name<<"! You're energetic and lively, like a hummingbird buzzing around in the summer garden.";
		}
	}
	else if(weather=="Autumn"){
		if(animal=="elephant"){
			cout<<"\n"<<name<<"! You're steady and grounded, like an elephant strolling through the autumn leaves.";
		}
		else if(animal=="lion"){
			cout<<"\n"<<name<<"! You're confident and regal, like a lion surveying the autumn landscape.";
		}
		else if(animal=="dolphin"){
			cout<<"\n"<<name<<"! You're introspective and serene, like a dolphin swimming gracefully through autumn waters.";
		}
		else if(animal=="dove"){
			cout<<"\n"<<name<<"! You're gentle and compassionate, like a dove finding warmth in the autumn sunlight.";
		}
		else if(animal=="buttrefly"){
			cout<<"\n"<<name<<"! You're resilient and adaptable, like a butterfly gracefully navigating the autumn breeze.";
		}
		else if(animal=="wolf"){
			cout<<"\n"<<name<<"! You're mysterious and determined, like a wolf prowling through the autumn forest.";
		}
		else if(animal=="horse"){
			cout<<"\n"<<name<<"! You're adventurous and free-spirited, like a horse galloping through the autumn fields.";
		}
		else if(animal=="penguin"){
			cout<<"\n"<<name<<"! You're resourceful and adaptable, like a penguin preparing for the changing autumn weather.";
		}
		else{
			cout<<"\n"<<name<<"! You're energetic and adaptable, like a hummingbird gathering nectar from autumn flowers.";
		}
	}
	else if(weather=="Spring"){
		if(animal=="elephant"){
			cout<<"\n"<<name<<"! You're resilient and hopeful, like an elephant enjoying the fresh growth of spring.";
		}
		else if(animal=="lion"){
			cout<<"\n"<<name<<"! You're rejuvenated and vibrant, like a lion basking in the warmth of spring.";
		}
		else if(animal=="dolphin"){
			cout<<"\n"<<name<<"! You're playful and energetic, like a dolphin leaping through the springtime waves.";
		}
		else if(animal=="dove"){
			cout<<"\n"<<name<<"! You're peaceful and nurturing, like a dove cooing in the gentle spring breeze.";
		}
		else if(animal=="buttrefly"){
			cout<<"\n"<<name<<"! You're transformative and optimistic, like a butterfly emerging from its cocoon in the spring.";
		}
		else if(animal=="wolf"){
			cout<<"\n"<<name<<"! You're adventurous and curious, like a wolf exploring the awakening forest in spring.";
		}
		else if(animal=="horse"){
			cout<<"\n"<<name<<"! You're spirited and free, like a horse galloping through the blooming meadows of spring.";
		}
		else if(animal=="penguin"){
			cout<<"\n"<<name<<"! You're adaptable and resourceful, like a penguin enjoying the changing landscapes of spring.";
		}
		else{
			cout<<"\n"<<name<<"! You're lively and vibrant, like a hummingbird darting among the colorful blooms of spring.";
		}
	}
	else{
		cout<<"\n"<<name<<"! Your personality is like a tranquil lake, reflecting the beauty of every season and embracing the unique characteristics of all animals with serene acceptance.";
	}
	cout<<"\n\tHAVE A NICE DAY!  :)";
	}
	//the user don't want to play the game
	else{
		cout<<"\n---AS YOU WISH :) ---"<<endl;
		cout<<"HAVE A NICE DAY!!"<<endl;
	}
    return 0;
 }
