//PROJEKT PROGRAMIM
//TEMA: HANGMAN
//PUNUAN: RONALD LAMANI, KLEDJAN MEMA, SERXHIO BUNOCA
//SECILI KA KONTRIBUAR TEK ÇDO PJESE E PROGRAMIT DHE KA NDIHMUAR NJERI-TJETRIN
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<unistd.h>
using namespace std;

int main();

int loja(string fjala, char sh, string viza[], int gabime) //loja. Ka tipin e kthimit int, pasi kur humbim ose fitojme duhet te ktheje vleren 0
{
	int i = 40, g = 0, v = 0, f = 0;
	
	while(0 <= i) //viza hyrese
	{
		cout << "*";
		i--; 
	}
	
	int n = fjala.length(); //n = gjatesine e fjales
	
	
	char fj[n + 1]; //array char me gjatesi n + 1
	strcpy(fj, fjala.c_str()); //kthen fjalen ne char dhe e vednos tek fj[]
	
	for(i = 0; i < n; i++) // per vizat ku rrine shkronjat
	{
		if(fj[i] == sh) //vendos shkronje nese ka shkronje ne ate vend
		{
			viza[i] = sh; 
		} 
		else if(viza[i] != "a" && viza[i] != "b" && viza[i] != "c" && viza[i] != "d" && viza[i] != "e" && viza[i] != "f" && 
				viza[i] != "g" && viza[i] != "h" && viza[i] != "i" && viza[i] != "j" && viza[i] != "k" && viza[i] != "l" &&
				viza[i] != "m" && viza[i] != "n" && viza[i] != "o" && viza[i] != "p" && viza[i] != "q" && viza[i] != "r" &&
				viza[i] != "s" && viza[i] != "t" && viza[i] != "u" && viza[i] != "v" && viza[i] != "w" && viza[i] != "x" &&
				viza[i] != "y" && viza[i] != "z") //vendos vize nqs nuk ka shkronje ne ate pozicion
		{
			viza[i] = "  __  ";
		}
	}
	
	if(gabime == 10) //nese ka 10 gabime, humbasim
	{
		for(i = 0; i < n; i++) // per vizat ku rrine shkronjat
		{
			viza[i] = fj[i]; //vendos tek cdo vize shkronjat qe s'u gjeten
		}
	}	
	
	cout << "\n*\t\t HANGMAN   \t\t*\n*\t\t\t\t\t*\n*"; //titulli

	cout << "\t\t\t\t\t*";

	//njeriu
	/*
	_______________
		|		|
		|		_
		|	  /   \
		|     \ _ /
		|		|
		|	   /|\
		|		|
		|	   / \
		|	
	________
	
	*/
	
	switch(gabime) //per njeriun
	{
		case 1:
			cout << "\n*   ________\t\t\t\t*";
			break;	
		case 2:	
			cout << "\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 3:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 4:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 5:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t_\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|      \\_/\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 6:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t_\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|      \\_/\t\t\t*\n*\t|\t|\t\t\t*\n*\t|\t|\t\t\t*\n*\t|\t|\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 7:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t_\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|      \\_/\t\t\t*\n*\t|\t|\t\t\t*\n*\t|      /|\t\t\t*\n*\t|\t|\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 8:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t_\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|      \\_/\t\t\t*\n*\t|\t|\t\t\t*\n*\t|      /|\\\t\t\t*\n*\t|\t|\t\t\t*\n*\t|\t\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 9:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t_\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|      \\_/\t\t\t*\n*\t|\t|\t\t\t*\n*\t|      /|\\\t\t\t*\n*\t|\t|\t\t\t*\n*\t|      /\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
		case 10:
			cout << "\n*     _______________\t\t\t*\n*";
			cout << "\t|\t|\t\t\t*\n*\t|\t_\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|      \\_/\t\t\t*\n*\t|\t|\t\t\t*\n*\t|      /|\\\t\t\t*\n*\t|\t|\t\t\t*\n*\t|      / \\\t\t\t*\n*\t|\t\t\t\t*\n*";
			cout << "    ________\t\t\t\t*";
			break;
	}

	cout << "\n*\t\t\t\t\t*\n*";
	cout << "\t\t\t\t\t*\n*  ";
	
	for(i = 0; i < n; i++)
	{
		if(viza[i] != "  __  ")
		{
			cout << "  " << viza[i] << "  "; //vendos hapesira mes shkronjave
		} 
		else
		{
			cout << viza[i]; //vendos viza, pasi shkronja nuk ka
		}
	}
	
	for(i = 0; i < n + 1; i++)
	{
		if(viza[i] != "  __  ") //nese ska me viza, do te thote qe kemi fituar!
		{
			 f++; //rrit f
		} 
		
		if(f == n + 1) //nese f eshte sa n + 1, pra cdo vize eshte e zene, fitojme!
		{
			cout << "\n*\t\t\t\t\t*";
			cout << "\n*\t\t FITORE!   \t\t*";
			cout << "\n*\t\t\t\t\t*";
			
			string p; //pergjigjia
			
			cout << "\n*\tA DONI TE LUANI ME? PO/JO\t*"; //pyet user-in nese do te luaje me
			cout << "\n*\t\t"; 
			cin >> p; //pergjigjia
			
			if(p == "po" || p == "Po" || p == "PO" || p == "pO") //kontrollon nese pergjigjia eshte po
			{
				system("cls"); //fshin ekranin
				gabime = 0;
				main(); //rinis programin
			}
			else
			{
				cout << "*\t\t\t\t\t*\n";
				cout << "*\t FALEMINDERIT QE LUAJTET\t*\n"; //falenderim per user-in
				cout << "*\t   ME PROGRAMIN TONE!   \t*\n";
				cout << "*\t\t\t\t\t*\n";
				
				for(int lol = 40; 0 <= lol; lol--)
				{
					cout << "*"; //viza mbyllese
				}
			
				return 0;
			}
		}
		
		if(gabime == 10) //nese gabime = 10, njeriu eshte vizatuar plotesisht, pra humbim...
		{
			cout << "\n*\t\t\t\t\t*";
			cout << "\n*\t\t HUMBET... \t\t*";
			cout << "\n*\t\t\t\t\t*\n";
			
			string p; //pergjigja
			
			cout << "\n*\tA DONI TE LUANI ME? PO/JO\t*"; //pyet user-in nese do te luaje me
			cout << "\n*\t\t";
			cin >> p; //pergjigjia
			
			if(p == "po" || p == "Po" || p == "PO" || p == "pO") //kontrollon nese pergjigjia eshte po
			{
				system("cls"); //fshin ekranin
				gabime = 0;
				
				main(); //rinis programin
			}
			else
			{
				cout << "*\t\t\t\t\t*\n";
				cout << "*\t FALEMINDERIT QE LUAJTET\t*\n"; //falenderim per user-in
				cout << "*\t   ME PROGRAMIN TONE!   \t*\n";
				cout << "*\t\t\t\t\t*\n";
				
				for(int lol = 40; 0 <= lol; lol--)
				{
					cout << "*"; //viza mbyllese
				}
			
				return 0;
			}
		}
	}
	
	cout << "\n*\t\t\t\t\t*";
	cout << "\n*\t\t\t\t\t*\n*  JEPNI NJE SHKRONJE TE VOGEL:  ";
	cin >> sh; //merr nje shkronje
	cout << "*\t\t\t\t\t*\n";
	
	for(i = 0; i < n; i++)
	{
		if(fj[i] != sh) 
		{
			g++; //rrit numrin e gabimeve nese tek array i shkronjave nuk ka shkronjen qe dhame
		}
	}
	
	int z = 0;
	
	if(g == n) //nese ka aq gabime sa ka shkronje, do te thote qe nuk ka shkronje qe perputhet
	{
		cout << "*\t\tJO, NUK KA " << sh << ".\t\t*";
		gabime++; //rrit gabimet per hangmanin
	}
	else //ne te kundert e kemi gjetur shkronjen
	{
		cout << "*\t\tPO, KA " << sh << ".\t\t*";
	}
	
	sleep(1); //pak pushim qe perdoruesi ta kuptoje cpo behet
	system("cls"); //fshin ekrain per heren tjeter
	loja(fjala, sh, viza, gabime); //rinis lojen sipas parametrave qe dhame e duam te ruajme
}

