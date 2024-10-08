#include<iostream>                
using namespace std;
int main(){
	char alphabet;
	string first_name;
	char choice;
	cout<<"WELCOME!"<<endl;
	cout<<"kindly Enter your first name: "<<endl;
	cin>>first_name;
	cout<<"Hi "<<first_name<<endl;
do{
	cout<<"enter the letter you want to learn?"<<endl;
	cin>>alphabet;
	//all the alphabets are made using ASCII art representation
	switch(alphabet){
		case 'A':
		case 'a':
			cout<<"\t 'A' for Apple:"<<endl;		
			cout<<"     ,--./,-.   "<<endl;
    		cout<<"    / #      \\"<<endl;
    		cout<<"   |          |"<<endl;
    		cout<<"    \\        /"<<endl;
    		cout<<"     `._,._,'"<<endl;
    		cout<<"        `-'"<<endl;
    		break;
    	case 'B':
    	case 'b':
    		cout<<"\t 'B' for Bat:"<<endl;
        	cout<<"_________________               _________________"<<endl;
   			cout<<" ~-.              \  |\___/|  /              .-~"<<endl;
    		cout<<"     ~-.           \ / o o \ /           .-~"<<endl;
    		cout<<"        >           \\  W  //           <"<<endl;
    		cout<<"       /             /~---~\             \ "<<endl;
    		cout<<"      /_            |       |            _\ "<<endl;
    		cout<<"         ~-.        |       |        .-~"<<endl;
    		cout<<"            ;        \     /        i"<<endl;
    		cout<<"           /___      /\   /\      ___\ "<<endl;
    		cout<<"                ~-. /  \_/  \ .-~"<<endl;
    		cout<<"                   V         V"<<endl;
			break;
		case 'C':
		case 'c':
			cout<<"\t 'C' for Cat:"<<endl;
	   		cout<<"     /\_/\           ___"<<endl;
		    cout<<"    = o_o =_______    \ \  "<<endl;
	    	cout<<"     __^      __(  \.__) )"<<endl;
	    	cout<<"(@) <_____>__(_____)____/"<<endl;
			break;
		case 'D':
		case 'd':
			cout<<"\t 'D' for Dog:"<<endl;
			cout<<"    _    "<<endl;
			cout<<"   / \__"<<endl;
			cout<<"  (    @\___"<<endl;
			cout<<"  /         O"<<endl;
			cout<<" /   (_____/"<<endl;
			cout<<"/_____/ U"<<endl;
			break;
		case 'E':
		case 'e':
			cout<<"\t 'E' for Elephant:"<<endl;
			cout<< "     _.-- ,.--."<<endl;
    		cout<<"   .'   .'    /"<<endl;
    		cout<<"   | @       |'..--------._"<<endl;
    		cout<<"  /      \\._/              '."<<endl;
			cout<<" /  .-.-                     \\"<<endl;
    		cout<<"(  /    \\                     \\"<<endl;
    		cout<<" \\\\      '.                  | #"<<endl;
    		cout<<"  \\\\       \\   -.           /"<<endl;
			cout<<"   :\\       |    )._____.'   \\"<<endl;
    		cout<<"    \"       |   /  \\  |  \\    )"<<endl;
    		cout<<"             |   |./'  :__ \\.-'"<<endl;
    		cout<<"             '--'"<<endl;
			break;
		case 'F':
		case 'f':
			cout<<"\t 'F' for Fish:"<<endl;
			cout<<"                ,/'              ,**"<<endl;
			cout<<"             ,///             ,/=="<<endl;
			cout<<"          ,////'            ,/==="<<endl;
			cout<<"        ,/////            ,/===="<<endl;
			cout<<"      ,/////{           ,/<====="<<endl;
			cout<<"    ,////////\__       /<====="<<endl;
			cout<<"  ,/ '>>>>>>>>>>'-._  /<====="<<endl;
			cout<<" /    '>>>>>>>>>>>>>'V<======"<<endl;
			cout<<"/ (o)  ))>>>>>>>>>>>>><====="<<endl;
			cout<<"\_     ))>>>>>>>>>>>>><====="<<endl;
			cout<<" \    ))>>\\\{>>>>>>>>>><===="<<endl;
			cout<<"  '\ .>>>>>>\\\>>>>>,*'\<===='"<<endl;
			cout<<"    '\\\\\tao,'\--*'    \<===="<<endl;
			cout<<"      '\\\\\{            \<===="<<endl;
			cout<<"        '\\\\             \<===="<<endl;
			cout<<"          '\\\			  '\===="<<endl;
			cout<<"            '\\			   '\==="<<endl;
			cout<<"              '\				 '-=='"<<endl;
			cout<<"  								'##"<<endl;
			break;
		case 'G':
		case 'g':
			cout<<"\t 'G' for Giraffe:"<<endl;
			cout<<"    _  o o"<<endl;
			cout<<"    \ \|/ _,"<<endl;
			cout<<"  __.'   /'_/"<<endl;
			cout<<"/'   u    ;#"<<endl;
			cout<<"'c-_..__,/ ##"<<endl;
			cout<<"       );:'##"<<endl;
			cout<<"       |   ##"<<endl;
			cout<<"		  |:.:##"<<endl;
			cout<<"		  |.  ##"<<endl;
			cout<<"		  |:,'##"<<endl;
			cout<<"		  |,::##"<<endl;
			cout<<"		 /  ' ##"<<endl;
			cout<<"		|.:'   ##"<<endl;
			cout<<"		;::'  .:# "<<endl;
			cout<<"	   / '      '#"<<endl;
			cout<<"	  |   .:  '::.'-..___"<<endl;
			cout<<"   |:.          .::'  '^,"<<endl;
			cout<<"	  |:::     ':.       .:,\ "<<endl;
			cout<<"    \  ',     .::'  .:: | |"<<endl;
			cout<<"     | '.|.:|   '     ' /\#"<<endl;
			cout<<"		|   \ '|._.::   |  |##"<<endl;
			cout<<"		|  /|.:|  '**; '|.:|##"<<endl;
			cout<<"	   /   ||  /     |  ;  '|"<<endl;
			cout<<"	   \   // |		 \:'\   |"<<endl;
			cout<<"		|  /\ /		  ; ;|  \ "<<endl;
			cout<<"		|  || |		  | ||  /"<<endl;
			cout<<"		|  || |		  | ||  |"<<endl;
			cout<<"	  _/  j | |		 _/ J|  |"<<endl;
			cout<<"  (/__/_/  J		(/_/_/  j"<<endl;
			cout<<"		 (/__/		   (/__/"<<endl;
			break;
		case 'H':
		case 'h':
			cout<<"\t 'H' for Hen:"<<endl;
			cout<<"          ,~."<<endl;
			cout<<"       ,-'__ `-,"<<endl;
			cout<<"       {,-' `. }               ____"<<endl;            
			cout<<"    ,( a )   `-.__         .  |    |`-."<<endl;
			cout<<"   <=.) (         `-.__ .   |  _- |  |"<<endl;
			cout<<"     (   )                      -  |__/"<<endl;
			cout<<"      `-'\   ,                    |"<<endl;
			cout<<"        |  \        `~.         /"<<endl;
			cout<<"         \   `._        \      /"<<endl;
			cout<<"          \     `._____,'    ,'"<<endl;
			cout<<"           `-.            ,'"<<endl;
			cout<<"              `-._    _,'"<<endl;
			cout<<"                  77jj'"<<endl;
			cout<<"                 //_||"<<endl;
			break;
		case 'I':
		case 'i':
			cout<<"\t 'I' for Ice-cream:"<<endl;
			cout<<"			    __              "<<endl;
			cout<<"         __ (__) __          "<<endl;
			cout<<"       _(  )(  )(  )_        "<<endl;
			cout<<"    .-(_)(__)(__)(___)-.     "<<endl;
			cout<<"   (  (  )(  )(  )(  )  )    "<<endl;
			cout<<"  (______________________)   "<<endl;
			cout<<"        \\         /         "<<endl;
			cout<<"         \\       /          "<<endl;
			cout<<"          \\     /           "<<endl;
			cout<<"           \\   /            "<<endl;
			cout<<"            \\ /             "<<endl;
			cout<<"             \V              "<<endl;
			break;
		case 'J':
		case 'j':
			cout<<"\t 'J' for Jar:"<<endl;
			cout<<"	   ________"<<endl;
			cout<<"   |________|"<<endl;
			cout<<"  /          \ "<<endl;
			cout<<" /            \ "<<endl;
			cout<<"/              \ "<<endl;
			cout<<"|    ______    |"<<endl;
			cout<<"|   /      \   |"<<endl;
			cout<<"|  |        |  |"<<endl;
			cout<<"|  |        |  |"<<endl;
			cout<<"|  |________|  |"<<endl;
			cout<<"|              |"<<endl;
			cout<<"\______________/"<<endl;
			break;
		case 'K':
		case 'k': 
			cout<<"\t 'K' for kite:"<<endl;
			cout<<"      /\\       "<<endl;
    		cout<<"     /  \\      "<<endl;
    		cout<<"    /    \\     "<<endl;
    		cout<<"   /______\\    "<<endl;
    		cout<<"   \\     /     "<<endl;
    		cout<<"    \\   /      "<<endl;
    		cout<<"     \\ /       "<<endl;
    		cout<<"      \/        "<<endl;
    		cout<<"     /__\       "<<endl;
    		cout<<"       \        "<<endl;
    		cout<<"        \        "<<endl;
    		cout<<"        /       "<<endl;
    		cout<<"       /       "<<endl;
    		break;
    	case 'L':
    	case 'l':
    		cout<<"\t 'L' for lollipop:"<<endl;
			cout<<"                    ,."<<endl;
			cout<<"                  ,_> `.   ,';"<<endl;
			cout<<"              ,-`'      `'   '`'._"<<endl;
			cout<<"           ,,-) ---._   |   .---''`-),."<<endl;
			cout<<"         ,'      `.  \  ;  /   _,'     `,"<<endl;
			cout<<"      ,--' ____       \   '  ,'    ___  `-,"<<endl;
			cout<<"     _>   /--. `-.              .-'.--\   \__"<<endl;
			cout<<"    '-,  (    `.  `.,`~ \~'-. ,' ,'    )    _\ "<<endl;
			cout<<"    _<    \     \ ,'  ') )   `. /     /    <,."<<endl;
			cout<<" ,-'   _,  \    ,'    ( /      `.    /        `-,"<<endl;
			cout<<" `-.,-'     `.,'       `         `.,'  `\    ,-'"<<endl;
			cout<<"  ,'       _  /   ,,,      ,,,     \     `-. `-._"<<endl;
			cout<<" /-,     ,'  ;   ' _ \    / _ `     ; `.     `(`-\ "<<endl;
			cout<<"  /-,        ;    (o)      (o)      ;          `'`,"<<endl;
			cout<<",~-'  ,-'    \     '        `      /     \      <_"<<endl;
			cout<<"/-. ,'        \                   /       \     ,-'"<<endl;
			cout<<"  '`,     ,'   `-/             \-' `.      `-. <"<<endl;
			cout<<"   /_    /      /   (_     _)   \    \          `,"<<endl;
			cout<<"     `-._;  ,' |  .::.`-.-' :..  |       `-.    _\ "<<endl;
			cout<<"       _/       \  `:: ,^. :.:' / `.        \,-'"<<endl;
			cout<<"     '`.   ,-'  /`-..-'-.-`-..-'\            `-."<<endl;
			cout<<"       >_ /     ;  (\/( ' )\/)  ;     `-.    _<"<<endl;
			cout<<"       ,-'      `.  \`-^^^-'/  ,'        \ _<"<<endl;
			cout<<"        `-,  ,'   `. `"""""" ,'   `-.   <`"<<endl;
			cout<<"          ')        `._.,,_.'        \ ,-'"<<endl;
			cout<<"           '._        '`'`'   \       <"<<endl;
			cout<<"              >   ,'       ,   `-.   <`'"<<endl;
			cout<<"               `,/          \      ,-`"<<endl;
			cout<<"                `,   ,' |   /     /"<<endl;
			cout<<"                 '; /   ;        ("<<endl;
			cout<<"                  _)|   `       ("<<endl;
			cout<<"                  `')         .-'"<<endl;
			cout<<"                    <_   \   / "<<endl;
			cout<<"                      \   /\("<<endl;
			cout<<"                       `;/  `"<<endl;
			break;
    	case 'M':
    	case 'm':
    		cout<<"\t 'M' for monkey:"<<endl;
			cout<<"    		   __,__"<<endl;
			cout<<"   .--.  .-"     "-.  .--."<<endl;
			cout<<"  / .. \/  .-. .-.  \/ .. \ "<<endl;
			cout<<" | |  '|  /   Y   \  |'  | |"<<endl;
			cout<<" | \   \  \ 0 | 0 /  /   / |"<<endl;
			cout<<"  \ '- ,\.-"     "-./, -' /"<<endl;
			cout<<"   `'-' /_   ^ ^   _\ '-'`"<<endl;
			cout<<"       |  \._   _./  |"<<endl;
			cout<<"       \   \ `~` /   /"<<endl;
			cout<<"        '._ '-=-' _.'"<<endl;
			cout<<"           '~---~'"<<endl;
			break;
		case 'N':
		case 'n':
    		cout<<"\t 'N' for needle & thread:"<<endl;
    		cout<<"             \ "<<endl;
    		cout<<"              \ "<<endl;
    		cout<<"  ___          \ "<<endl;
    		cout<<":` o `:         \ "<<endl;
    		cout<<"|`---`|          \ "<<endl;
    		cout<<"|MmmmM|  .--.    ()"<<endl;
    		cout<<"|MMMMM| /    \   /\ "<<endl;
    		cout<<"|mMMMm|/      `.'  '.__. "<<endl;
    		cout<<" `---` "<<endl;
			break;
		case 'O':
		case 'o':
    		cout<<"\t 'O' for owl:"<<endl;
			cout<<"  __________"<<endl;
			cout<<" / ___  ___ \ "<<endl;
			cout<<"/ / @ \/ @ \ \ "<<endl;
			cout<<"\ \___/\___/ /\ "<<endl;
			cout<<" \____\/____/||"<<endl;
			cout<<" /     /\\\\\//"<<endl;
			cout<<"|     |\\\\\\"<<endl;
			cout<<" \      \\\\\\"<<endl;
			cout<<"   \______/\\\\"<<endl;
			cout<<"    _||_||_"<<endl;
			break;
		case 'P':
		case 'p':
    		cout<<"\t 'P' for panda:"<<endl;
			cout<<"                              _,add8ba,"<<endl;
			cout<<"                             ,d888888888b,"<<endl;
			cout<<"                            d8888888888888b                        _,ad8ba,_"<<endl;
			cout<<"                           d888888888888888)                     ,d888888888b,"<<endl;
			cout<<"                           I8888888888888888 _________          ,8888888888888b"<<endl;
			cout<<"                 __________`Y88888888888888P""""""""""baaa,__ ,888888888888888,"<<endl;
			cout<<"             ,adP""""""""""9888888888P""^                 ^""Y8888888888888888I"<<endl;
			cout<<"          ,a8 ^           ,d888P''888P^                           ^'Y8888888888P'"<<endl;
			cout<<"        ,a8^            ,d8888'                                     ^Y8888888P'"<<endl;
			cout<<"       a88'           ,d8888P'                                        I88P'^"<<endl;
			cout<<"     ,d88'           d88888P'                                          'b,"<<endl;
			cout<<"    ,d88'           d888888'                                            `b,"<<endl;
			cout<<"   ,d88'           d888888I                                              `b,"<<endl;
			cout<<"   d88I           ,8888888'            ___                                `b,"<<endl;
			cout<<"  ,888'           d8888888          ,d88888b,              ____            `b,"<<endl;
			cout<<"  d888           ,8888888I         d88888888b,           ,d8888b,           `b"<<endl;
			cout<<" ,8888           I8888888I        d8888888888I          ,88888888b           8,"<<endl;
			cout<<" I8888           88888888b       d88888888888'          8888888888b          8I"<<endl;
			cout<<" d8886           888888888       Y888888888P'           Y8888888888,        ,8b"<<endl;
			cout<<" 88888b          I88888888b      `Y8888888^             `Y888888888I        d88,"<<endl;
			cout<<" Y88888b         `888888888b,      `""""^                `Y8888888P'       d888I"<<endl;
			cout<<" `888888b         88888888888b,                           `Y8888P^        d88888"<<endl;
			cout<<"  Y888888b       ,8888888888888ba,_          _______        `""^        ,d888888"<<endl;
			cout<<"  I8888888b,    ,888888888888888888ba,_     d88888888b               ,ad8888888I"<<endl;
			cout<<"  `888888888b,  I8888888888888888888888b,    ^'Y888P'^      ____.,ad88888888888I"<<endl;
			cout<<"   88888888888b,`888888888888888888888888b,     ""      ad888888888888888888888'"<<endl;
			cout<<"   8888888888888698888888888888888888888888b_,ad88ba,_,d88888888888888888888888"<<endl;
			cout<<"   88888888888888888888888888888888888888888b,`""""^ d8888888888888888888888888I"<<endl;
			cout<<"   8888888888888888888888888888888888888888888baaad888888888888888888888888888'"<<endl;
			cout<<"   Y8888888888888888888888888888888888888888888888888888888888888888888888888P"<<endl;
			cout<<"   I888888888888888888888888888888888888888888888P^  ^Y8888888888888888888888'"<<endl;
			cout<<"   `Y88888888888888888P88888888888888888888888888'     ^88888888888888888888I"<<endl;
			cout<<"    `Y8888888888888888 `8888888888888888888888888       8888888888888888888P'"<<endl;
			cout<<"     `Y888888888888888  `888888888888888888888888,     ,888888888888888888P'	"<<endl;
			cout<<"      `Y88888888888888b  `88888888888888888888888I     I888888888888888888'"<<endl;
			cout<<"        'Y8888888888888b  `8888888888888888888888I     I88888888888888888'"<<endl;
			cout<<"          'Y88888888888P   `888888888888888888888b     d8888888888888888'"<<endl;
			cout<<"             ^""""""""^     `Y88888888888888888888,    888888888888888P'"<<endl;
			cout<<"                              '8888888888888888888b,   Y888888888888P^"<<endl;
			cout<<"                               `Y888888888888888888b   `Y8888888P'^"<<endl;
			cout<<"                                 'Y8888888888888888P     `""""^"<<endl;
			cout<<"                                   `'YY88888888888P'"<<endl;
			break;
		case 'Q':
		case 'q':
    		cout<<"\t 'Q' for queen:"<<endl;
     		cout<<"            ___"<<endl;
    		cout<<"        __  \o/  __"<<endl;
    		cout<<"     __ \*) |*| (*/ __"<<endl;
    		cout<<"  __ \*) \*\|O|/*/ (*/ __ "<<endl;
    		cout<<"  \*)_\*\_\*|*|*/_/*/_(*/ "<<endl;
    		cout<<"   \-o-=-o-=-O-=-o-=-o-/ "<<endl;
    		cout<<"    \_________________/ "<<endl;
			break;
		case 'R':
		case 'r':
    		cout<<"\t 'R' for rabbit:"<<endl;
			cout<<"             ,\ "<<endl;
			cout<<"             \\\,_"<<endl;
			cout<<"              \` ,\ "<<endl;
			cout<<"         __,.-''=__) "<<endl;
			cout<<"       .'        ) "<<endl;
			cout<<"    ,_/   ,    \/\_"<<endl;
			cout<<"    \_|    )_-\ \_-`"<<endl;
			cout<<"       `-----` `--`"<<endl;
			break;
		case 'S':
		case 's':
    		cout<<"\t 'S' for squirrel:"<<endl;
			cout<<"     .     ."<<endl;
			cout<<"     (>\---/<)"<<endl;
			cout<<"     ,'     `."<<endl;
			cout<<"    /  q   p  \ "<<endl;
			cout<<"   (  >(_Y_)<  )"<<endl;
			cout<<"    >-' `-' `-<-."<<endl;
			cout<<"   /  _.== ,=.,- \ "<<endl;
			cout<<"  /,    )`  '(    )"<<endl;
			cout<<" ; `._.'      `--<"<<endl;
			cout<<":     \        |  )"<<endl;
			cout<<"\      )       ;_/  "<<endl;
			cout<<" `._ _/_  ___.'-\\\ "<<endl;
			cout<<"    `--\\\ "<<endl;
    		break;
		case 'T':
		case 't':
    		cout<<"\t 'T' for tiger:"<<endl;
			cout<<" ,\/~~~\_                            _/~~~~\ "<<endl;
			cout<<" |  ---, `\_    ___,-------~~\__  /~' ,,''  |"<<endl;
			cout<<" | `~`, ',,\`-~~--_____    ---  - /, ,--/ '/'"<<endl;
			cout<<"  `\_|\ _\`    ______,---~~~\  ,_   '\_/' /'"<<endl;
			cout<<"    \,_|   , '~,/'~   /~\ ,_  `\_\ \_  \_\'"<<endl;
			cout<<"    ,/   /' ,/' _,-'~~  `\  ~~\_ ,_  `\  `\ "<<endl;
			cout<<"  /@@ _/  /' ./',-                 \       `@,"<<endl;
			cout<<"  @@ '   |  ___/  /'  /  \  \ '\__ _`~|, `, @@"<<endl;
			cout<<"/@@ /  | | ',___  |  |    `  | ,,---,  |  | `@@,"<<endl;
			cout<<"@@@ \  | | \ \O_`\ |        / / O_/' | \  \  @@@"<<endl;
			cout<<"@@@ |  | `| '   ~ / ,          ~     /  |    @@@"<<endl;
			cout<<"`@@ |   \ `\     ` |         | |  _/'  /'  | @@'"<<endl;
			cout<<" @@ |    ~\ /--'~  |       , |  \__   |    | |@@"<<endl;
			cout<<" @@, \     | ,,|   |       ,,|   | `\     /',@@"<<endl;
			cout<<" `@@, ~\   \ '     |       / /    `' '   / ,@@"<<endl;
			cout<<"  @@@,    \    ~~\ `\/~---'~/' _ /'~~~~~~~~--,_"<<endl;
			cout<<"   `@@@_,---::::::=  `-,| ,~  _=:::::''''''    `"<<endl;
			cout<<"   ,/~~_---'_,-___     _-__  ' -~~~\_```---"<<endl;
			cout<<"     ~`   ~~_/'// _,--~\_/ '~--, |\_"<<endl;
			cout<<"          /' /'| `@@@@@,,,,,@@@@  | \ "<<endl;
			cout<<"               `     `@@@@@@'"<<endl;
			break;
		case 'U':
		case 'u':
    		cout<<"\t 'U' for umbrella:"<<endl;
			cout<<"               ___()___"<<endl;
			cout<<"           _.-'' ,-'`-. ``-._"<<endl;
			cout<<"        ,-'    ,'      `.    `-."<<endl;
			cout<<"      ,'     ,'          `.     `."<<endl;
			cout<<"     /      /              \      \ "<<endl;
			cout<<"    /_     /                \     _\ "<<endl;
			cout<<"      ``-./_..---'''|``---.._\,-''"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                    |"<<endl;
			cout<<"                 ,  |"<<endl;
			cout<<"                 `..'"<<endl;
			break;
		case 'V':
		case 'v':
    		cout<<"\t 'V' for voilin:"<<endl;
    		cout<<"   					 {}"<<endl;
    		cout<<"                     oIIo"<<endl;
    		cout<<"                     oIIo"<<endl;
    		cout<<"                      ||"<<endl;
    		cout<<"                      ||       I."<<endl;
    		cout<<"                      ||       |:"<<endl;
    		cout<<"                     _||_      |:"<<endl;
    		cout<<"                   .' || `.    |:"<<endl;
    		cout<<"                  /   ||   \   |:"<<endl;
    		cout<<"                 |    ::    |  |:"<<endl;
    		cout<<"                 )_   ::   _(  |:"<<endl;
    		cout<<"                  _)( :: )(_   |:"<<endl;
    		cout<<"                 ) ._)::(_. (  |:"<<endl;
    		cout<<"                /     II     \ |:"<<endl;
    		cout<<"                |  .-.||     | |:"<<endl;
    		cout<<"                 \(___)(    /  |:"<<endl;
    		cout<<"                  `.__\/__.'   I'"<<endl;
    		break;
		case 'W':
		case 'w':
    		cout<<"\t 'W' for wolf:"<<endl;
    		cout<<"                            .d$$b"<<endl;
    		cout<<"                          .' TO$;\ "<<endl;
    		cout<<"                         /  : TP._;"<<endl;
    		cout<<"                        / _.;  :Tb|"<<endl;
    		cout<<"                       /   /   ;j$j"<<endl;
    		cout<<"                   _.-'       d$$$$ "<<endl;
    		cout<<"                 .' ..       d$$$$;"<<endl;
    		cout<<"                /  /P'      d$$$$P. |\ "<<endl;
    		cout<<"               /   '      .d$$$P' |\^'l" <<endl;
    		cout<<"             .'           `T$P^""""  :"<<endl;
    		cout<<"         ._.'      _.'                ;"<<endl;
    		cout<<"      `-.-''.-'-' ._.       _.-'    .-' "<<endl;
    		cout<<"    `.-'' _____  ._              .-' "<<endl;
    		cout<<"   -(.g$$$$$$$b.              .'"<<endl;
    		cout<<"     ""^^T$$$P^)            .(:"<<endl;
    		cout<<"       _/  -'  /.'         /:/;"<<endl;
    		cout<<"    ._.'-'`-'  ')/         /;/;"<<endl;
    		cout<<" `-.-''..--"   " /         /  ; "<<endl;
    		cout<<".-'  ..--'        -          :"<<endl;
    		cout<<"..--""--.-         (\      .-(\ "<<endl;
    		cout<<"  ..--""              `-\(\/;`"<<endl;
    		cout<<"    _.                      :"<<endl;
    		cout<<"                            ;`-"<<endl;
    		cout<<"                           :\ "<<endl;
    		cout<<"                           ;"<<endl;	
			break;
		case 'X':
		case 'x':
    		cout<<"\t 'X' for wolf:"<<endl;
    		cout<<"   _"<<endl;
    		cout<<"  | |  _                 ___"<<endl;
    		cout<<"__| |_| |  _           //   \\ "<<endl;
    		cout<<"__|.|_| |_| |  _      ||    ||"<<endl;
    		cout<<"  | | |.|-| |-| |      \\___//"<<endl;
    		cout<<"  | | | | |.|-| |        //"<<endl;
    		cout<<"  | | | | |.| |:|       //"<<endl;
    		cout<<"__| |_|.|-| |-|_|      //"<<endl;
    		cout<<"__|.|_| |-|_|         //"<<endl;
    		cout<<"  | | |_|            -"<<endl;
    		cout<<"  |_|"<<endl;
    		break;
		case 'Y':
		case 'y':
    		cout<<"\t 'Y' for yak:"<<endl;
    		cout<<"             _.-````'-,_"<<endl;
    		cout<<"         ,-'`           `'-.,_"<<endl;
    		cout<<" /)     (\                   '``-."<<endl;
    		cout<<"( ( .,-') )                      ``"<<endl;
    		cout<<" \ '   (_/                        !!"<<endl;
    		cout<<"  |       /)           '          !!!"<<endl;
    		cout<<"  `\    ^'            '     !    !!!!"<<endl;
    		cout<<"    !      _/! , !   !  ! !  !   !!!"<<endl;
    		cout<<"     \Y,   |!!!  !  ! !!  !! !!!!!!!"<<endl;
    		cout<<"       `!!! !!!! !!  )!!!!!!!!!!!!!"<<endl;
    		cout<<"        !!  ! ! \( \(  !!!|/!  |/!"<<endl;
    		cout<<"     @@@@@@@@    /_(/_(    /_(  /_(   "<<endl;
			break;
		case 'Z':
		case 'z':
    		cout<<"\t 'Z' for zebra:"<<endl;
    		cout<<"    \\/),"<<endl;
    		cout<<"   ,'.' /,"<<endl;
    		cout<<"  (_)- / /,"<<endl;
    		cout<<"     /\_/ |__..--,  *"<<endl;
    		cout<<"    (\___/\ \ \ / ).'"<<endl;
    		cout<<"     \____/ / (_ //"<<endl;
    		cout<<"      \\_ ,'--'\_("<<endl;
    		cout<<"      )_)_/ )_/ )_)"<<endl;
    		cout<<"     (_(_.'(_.'(_.'"<<endl;
		break;
		default:
			cout<<"Due to some reason program is not working please try again!"<<endl;
			break;	
	}		   
	cout<<"Wanna learn another letter? (y'yes' & n'no')"<<endl;
	cin>>choice;
	while(choice!='y'&&choice!='Y'&&choice!='n'&&choice!='N'){
		cout<<"Incorrect choice!  try again: "<<endl;
		cin>>choice;
	}
}while(choice=='y' || choice=='Y');
	cout<<"\n\nHAVE A NICE DAY "<<first_name<<"!   :)    "<<endl;
	return 0;
}
