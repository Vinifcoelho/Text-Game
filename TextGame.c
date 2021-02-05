#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#define SIZE 256
typedef struct user{
	char name[SIZE];
	int charChoice;

}USER;
void game();
void part1(int charChoice);
void end();
int choose();
void left(int charChoice);
void right(int charChoice);


void main(){
	game();


}
void game(){
	printf("\n------------------------------WELCOME TO DUNGEON CRAWL!------------------------------\n\n");
	//sleep(2);

	USER nerd;
	char buffer[SIZE];
	printf("What do you call yourself?\n(Enter your name, or any name. I'm not a cop)\n");


	scanf("%[^\n]",buffer);
	

	nerd.name[SIZE];
	strcpy(nerd.name,buffer);

	//sleep(2);
	printf("So you're '%s', huh?\n\n",nerd.name);

	printf("Which class would you like to be?\n(Enter 1-10)\n\n");
	printf("1)Barbarian\n2)Bard\n3)Cleric\n4)Druid\n5)Fighter\n6)Monk\n7)Paladin\n8)Ranger\n9)Rogue\n10)Mage\n\n");



	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("You chose Barbarian!\n");
		nerd.charChoice =choice;

		part1(nerd.charChoice);
		break;

		case 2:
		printf("You chose Bard!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 3:
		printf("You chose Cleric!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 4:
		printf("You chose Druid!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 5:
		printf("You chose Fighter!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 6:
		printf("You chose Monk!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 7:
		printf("You chose Paladin!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 8:
		printf("You chose Ranger!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 9:
		printf("You chose Rogue!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

		case 10:
		printf("You chose Mage!\n");
		nerd.charChoice =choice;
		part1(nerd.charChoice);
		break;

	}

	

	
	
	
	


}
void part1(int charChoice){
	int choose1;

	printf("You find yourself in a dark and damp cave illuminated only by your torchlight.\n");
	printf("You eventually reach a small chamber and see the smoldered ashes of a shoddy campfire.\n\n");
	printf("Do you...\n1)Investigate?\n2)Continue on?\n3)Leave?\n");
	scanf("%d",&choose1);

	switch(choose1){
		case 1:
		printf("You investigate the room\n");
		if(charChoice == 10	|| charChoice == 6){
			printf("Just like a bookworm to want to extract every last detail\n\n");
		}
		printf("Judging by the way the fire was put out you gather that whoever was here left in a haste\nYou also see clawed footprints--perhaps kobolds?\n");
		break;

		case 2:
		printf("You continue on\n");
		printf("You forge on ahead making your way through the narrowing cave tunnel\n");
		if(charChoice == 1){
			printf("Wouldn't expect a barbarian to be interested in details anyway...\n");
		}
		break;

		case 3:
		printf("You tuck tail and leave sheepishly");
		end();
		break;
		/*ENDED HERE
		TODO
		*Flesh out rest of story (don't go overboard)
		*Alter text slightly w/respect to class
		*/

	}
	printf("As you move through the cave, you happen upon a fork dividing your path into two.\n");
	printf("Do you...\n\n");
	printf("1)Go left?\n2)Go right?\n");
	int lor;
	scanf("%d",&lor);

	if(lor == 1){
		printf("You go left\n");
		left(charChoice);	
	}
	if(lor == 2){
		printf("You go right\n");
		right(charChoice);
	}

	
	
	
}



void end(){

	printf("\n\nGame Over!\n\n");

	char play;
	printf("Play again?(y/n)\n\n");


	scanf(" %c",&play);
	 if(play == 'y' || play == 'Y'){
	 	printf("\n\nYou chose yes ");
	 	game();

	 }else{
	 	printf("\nGoodbye!");
	 	exit(0);
	 }


}
void left(int charChoice){
	printf("The path quickly begins to descend and you find yourself going deeper and deeper\n");
	printf("You eventually reach a small secluded room housing three sleeping kobolds with a slapshod ladder leading up to what looks like the outside");
	printf("\nDo you...\n");
	printf("1)Attack the kobolds?\n2)Attempt to sneak past them?\n");
	int atk;
	scanf("%d",&atk);
	if(atk == 1){
		switch(charChoice){
			//Write out attacks based on class
		case 1:
		printf("You raise you club and strike them all down in a blind fury, screaming obscenities. You leave a true horror show in your wake. You climb up the ladder triumphantly\n");
		end();
		
		break;

		case 2:
		printf("You shoulder you fiddle and begin a song that causes them all to break into raucous laughter until they can no longer breathe. You saunter past their corpses and climb the ladder to freedom\n");
		end();
		break;

		case 3:
		printf("You splash holy water in your hands and unleash a beam of holy fire to engulf them. You clutch your holy symbol and climb out solemnly\n");
		end();
		break;

		case 4:
		printf("You mutter incantations as thorny vines shoot up from the ground and swiftly wrap up all 3 unsuspecting kobolds. You flit past them and climb the ladder out\n");
		end();
		break;

		case 5:
		printf("You land blow after blow against them, catching them completely by surprise. You climb swiftly out into the open \n");
		end();
		break;

		case 6:
		printf("You whip your bo staff around blindingly and don't stop until all 3 are a bloody mess. You run nimbly through their corpses and up the ladder\n");
		end();
		break;

		case 7:
		printf("You call out to your God and unleash a holy smite showering the room in golden light. You trod past them dragging your warhammer along the floor and climb out triumphantly\n");
		end();
		break;

		case 8:
		printf("You nock 3 arrows simultaneously and strike all three fatally with surgical precision. You nonchalantly walk past them and up the ladder\n");
		end();
		break;

		case 9:
		printf("You unsheath your dagger and dispatch each on of them quickly and quietly. You slip past them quietly and leave without a trace\n");
		end();
		break;

		case 10:
		printf("You crush a gem in your hands and shout incantations as a bolt of lightning emerges from your hands striking all 3 simultaneously. You exit the cave calmly up the ladder \n");
		end();
		break;
		}
	}

	if(atk == 2){
		if(charChoice == 1){
			printf("Being a barbarian, you kill them anyway just for fun. You leave the cave through the ladder leaving only gore in your wake\n");
			end();
		}
		
		printf("You tiptoe past them and sneak up the ladder to the open air\n\n");
		end();
		
	}

}
void right(int charChoice){

	printf("\nYou head right and encounter a wall with different runes encircling one large rune\n");
	printf("Do you..\n");
	printf("1)Investigate?\n2)Leave the way you came?");
	int num;
	scanf("%d",&num);

	if(num ==1){
		switch (charChoice){
			case 1:
		printf("The thought of exerting your brain looking at these symbols sends you into a blind rage. You pummel the wall until something happens. \nThe runes glow bright purple and turn you to dust\n");
		end();
		
		break;

		case 2:
		printf("You compose a limerick abput what the runes could possibly be and just how boned you truly are. \nThis apparently was favorable and the wall slides down revealing a large chest filled with gold and jewels\n");
		end();
		break;

		case 3:
		printf("You mutter a prayer out of fright and as soon as you mention your God the wall starts seeping an inky black liquid and your vision fades more and more as time passes\n");
		end();
		break;

		case 4:
		printf("You reach your hand out to touch the stone face of the wall and it seems to react to the nature magic within you.\nYour vision goes white and you find yourself outside the mouth of the cave\n");
		end();
		break;

		case 5:
		printf("You sit and ponder awhile, having come up with nothing you try to approach the wall and it instantly starts seeping a sticky, viscous liquid that burns your skin off. \n");
		end();
		break;

		case 6:
		printf("You meditate on your options for figuring this out and just fall asleep\n");
		end();
		break;

		case 7:
		printf("You deem the symbols to be heretic in nature so you break the wall doen with your warhammer\n");
		end();
		break;

		case 8:
		printf("You lanch an arrow tipped with explosives and blow the wall apart revealing a clea path out of the cave\n");
		end();
		break;

		case 9:
		printf("You pick at the wall with your dagger and feel an electric shock that leaves your skin smoking. your vision starts to go black\n");
		end();
		break;

		case 10:
		printf("You recognize the runes immediately and recite the disarming spell for this trap. You are offered free passage out of the cave \n");
		end();
		break;
		
		}

	}
	if(num == 2){
		printf("You begin to retrace your steps and leave the way you came. You are mauled by kobolds on your way out.You do not survive");
		end();
	}


}