int main()
{
	int i, j, n, p;
	string fjala; //fjala qe zgjidhet do te vendoset tek kjo variabel
	
	string fjalet[5][5] = {"liber", "kompjuter", "programim", "stilolaps", "lule" /*5*/, "kornize", "ekskurison", "patatina", "raportor", "hipopotam" /*10*/
							, "frigorifer", "hangman", "kalorifer", "pasticeri", "liri" /*15*/, "karikues", "pikture", "biciklete", "mesdite", "shtegtar" /*20*/
							, "ceremoni", "infrastrukture", "zgjuarsi", "xhungel", "fitore"}; //matrica me fjalet qe kompjuteri zgjedh
	
	
	srand(time(NULL)); 
	i = rand() % 5; //zgjedhja e numrit 1 nga kompjuteri
	 
	j = rand() % 5; //zgjedhja e numrit 2 nga kompjuteri
	
	fjala = fjalet[i][j]; //zgjedh fjalen nga matrica fjalet
	
	n = fjala.length(); //gjen gjatesine e fjales dhe ia vendos n-se
	
	//cout << fjala << endl; //per prova gjate punes
	
	char l; //char kot, sa per te dhene parametrat
	string k[n]; //string kot, sa per te dhene parametrat
	
	i = 40;
	
	while(0 <= i) //viza hyrese
	{
		cout << "*";
		i--; 
	}
	
	cout << "\n*\t\t HANGMAN   \t\t*\n*\t\t\t\t\t*\n"; //titulli
	cout << "*\t\t\t\t\t*\n";
	cout << "*   DONI NJE FJALE NGA KOMPJUTERI (1)\t*\n*\t APO NGA NJE PERSON (2)?\t*"; //pyet userin nese do te luaj me pc apo me nje person
	cout << "\n*\t\t\t\t\t*\n*\t\t    ";
	cin >> p;
	cout << "*\t\t\t\t\t*\n";
	
	while(p != 1 && p != 2) //kontrollon nese numri eshte i vlefshem
	{
		cout << "*\t  JU LUTEM, ZGJIDHNI NJE \t*\n*\t   TE NUMER TE VLEFSHEM\t\t*\n*\t\t\t\t\t*\n*\t\t   ";
		cin >> p;
		cout << "*\t\t\t\t\t*\n";	
	}
	
	if(p == 1)
	{
		cout << "*   ZGJODHET NJE FJALE NGA KOMPJUTERI.\t*\n"; //fjale nga pc
	}
	else
	{
		cout << "*  ZGJODHET NJE FJALE NGA NJE PERSON.\t*\n"; //fjale nga nje person
	}
	
	if(p == 1)
	{
		sleep(2); //pak pushim qe perdoruesi ta kuptoje cpo behet
		system("cls"); //fshin ekranin per te nisur lojen	
		loja(fjala, l, k, 0); //fillon lojen duke dhene si parametra, fjalen e zgjedhur, 2 variabla kot, dhe numrin e gabimeve, ne kete rast 0, sepse loja sapo nisi
	}
	else if(p == 2)
	{
		cout << "*\t\t\t\t\t*\n";
		cout << "*\t  JEPNI NJE FJALE:   \t\t*\n*\t\t"; //se di pse kjo e do fjalen me te vogel se 10 karaktere... fjala nga PC-ja nuk prishte pune me 10+ karaktere
		cin >> fjala; //merr nje fjale nga useri
		system("cls"); //fshin ekranin per te nisur lojen
		loja(fjala, l, k, 0); //fillon lojen duke dhene si parametra, fjalen e zgjedhur, 2 variabla kot, dhe numrin e gabimeve, ne kete rast 0, sepse loja sapo nisi
	}
}
