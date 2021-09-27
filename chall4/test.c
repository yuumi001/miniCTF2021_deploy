#include<stdio.h>
#include<stdlib.h>
void adventurer();
void trader();
void init(){
	puts("*======================  WELCOME  ======================*");
	puts("* This world is dominated by Iluvinn aka Demon Lord     *");
	puts("* He had weird power called AMATERASU, it's a black fire*");
	puts("* which can burn anything in his sight                  *");
	puts("* People are dying day by day. Many heroes tried to     *");
	puts("* defeat him but all died. Can you defeat him to bright *");
	puts("* peace back to this world!!!                           *");
	puts("*=======================================================*");
	setbuf(stdin,0);
	setbuf(stdout,0);
	setbuf(stderr,0);
}
void thongso(char*, int, int, int);
void fight();
void train();
void menu();
void boss();
void crep();
void flevel();
void guide();
void win();

char name[12];
int level = 1;
int xp = 0;
int xpup = 1;
int atk = 100;
int atkup = 100;
int ne = 10;
int boss_hp = 2000000000;

int main(){
	init();
	   // =======================================================
	puts("----------------- Please choose one -------------------");
	puts("| 1. Adventurer                                         ");
	puts("| 2. Trader                                             ");
	puts("-------------------------------------------------------");
	int ch;
	L1:
	printf("> ");
	scanf("%d",&ch);
	getchar();
	switch (ch) {
		case 1:
			adventurer();
			break;
		case 2:
			trader();
			break;
		default:
	                puts("===================- NOTIFICATION -====================");
        	        puts("|                     TRY AGAIN              ");
                	puts("-------------------------------------------------------");
			goto L1;
	}
	puts("end!!");
}

void trader(){
                puts("===================- NOTIFICATION -====================");
		puts("| So boring~~~~~");
		puts("| No flag for you!!!!");
                puts("-------------------------------------------------------");

	exit(0);
}

void adventurer(){
            //=======================================================
	puts("----------------- What's your name? -------------------");
	printf("> ");
	fgets(name,12,stdin);
	int ch;
	L2:
	flevel();
	thongso(name,level,xp,atk);
	menu();
	printf("> ");
	scanf("%d",&ch);
	getchar();
	switch (ch) {
		case 1:
			fight();
			goto L2;
			break;
		case 2:
			train();
			goto L2;
			break;
		case 3:
			guide();
			goto L2;
			break;
		default:
			goto L2;
	}
}
void menu(){
		//    =======================================================
		puts("-------------------------------------------------------");
		puts("| What do you want to do? ");
		puts("| 1. Fight ");
		puts("| 2. Train ");
		puts("| 3. Guide ");
		puts("-------------------------------------------------------");
}

void thongso(char *name,int level,int xp, int atk){
	      //=======================================================
	puts(  "=======================  TOWN  ========================");
	puts(  "--------------------  PROPERTIES  ---------------------");
	printf("| name: %s",name);
	printf("| level : %d\n",level);
	printf("| exp : %d/%d\n",xp,level*ne);
	printf("| atk : %d\n",atk);
	puts(  "-------------------------------------------------------");
}

void flevel(){
	if (level*ne <= xp) {
		   // =======================================================
		puts("===================- NOTIFICATION -====================");
		puts("|                      LEVEL UP              ");
		xp -= level*ne;
		level++;
		printf("| ATK : %d",atk);
		atk +=atkup;
		printf(" => %d\n",atk);
		printf("| EXP get: %d", xpup);
		xpup +=10;
		printf(" => %d\n", xpup);
		puts("-------------------------------------------------------");
		ne +=5;
		atkup+=50;
}

}

void fight(){
	//    =======================================================
	puts("======================== JUNGLE =======================");
	puts("| 1. Fight monster                                    |");
	puts("| 2. Fight Boss                                       |");
	puts("=======================================================");
	int ch;
	L3:
	printf("> ");
	scanf("%d",&ch);
	getchar();
	switch (ch) {
		case 1:
			crep();
			break;
		case 2:
			boss();
			break;
		default:
			goto L3;
	}
}
void crep(){
	printf("great you got %dxp\n",xpup);
	xp+=xpup;
}

void boss(){
	//      =======================================================
	puts(  "$======================  BOSS ROOM  ==================$");
	printf("| Dealing %d damage to boss\n",atk);

	boss_hp -= atk;
	if (boss_hp<=0) {
		puts(  "$=====================================================$");
		exit(0);
	} else 	printf("| Iluvinn's hp remain: %d\n", boss_hp);
		puts(  "| Iluvinn is using AMATERASU, pls RUN ");
	puts(  "$=====================================================$");
	win();

}
void train(){
	// =======================================================
	puts("----------------------  TRAINING ----------------------");
	printf("Enter amount exp to atk point\n ");
	printf("> ");
	char *s;
	s = malloc(10);
	fgets(s,10,stdin);
	int amount = atoi(s);
//	scanf("%d",&amount);
	printf("You input: %d\n", amount);
	if (xp >= amount) {
		xp -= amount;
		atk += amount;
	} else {
		puts("Nah, not enough exp~~~");
	}
	free(s);
}

void guide(){
	puts(  "$===================  ROAD TO HERO  ==================$");
	puts(  "| Each time you lv up ");
	puts(  "|  - ATK up ");
	puts(  "|  - Get more EXP ");
	puts(  "| ");
	puts(  "| In 'Fight' you can choose fight with monster to get ");
	puts(  "| more exp or fight with the boss");
	puts(  "| ");
	puts(  "| In 'Train' you can convert your exp to atk point");
	puts(  "| ");
	puts(  "| Train youself but be smart ");
	puts(  "| ILUVINN is very scare of HEALING " );
	puts(  "$=====================================================$");
}

void win(){
	FILE *fptr;
	fptr = fopen("flag.txt","rb");
	char ch;
	while((ch = fgetc(fptr)) != EOF)
      		printf("%c", ch);
	exit(0);
}

