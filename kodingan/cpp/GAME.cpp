#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main() {
	system ("color f9");
  	int choose, chooseVillage, chooseBoss, chooseBattle, chooseStatus;
  	int life, power, defends, magic, spirit, statuspoint = 0, maxLife;
 	int boss1Attack, bossLife, boss2Life, boss2Attack;
  	string  name;
  	const char * character, * weapon;

  	cout << "Hallo . . . Selamat Datang Di Game Si salsa Dan ucup\n";
 	 cout << "Choice Your Character...\n";
 	 cout<<"\n\t1. salsa\n\t2. ucup"<<endl;
 	 cout << "Your Choice :  "; cin >> choose;
 	 if(choose == 1) {
 		character = "salsa";
  	  	maxLife = 100;
  	  	life = 100;
  	 	defends = 5;
  	  	spirit = 25;
	  }
  else if (choose == 2) {
    character = "ucup";
    maxLife = 100;
    life = 60;
    defends = 3;
    spirit = 50;
  }
  else {
    cout<<("Option Not Available");
    return 0;
  }
  cout << "Set Your Name In Here : "; 
  cin >> name;
system("cls");
  cout << "\nHallo " <<  character << ", Set Find Your Equipment Weapon...\n";
  cout << "   1. Sword\n   2. Axe\n   3. Arrow\n   4. Magic Wand\n";
  cout << "Your Choice : "; 
  cin >> choose;
  if(choose == 1) {
    weapon = "Sword";
    power = 60;
    magic = 0;
  }
  else if (choose == 2) {
    weapon = "Axe";
    power = 75;
    magic = 8;
  }
  else if (choose == 3) {
    weapon = "Arrow";
    power = 85;
    magic = 10;
  }
  else if (choose == 4) {
    weapon = "Magic Wand";
    power = 10;
    magic = 90;
  }

  cout << "\nWow, You Choice Weapon " << weapon << ", That's A Greets Choice, Klik For Play Now and Start Your Game !!!";
	main:
	system("cls");
  cout << "Village Of Esa Unggul University\n";
  cout << "1. Check Status\n";
  cout << "2. Battle with Enemy\n";
  cout << "3. Set Full Your Life\n";
  cout << "4. Increase Your Status\n";
  cout << "5. Exit the Game\n";
  cin>>chooseVillage;
  switch(chooseVillage){
  	case 1:
  		system("cls");
  		cout<<"Cek Your Status\n\n";
  		cout<<"Life = "<<life<<"/"<<maxLife<<endl;
  		cout<<"Power = "<<power<<endl;
  		cout<<"Defends = "<<defends<<endl;
  		cout<<"Magic = "<<magic<<endl;
  		cout<<"Spirit = "<<spirit<<endl;
  		getch();
  		system("cls");
  		goto main;
  		break;
  	case 2:
  		system("cls");
  		cout<<"Batle with Enemy\n\n";
  		cout<<"		1.Boss of Knight Tree\n";
  		cout<<"		2. Boss of Knight of Pegasus\n";
  		cout<<"Choice your boss enemy\n";
  		cin>>chooseBoss;
  		switch(chooseBoss){
  			case 1: 
  				system("cls");
  				boss1Attack = 30;
  				if(bossLife <=0){
  					bossLife = 100;
				  }
				while(life>0 || bossLife>0){
					cout<<"1. Attack\n";
					cout<<"2. Magic\n";
					cout<<"3. Run\n";
					cin>>chooseBattle;
					switch(chooseBattle){
						case 1:
							bossLife = bossLife - power;
							life = life - boss1Attack;
							cout<<"You have hit the boss for "<<power<<" damage.\n";
							cout<<"The boss hits you for "<<boss1Attack<<" damage\n";
							cout<<"Boss HP = "<<bossLife<<endl<<"Your HP = "<<life<<endl;
							if(bossLife>0){
								getch();
								system("cls");
						}
							else{
								statuspoint = statuspoint + 1;
								cout<<"Boss is defeated\n";
								cout<<"You got 1 Point\n";
								getch();
								system("cls");
								goto main;
							}
						break;
						case 2:
							bossLife = bossLife - magic;
							life = life - boss1Attack;
							cout<<"You have hit the boss for "<<magic<<" damage.\n";
							cout<<"The boss hits you for "<<boss1Attack<<" damage.\n";
							cout<<"Boss HP = "<<bossLife<<endl<<"Your HP = "<<life<<endl;
							if(bossLife>0){
								getch();
								system("cls");
							}
							else {
								statuspoint = statuspoint+1;
								cout<<"Boss is defeated\n";
								cout<<"You got 1 Point\n";
								getch();
								system("cls");
								goto main;
							}
						break;
						case 3:
							system("cls");
							goto main;
						break;
					}
				}
			break;
			case 2:
  				system("cls");
  				boss2Attack = 45;
  				if(boss2Life <=0){
  					boss2Life = 100;
				  }
				while(life>0 || boss2Life>0){
					cout<<"1. Attack\n";
					cout<<"2. Magic\n";
					cout<<"3. Run\n";
					cin>>chooseBattle;
					switch(chooseBattle){
						case 1:
							bossLife = boss2Life - power;
							life = life - boss1Attack + defends;
							cout<<"You have hit the boss for "<<power<<" damage.\n";
							cout<<"The boss hits you for "<<boss1Attack<<" damage\n";
							cout<<"Boss HP = "<<boss2Life<<endl<<"Your HP = "<<life<<endl;
							if(boss2Life>0){
								statuspoint = statuspoint + 1;
								cout<<"Boss is defeated\n";
								cout<<"You got 1 Point\n";
								getch();
								system("cls");
								goto main;
						}
							getch();
							system("cls");
						break;
						case 2:
							boss2Life = boss2Life - magic;
							life = life - boss1Attack + defends;
							cout<<"You have hit the boss for "<<magic<<" damage.\n";
							cout<<"The boss hits you for "<<boss1Attack<<" damage.\n";
							cout<<"Boss HP = "<<boss2Life<<endl<<"Your HP = "<<life<<endl;
							if(boss2Life>0){
								statuspoint = statuspoint+1;
								cout<<"Boss is defeated\n";
								cout<<"You got 1 Point\n";
								getch();
								system("cls");
								goto main;
							}
							getch();
							system("cls");
						break;
						case 3:
							system("cls");
							goto main;
					}
				}
			break;
		  }
	break;
	case 3:
		life = maxLife;
		cout<<"HP is now Full\n";
		getch();
		system("cls");
		goto main;
	break;
	case 4:
		cout<<"Increase your Status\n\n";
		cout<<"You have "<<statuspoint<<" status point.\n";
		cout<<"1. Life\n2. Power\n3. Defends\n 4. Magic\n 5. Spirit\n";
		if(statuspoint>0){
		cin>>chooseStatus;
		switch(chooseStatus){
			case 1:
				maxLife = maxLife + 10;
				getch();
				system("cls");
				goto main;
			break;
			case 2:
				power = power + 10;
				getch();
				system("cls");
				goto main;
			break;
			case 3:
				defends = defends + 5;
				getch();
				system("cls");
				goto main;
			break;
			case 4:
				magic = magic + 8;
				getch();
				system("cls");
				goto main;
			break;
			case 5:
				spirit = spirit + 10;
				getch();
				system("cls");
				goto main;
		}
	}
	else{
		cout<<"\nYou don't have status point\n";
		getch();
		system("cls");
		goto main;
	}
	break;
	case 5:
		ofstream myfile;
		myfile.open("UAS_gamedaa.txt");
		myfile << "Character = "<<name<<endl;
		myfile << "HP = "<<life<<"/"<<"lowLife"<<endl;
		myfile << "Spirit = "<<spirit<<endl;
		myfile << "Power = "<<power<<endl;
		myfile << "Magic = "<<magic<<endl;
		myfile << "Defends = "<<defends<<endl;
		myfile.close();
		return 0;
  }
}
