//Alphabet Adventure
#include<iostream>
using namespace std;
int main(){
	char letter;
	int stop;
	cout<<"WELCOME to Alphabet Adventure"<<endl;
	do{
		cout<<"Select a Letter from A to Z to play"<<endl;
		cin>>letter;
		switch(letter){
			case 'a':
			case 'A':
				cout<<"Name: Alice, Aaron, Audrey\n";
				cout<<"Place: Austin, Atlanta, Anchorage\n";
				cout<<"Animal: Antelope, Albatross, Alligator\n";
				cout<<"Thing: Apple, Anchor, Apron\n";
				break;
			case 'b':
			case 'B':
				cout<<"Name: Ben, Bella, Brittany\n";
				cout<<"Place: Boston, Berlin, Barcelona\n";
				cout<<"Animal: Bear, Baboon, Bison\n";
				cout<<"Thing: Book, Balloon, Bench\n";
				break;
			case 'c':
			case 'C':
				cout<<"Name: Chris, Caroline, Connor\n";
				cout<<"Place: Chicago, Cairo, Cape Town\n";
				cout<<"Animal: Cat, Camel, Cheetah\n";
				cout<<"Thing: Chair, Clock, Cup\n";
				break;
			case 'd':
			case 'D':
				cout<<"Name: Daniel, Dana, Derek\n";
				cout<<"Place: Dallas, Denver, Dublin\n";
				cout<<"Animal: Dog, Dolphin, Duck\n";
				cout<<"Thing: Desk, Drum, Door\n";
				break;
			case 'e':
			case 'E':
				cout<<"Name: Emma, Ethan, Evan\n";
				cout<<"Place: Edinburgh, El Paso, Edmonton\n";
				cout<<"Animal: Elephant, Eagle, Eel\n";
				cout<<"Thing: Envelope, Eraser, Engine\n";
				break;
			case 'f':
			case 'F':
				cout<<"Name: Frank, Fiona, Felix\n";
				cout<<"Place: Frankfurt, Florence, Fresno\n";
				cout<<"Animal: Fox, Flamingo, Frog\n";
				cout<<"Thing: Fan, Fork, Frame\n";
				break;
			case 'g':
			case 'G':
				cout<<"Name: George, Grace, Gavin\n";
				cout<<"Place: Geneva, Glasgow, Goa\n";
				cout<<"Animal: Giraffe, Goat, Goose\n";
				cout<<"Thing: Guitar, Glasses, Globe\n";
				break;
			case 'h':
			case 'H':
				cout<<"Name: Hannah, Harry, Henry\n";
				cout<<"Place: Houston, Helsinki, Havana\n";
				cout<<"Animal: Horse, Hamster, Hawk\n";
				cout<<"Thing: Hat, Hammer, Hose\n";
				break;
			case 'i':
			case 'I':
				cout<<"Name: Isaac, Isabella, Ian\n";
				cout<<"Place: Istanbul, Indianapolis, Irkutsk\n";
				cout<<"Animal: Iguana, Ibex, Ibis\n";
				cout<<"Thing: Ink, Ice, Iron\n";
				break;
			case 'j':
			case 'J':
				cout<<"Name: Jack, Julia, Joseph\n";
				cout<<"Place: Jakarta, Johannesburg, Jersey City\n";
				cout<<"Animal: Jaguar, Jellyfish, Jackal\n";
				cout<<"Thing: Jar, Jug, Jigsaw\n";
				break;
			case 'k':
			case 'K':
				cout<<"Name: Karen, Kevin, Kyle\n";
				cout<<"Place: Kansas City, Kyoto, Kabul\n";
				cout<<"Animal: Kangaroo, Koala, Kingfisher\n";
				cout<<"Thing: Key, Kite, Kettle\n";
			break;
			case 'l':
			case 'L':
				cout<<"Name: Lucy, Liam, Laura\n";
				cout<<"Place: Los Angeles, Lisbon, Lahore\n";
				cout<<"Animal: Lion, Llama, Leopard\n";
				cout<<"Thing: Lamp, Ladder, Laptop\n";
				break;
			case 'm':
			case 'M':
				cout<<"Name: Michael, Maria, Matthew\n";
				cout<<"Place: Madrid, Melbourne, Miami\n";
				cout<<"Animal: Monkey, Mouse, Moose\n";
				cout<<"Thing: Mug, Microphone, Mirror\n";
				break;
			case 'n':
			case 'N':
				cout<<"Name: Nancy, Noah, Nathan\n";
				cout<<"Place: New York, New Delhi, Nairobi\n";
				cout<<"Animal: Narwhal, Newt, Nightingale\n";
				cout<<"Thing: Necklace, Notebook, Nail\n";
				break;
			case 'o':
			case 'O':
				cout<<"Name: Oliver, Olivia, Oscar\n";
				cout<<"Place: Oslo, Ottawa, Orlando\n";
				cout<<"Animal: Octopus, Owl, Otter\n";
				cout<<"Thing: Orange, Oven, Oar\n";
				break;
			case 'p':
			case 'P':
				cout<<"Name: Paul, Patricia, Peter\n";
				cout<<"Place: Paris, Prague, Perth\n";
				cout<<"Animal: Penguin, Panda, Parrot\n";
				cout<<"Thing: Pillow, Piano, Phone\n";
				break;
			case 'q':
			case 'Q':
				cout<<"Name: Quinn, Quentin, Queenie\n";
				cout<<"Place: Quebec, Quincy, Qingdao\n";
				cout<<"Animal: Quokka, Quail, Quetzal\n";
				cout<<"Thing: Quilt, Quiver, Quadrant\n";
				break;
			case 'r':
			case 'R':
				cout<<"Name: Rachel, Ryan, Robert\n";
				cout<<"Place: Rome, Rio de Janeiro, Riyadh\n";
				cout<<"Animal: Rabbit, Rhino, Raccoon\n";
				cout<<"Thing: Ring, Rope, Rake\n";
				break;
			case 's':
			case 'S':
				cout<<"Name: Sarah, Steven, Simon\n";
				cout<<"Place: Seattle, Singapore, Sydney\n";
				cout<<"Animal: Snake, Swan, Squirrel\n";
				cout<<"Thing: Spoon, Sofa, Scissors\n";
				break;
			case 't':
			case 'T':
				cout<<"Name: Thomas, Tracy, Tiffany\n";
				cout<<"Place: Tokyo, Toronto, Turin\n";
				cout<<"Animal: Tiger, Tortoise, Toucan\n";
				cout<<"Thing: Table, Telephone, Torch\n";
				break;
			case 'u':
			case 'U':
				cout<<"Name: Uma, Ulysses, Ulric\n";
				cout<<"Place: Utrecht, Ulan Bator, Uppsala\n";
				cout<<"Animal: Urial, Umbrellabird, Uakari\n";
				cout<<"Thing: Ukulele, Umbrella, Uniform\n";
				break;	
			case 'v':
			case 'V':
				cout<<"Name: Victor, Vanessa, Vivian\n";
				cout<<"Place: Venice, Vienna, Vancouver\n";
				cout<<"Animal: Vulture, Vole, Vicuna\n";
				cout<<"Thing: Vase, Violin, Vacuum\n";
				break;
			case 'w':
			case 'W':
				cout<<"Name: Wendy, William, Wyatt\n";
				cout<<"Place: Washington, Warsaw, Wellington\n";
				cout<<"Animal: Wolf, Walrus, Wombat\n";
				cout<<"Thing: Watch, Wallet, Wheelbarrow\n";
				break;
			case 'x':
			case 'X':
				cout<<"Name: Xavier, Xena, Xander\n";
				cout<<"Place: Xi'an, Xalapa, Xuzhou\n";
				cout<<"Animal: X-ray Tetra, Xeme, Xenops\n";
				cout<<"Thing: Xylophone, X-ray, Xenon\n";
				break;
			case 'y':
			case 'Y':
				cout<<"Name: Yara, Yuri, Yvonne\n";
				cout<<"Place: York, Yangon, Yokohama\n";
				cout<<"Animal: Yak, Yellowhammer, Yabby\n";
				cout<<"Thing: Yarn, Yogurt, Yoke\n";
				break;
			case 'z':
			case 'Z':
				cout<<"Name: Zachary, Zoe, Zane\n";
				cout<<"Place: Zurich, Zagreb, Zanzibar\n";
				cout<<"Animal: Zebra, Zebu, Zorilla\n";
				cout<<"Thing: Zipper, Zucchini, Zeppelin\n";
				break;
			default:
				cout<<"Invalid letter\n";
				break;
			}
		cout<<"To continue exploring, enter 1"<<endl;
		cout<<"To EXIT, enter 0 "<<endl;
		cin>>stop;
	}while(stop==1);
	cout<<"have a nice day :)"<<endl;
	return 0;
}
