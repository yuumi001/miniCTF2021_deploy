#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
void sig_handler(int signum){
  printf("Too slow!!!No flag for you bae ¯\\_(ツ)_/¯\\n");
  exit(0);
}
void init(){
puts("                                                                                ");
puts("                                                                                ");
puts("                                                                                ");
puts("                                         I                                      ");
puts("                                      II   II                                   ");
puts("                                   II         II                                ");
puts("                                ,I               II                             ");
puts("                              I,       IIIIII       II                          ");
puts("                           II       IIIIIIIIIIII       II                       ");
puts("                        II       IIIIIIIIIIIIIIIIII#      II                    ");
puts("                     II        IIIIIIIIIIIIIIIIIIIIIII       II                 ");
puts("                  II        IIIIIIIIIII       IIIIIIII  II      II              ");
puts("           IIIIII            IIIIIII            IIIIII  IIIII      II           ");
puts("           IIIII        II    IIIIIII           IIIIII  IIIIIIII      II.       ");
puts("            #I      I   IIII    IIIIIII         IIIIII  IIIIIIIIIII     I       ");
puts("                 IIIII  IIIII    IIIIIIIII     .IIIIII  IIII   IIIII    I       ");
puts("        IIIII  IIIIIII   IIIIII    IIIIIIIII     IIIII  IIII    IIII    I       ");
puts("        IIIII  #IIIIII   IIIIII       IIIIIIIII      I  IIII   IIII    I        ");
puts("           I    IIIIIII   IIIIII  I     IIIIIIIIIII     IIIII# IIII    I        ");
puts("           I     IIIIII   IIIIIII  II      IIIIIIIIII  IIIIIIIIIII    II        ");
puts("            I    IIIIIII   IIIIIII  III#     IIIIIII   IIIIIIIIIII    I         ");
puts("            I     IIIIIII   IIIIIII  IIIII  IIIIIIII  IIIIIIIIIII    I          ");
puts("             I     IIIIIII   IIIIIII  IIII IIIIIIII   IIIIIIIIII    II          ");
puts("              I     IIIIIII   IIIIIII  II IIIIIIII#  IIIIIIIIII     I           ");
puts("               I     IIIIIII   IIIIIIII  IIIIIIIII  *IIIIII II     I            ");
puts("                I     IIIIIII   IIIIIIIIIIIIIIIII   IIIIII II     I             ");
puts("                 I     IIIIIII   IIIIIIIIIIIIIII   IIIII* II    #I              ");
puts("                  I      IIIIII    IIIIIIIIIIII   IIIII  I     II               ");
puts("                   I.     IIIIIII    IIIIIIIII   IIIII II     I                 ");
puts("                     I      IIIIIII   IIIIII   IIIIII I      I                  ");
puts("                      II      IIIIII    III   IIIII        I                    ");
puts("                        II      IIIIII      IIIIII       II                     ");
puts("                          II      IIIIII   IIIII       II                       ");
puts("                            II      IIIIIIIIII       II                         ");
puts("                               II                  I                            ");
puts("                                 III            II                              ");
puts("                                    #II     III                                 ");
puts("                                        III                                     ");
puts("                                                                                ");
puts("                                                                                ");
	setbuf(stdin,NULL);
	setbuf(stdout,NULL);
	setbuf(stderr,NULL);
}

void win(){
	FILE *fptr;
	fptr = fopen("flag.txt","rb");
	char ch;
	while((ch = fgetc(fptr)) != EOF)
      		printf("%c", ch);
}

int main(){
	init();
	signal(SIGALRM,sig_handler); // Register signal handler
  	alarm(110);
	srand(time(NULL));
	int i = 0;
	int x,y,z,t,n;
	printf("Flag? pass my 15 question pls!!!\nRemember, you have 100s\n");
	while (i<15){
		t = rand()%2;
		x = 100 + rand()%(100 +1 - 50); // min + rand%(max + 1 - min)
		y = 100 + rand()%(100 +1 - 50); // min + rand%(max + 1 - min)
		if (t==0) z = x + y;
		if (t==1) z = x - y;
		printf("quest: %d\n",i+1);
		L1:
		if (t==0) printf("%d + %d = ",x,y);
		if (t==1) printf("%d - %d = ",x,y);
		scanf("%d",&n);
		getchar();
		if (n==z) {
			printf("yes!\n");
			i++;
		} else {
			printf("no!\n");
			goto L1;
		}
	}
	win();
}
