//book recommender
#include<iostream>
using namespace std;
int main(){
    int genre;
    char book;
    char summary;
    char loop;
    cout<<"Which genre would you like to read today?"<<endl;
    cout<<"1. Science Fiction:"<<endl;
    cout<<"2. Fantasy:"<<endl;
    cout<<"3. Mystery/Thriller:"<<endl;
    cout<<"4. Horror:"<<endl;
    cout<<"5. Non-fiction:"<<endl;
    cout<<"6. Dystopian:"<<endl;
    cout<<"7. Young Adult:"<<endl;
    cout<<"8. Graphic Novels/Comics:"<<endl;
    cout<<"9. Poetry:"<<endl;
    cout<<"10. Cookbooks:"<<endl;
    cout<<"11. Self-help/Personal Development: "<<endl;
    cout<<"12. Biography/Autobiography: "<<endl;
    cout<<"13. Classic Literature:"<<endl;
    cin>>genre;
    while(genre<1 || genre>14){
        cout<<"This genre dosn't exixt!"<<endl;
		cout<<"select one from the above choices: "<<endl;
	cin>>genre;
	}
	switch(genre){
		// science fiction
	case 1:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Dune' by Frank Herbert"<<endl;
			cout<<"b. 'The Hitchhiker's Guide to the Galaxy' by Douglas Adams"<<endl;
			cout<<"c. '1984' by George Orwell"<<endl;
			cin>>book;
		while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
		}
	}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
	cout<<"\nSeems like you have a good taste!"<<endl;
	cout<<"wanna know more about this book (y/n) ?";
	cin>>summary;
	if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'Dune' by Frank Herbert: "<<endl;
		cout<<"\tIn a distant future where noble families control planets, young Paul Atreides "<<endl;
		cout<<"becomes embroiled in political intrigue and battles over the desert "<<endl;
		cout<<"planet Arrakis,the only source of a valuable spice."<<endl;
	}
	else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'1984' by George Orwell: "<<endl;
		cout<<"\tSet in a totalitarian society, it follows Winston Smith as he rebels against the "<<endl;
		cout<<"oppressive regime led by Big Brother, exploring themes of "<<endl;
		cout<<"surveillance, propaganda, and resistance."<<endl;
	}
	else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'The Hitchhiker's Guide to the Galaxy' by Douglas Adams: "<<endl;
		cout<<"\tA humorous science fiction series following the misadventures of Arthur Dent,"<<endl;
		cout<<"who is rescued by an alien friend seconds before Earth is destroyed to make"<<endl;
		cout<<"way for a hyperspace bypass, and his journey through the galaxy."<<endl;
	}
	cout<<"\nwanna check about another book(y/n)? "<<endl;
	cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// fantacy
	case 2:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'The Lord of the Rings' by J.R.R. Tolkien"<<endl;
			cout<<"b. 'Harry Potter and the Sorcerer's Stone' by J.K.Rowling"<<endl;
			cout<<"c. 'A Song of Ice and Fire' by George R.R. Martin"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
			cout<<"'The Lord of the Rings' by J.R.R. Tolkien: "<<endl;
			cout<<"\t Frodo Baggins and his companions embark on a perilous journey "<<endl;
			cout<<"\t to destroy the One Ring and defeat the Dark Lord Sauron "<<endl;
			cout<<"\t in this epic tale of adventure and heroism."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
			cout<<"'Harry Potter and the Sorcerer's Stone' by J.K. Rowling: "<<endl;
			cout<<"\t Harry Potter discovers he's a wizard and attends Hogwarts School "<<endl;
			cout<<"\t of Witchcraft and Wizardry, where he learns about his magical "<<endl;
			cout<<"\t heritage and confronts the dark wizard Voldemort."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
			cout<<"'A Song of Ice and Fire' series by George R.R. Martin: "<<endl;
			cout<<"\t Beginning with 'A Game of Thrones,' this epic fantasy series "<<endl;
			cout<<"\t follows the power struggles among noble families as they vie for control "<<endl;
			cout<<"\t of the Iron Throne in the fictional continent of Westeros."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
			break;
			// Mystery/Thriller
	case 3:
	do{
		do{
	 		cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'The Da Vinci Code' by Dan Brown"<<endl;
			cout<<"b. 'Gone Girl' by Gillian Flynn"<<endl;
			cout<<"c. 'The Girl with the Dragon Tattoo' by Stieg Larsson"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
		}
	}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
	cout<<"wanna know more about this book (y/n) ?";
	cin>>summary;
	if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'The Da Vinci Code' by Dan Brown: "<<endl;
		cout<<"\t Professor Robert Langdon and cryptologist Sophie Neveu "<<endl;
		cout<<"\t solve a murder and unravel a conspiracy involving"<<endl;
		cout<<"\t religious secrets hidden by Leonardo da Vinci."<<endl;
	}
	else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'Gone Girl' by Gillian Flynn: "<<endl;
		cout<<"\t When Amy Dunne disappears on her fifth wedding anniversary,"<<endl;
		cout<<"\t suspicion falls on her husband Nick, whose lies and secrets"<<endl;
		cout<<"\t are gradually exposed in this psychological thriller."<<endl;
	}
	else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'The Girl with the Dragon Tattoo' by Stieg Larsson: "<<endl;
		cout<<"\t Investigative journalist Mikael Blomkvist and hacker Lisbeth Salander"<<endl;
		cout<<"\t uncover dark secrets while investigating the disappearance"<<endl;
		cout<<"\t of a wealthy industrialist's niece."<<endl;
	}
	cout<<"\nWanna check about another book(y/n)? "<<endl;
	cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Horror
	case 4:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Dracula' by Bram Stokern"<<endl;
			cout<<"b. 'The Shining' by Stephen King"<<endl;
			cout<<"c. 'Frankenstein' by Mary Shelley"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'Dracula' by Bram Stokern: "<<endl;
		cout<<"\t Jonathan Harker and a group led by Professor Abraham "<<endl;
		cout<<"\t Van Helsing battle against the vampire Count Dracula "<<endl;
		cout<<"\t as he seeks new blood in England."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'The Shining' by Stephen King: "<<endl;
		cout<<"\t Jack Torrance becomes the winter caretaker at the Overlook"<<endl;
		cout<<"\t Hotel, where his psychic son Danny's supernatural"<<endl;
		cout<<"\t abilities lead to terrifying events."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'Frankenstein' by Mary Shelley: "<<endl;
		cout<<"\t Victor Frankenstein creates a grotesque creature through"<<endl;
		cout<<"\t scientific experimentation, leading to tragic"<<endl;
		cout<<"\t consequences as the creature seeks revenge."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Non-fiction
	case 5:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Sapiens: A Brief History of Humankind' by Yuval Noah Harari"<<endl;
			cout<<"b. 'The Immortal Life of Henrietta Lacks' by Rebecca Skloot"<<endl;
			cout<<"c. 'Educated' by Tara Westover"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'Sapiens: A Brief History of Humankind' by Yuval Noah Harari: "<<endl;
		cout<<"\t Explores the history of Homo sapiens from the emergence of"<<endl;
		cout<<"\t archaic human species to the present day, focusing on key"<<endl;
		cout<<"\t events and developments that shaped human societies."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'The Immortal Life of Henrietta Lacks' by Rebecca Skloot: "<<endl;
		cout<<"\t Tells the story of Henrietta Lacks, whose cells were taken "<<endl;
		cout<<"\t without her consent in 1951 and became the foundation"<<endl;
		cout<<"\t for countless medical breakthroughs."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'Educated' by Tara Westover: "<<endl;
		cout<<"\t Memoir of Tara Westover's journey from growing"<<endl;
		cout<<"\t up in a strict and isolated Idaho family to pursuing"<<endl;
		cout<<"\t higher education against all odds."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Dystopian
	case 6:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Brave New World' by Aldous Huxley"<<endl;
			cout<<"b. 'The Hunger Games' by Suzanne Collins"<<endl;
			cout<<"c. 'Fahrenheit 451' by Ray Bradbury"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'Brave New World' by Aldous Huxley: "<<endl;
		cout<<"\t Set in a futuristic society where citizens are genetically engineered"<<endl;
		cout<<"\t and conditioned for social stability, the story follows Bernard Marx's"<<endl;
		cout<<"\t disillusionment with the rigidly controlled world."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'The Hunger Games' by Suzanne Collins: "<<endl;
		cout<<"\t In a dystopian future, Katniss Everdeen volunteers to take her sister's place"<<endl;
		cout<<"\t in a televised fight to the death called the Hunger Games, becoming"<<endl;
		cout<<"\t a symbol of rebellion against the oppressive Capitol."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'Fahrenheit 451' by Ray Bradbury:"<<endl;
		cout<<"\t Fireman Guy Montag, whose job is to burn books, becomes "<<endl;
		cout<<"\t disillusioned with his society's censorship and conformity, "<<endl;
		cout<<"\t leading him to rebel against the oppressive regime."<<endl;
 		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Young Adult
	case 7:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'The Fault in Our Stars' by John Green"<<endl;
			cout<<"b. 'The Hate U Give' by Angie Thomas"<<endl;
			cout<<"c. 'To All the Boys I've Loved Before' by Jenny Han"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'The Fault in Our Stars' by John Green: "<<endl;
		cout<<"\t The love story of Hazel Grace Lancaster and Augustus Waters, "<<endl;
		cout<<"\t two teenagers with cancer who meet in a support group"<<endl;
		cout<<"\t and embark on a journey of love and selfdiscovery."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'The Hate U Give' by Angie Thomas: "<<endl;
		cout<<"\t Starr Carter witnesses the police shooting of her "<<endl;
		cout<<"\t childhood friend Khalil, prompting her to find her voice"<<endl;
		cout<<"\t and speak out against racial injustic"<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'To All the Boys I've Loved Before' by Jenny Han:"<<endl;
		cout<<"\t Lara Jean's secret love letters are accidentally sent out,"<<endl;
		cout<<"\t leading to romantic complications and personal growth as"<<endl;
		cout<<"\t she navigates relationships with the boys from her past."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Graphic Novels/Comics
	case 8:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Watchmen' by Alan Moore and Dave Gibbons"<<endl;
			cout<<"b. 'Maus' by Art Spiegelman"<<endl;	
			cout<<"c. 'Saga' by Brian K. Vaughan and Fiona Staples"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
  		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
		cout<<"'Watchmen' by Alan Moore and Dave Gibbons: "<<endl;
		cout<<"\t Set in an alternate history where superheroes are treated as outlaws,"<<endl;
		cout<<"\t the story follows a group of retired vigilantes investigating the murder"<<endl;
		cout<<"\t of one of their own, uncovering a conspiracy that threatens humanity."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
		cout<<"'Maus' by Art Spiegelman: "<<endl;
		cout<<"\t A graphic novel memoir depicting Art Spiegelman's interviews with his"<<endl;
		cout<<"\t fatherabout his experiences as a Polish Jew and Holocaust survivor,"<<endl;
		cout<<"\t with Jews portrayed as mice and Nazis as cats."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'Saga' by Brian K. Vaughan and Fiona Staples:"<<endl;
		cout<<"\t A space opera/fantasy comic series following a couple from "<<endl;
		cout<<"\t warring extraterrestrial races as they flee authorities and navigate"<<endl;
		cout<<"\t parenthood while trying to find a safe haven for their child."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
			// Poetry
	case 9:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Leaves of Grass' by Walt Whitman"<<endl;
			cout<<"b. 'The Waste Land' by T.S. Eliot"<<endl;
			cout<<"c. 'Milk and Honey' by Rupi Kaur"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
			cout<<"'Leaves of Grass' by Walt Whitman: "<<endl;
			cout<<"\t A collection of poems celebrating the diversity and unity"<<endl;
			cout<<"\t of America, expressing Whitman's vision of democracy"<<endl;
			cout<<"\t and his love for humanity and nature."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
			cout<<"'The Waste Land' by T.S. Eliot: "<<endl;
			cout<<"\t A modernist poem exploring themes of disillusionment"<<endl;
			cout<<"\t and despair in the aftermath of World War I, drawing"<<endl;
			cout<<"\t on a range of cultural and literary references."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
			cout<<"'Milk and Honey' by Rupi Kaur:"<<endl;
			cout<<"\t A collection of poetry and prose exploring themes of love"<<endl;
			cout<<"\t loss, trauma, healing, and femininity, accompanied"<<endl;
			cout<<"\t by minimalist illustrations."<<endl; 
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
		}while(loop=='y' || loop=='Y');
			break;
			// Cookbooks
	case 10:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'The Joy of Cooking' by Irma S. Rombauer "<<endl;
			cout<<"b. 'Mastering the Art of French Cooking' by Julia Child"<<endl;
			cout<<"c. 'Salt, Fat, Acid, Heat: Mastering the Elements of Good Cooking' by Samin Nosrat"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
			cout<<"'The Joy of Cooking' by Irma S. Rombauer: "<<endl;
			cout<<"\t A comprehensive cookbook containing a wide range of recipes,"<<endl;
			cout<<"\t cooking techniques, and tips, aiming to teach readers the"<<endl;
			cout<<"\t basics of cooking and inspire creativity in the kitchen."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
			cout<<"'Mastering the Art of French Cooking' by Julia Child: "<<endl;
			cout<<"\t A classic cookbook offering detailed instructions and "<<endl;
			cout<<"\t recipes for French cuisine, helping readers master "<<endl;
			cout<<"\t techniques and create authentic dishes."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
		cout<<"'Salt, Fat, Acid, Heat: Mastering the Elements of Good Cooking' by Samin Nosrat:"<<endl;
		cout<<"\t Explores the fundamental elements of good cooking"<<endl;
		cout<<"\t\t (salt, fat, acid, and heat)"<<endl;
		cout<<"\t and how they interact to create delicious dishes,"<<endl;
		cout<<"\t with recipes and practical advice for home cooks."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Self-help/Personal Development
	case 11:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'The Power of Now' by Eckhart Tolle"<<endl;
			cout<<"b. 'Atomic Habits' by James Clear"<<endl;
			cout<<"c. 'How to Win Friends and Influence People' by Dale Carnegie"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
			cout<<"'The Power of Now' by Eckhart Tolle: "<<endl;
			cout<<"\t Explores the concept of mindfulness and living in the"<<endl;
			cout<<"\t present moment as a path to spiritual enlightenment"<<endl;
			cout<<"\t and personal fulfillment."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
			cout<<"'Atomic Habits' by James Clear: "<<endl;
			cout<<"\t Offers practical strategies for building good habits,"<<endl;
			cout<<"\t breaking bad ones, and mastering the tiny behaviors that lead"<<endl;
			cout<<"\t to remarkableresults in personal and professional life."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
			cout<<"'How to Win Friends and Influence People' by Dale Carnegie:"<<endl;
			cout<<"\t A classic self-help book offering timeless advice on communication,"<<endl;
			cout<<"\t interpersonal skills, and building positive relationships, "<<endl;
			cout<<"\t based on fundamental principles of human behavior."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Biography/Autobiography
	case 12:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'The Autobiography of Malcolm X' by Malcolm X and Alex Haley "<<endl;
			cout<<"b. 'Becoming' by Michelle Obama"<<endl;
			cout<<"c. 'Steve Jobs' by Walter Isaacson"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
			cout<<"'The Autobiography of Malcolm X' by Malcolm X and Alex Haley: "<<endl;
			cout<<"\t The autobiography of civil rights leader Malcolm X, tracing his transformation"<<endl;
			cout<<"\t from a criminal to a prominent figure in the Nation of Islam and his"<<endl;
			cout<<"\t eventual embrace of Sunni Islam and advocacy for racial equality."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
			cout<<"'Becoming' by Michelle Obama: "<<endl;
			cout<<"\t Memoir of Michelle Obama's life, from her childhood in Chicago to her"<<endl;
			cout<<"\t jorney as First Lady of the United States, offering insight into her"<<endl;
			cout<<"\t personal and professional journey and the experiences that shaped her."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
			cout<<"'Steve Jobs' by Walter Isaacson:"<<endl;
			cout<<"\t Biography of Steve Jobs, co-founder of Apple Inc., exploring his life,"<<endl;
			cout<<"\t career, and impact on technology, business, and culture"<<endl;
			cout<<"\t based on interviews with Jobs and those close to him."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Classic Literature
	case 13:
	do{
		do{
			cout<<"RECOMMENDATIONS:"<<endl;
			cout<<"a. 'Pride and Prejudice' by Jane Austen"<<endl;
			cout<<"b. 'To Kill a Mockingbird' by Harper Lee"<<endl;
			cout<<"c. 'Moby-Dick' by Herman Melville"<<endl;
			cin>>book;
			while((book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C')){
			cout<<"\nERROR!"<<endl;
			cout<<"the book you choose doesn't exixt, try agin!"<<endl;
			cin>>book;
			}
		}while(book!='a' && book!='A' && book!='b' && book!='B'&& book!='c' && book!='C');
		cout<<"wanna know more about this book (y/n) ?";
		cin>>summary;
		if((summary=='y' || summary=='Y') && (book=='a' || book=='A')){
			cout<<"'Pride and Prejudice' by Jane Austen: "<<endl;
			cout<<"\t A romantic comedy of manners set in early 19th-century England, "<<endl;
			cout<<"\t it follows the spirited Elizabeth Bennet as she navigates issues of marriage,"<<endl;
			cout<<"\t morality, and social class, ultimately finding love with the proud Mr. Darcy."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='b' || book=='B')){
			cout<<"'To Kill a Mockingbird' by Harper Lee: "<<endl;
			cout<<"\t Set in the racially charged atmosphere of the American South during the 1930s,"<<endl;
			cout<<"\t it follows young Scout Finch as she learns about morality and empathy through"<<endl;
			cout<<"\t her father, lawyer Atticus Finch, defending a black man wrongly accused of raping a white woman."<<endl;
		}
		else if((summary=='y' || summary=='Y') && (book=='c' || book=='C')){
			cout<<"'Moby-Dick' by Herman Melville:"<<endl;
			cout<<"\t The story of Ishmael's journey aboard the whaling ship Pequod, led by the "<<endl;
			cout<<"\t obsessive Captain Ahab in pursuit of the elusive white whale, Moby Dick, "<<endl;
			cout<<"\t exploring themes of obsession, fate, and the human condition."<<endl;
		}
		cout<<"\nWanna check about another book(y/n)? "<<endl;
		cin>>loop;
	}while(loop=='y' || loop=='Y');
		break;
		// Default case
	default:
	cout<<"AN ERROR HAS OCURRED!"<<endl;
	cout<<"we are trying to resolve it please try again aftersometime!"<<endl;
	}
	//end of the program
	cout<<"\nSeems like you have a good taste!"<<endl;
	cout<<"------ HAVE A NICE DAY! :) ------"<<endl;
return 0;
}
