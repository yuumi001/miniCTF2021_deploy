#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#define LMAX 4000000000000000000
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
unsigned long long getRandom(unsigned long long min, unsigned long long max)
{
    return (((unsigned long long)(unsigned int)rand() << 32) + (unsigned long long)(unsigned int)rand()) % (max - min) + min;
}

void win(){
	FILE *fptr;
	fptr = fopen("flag.txt","rb");
	char ch;
	while((ch = fgetc(fptr)) != EOF)
      		printf("%c", ch);
}

int main(){
//	printf("%lld",getRandom(0,LMAX));
	init();
	signal(SIGALRM,sig_handler); // Register signal handler
  	alarm(70);
	srand(time(NULL));
	int i = 0;
	long long x,y,z,n,t;
	puts("Too ez for you, right?");
	printf("Flag? pass my 100 question pls!!!\nRemember, you have 60s\n");
	while (i<100){
	t = rand()%4;
	x = getRandom(0,LMAX);
	y = getRandom(0,LMAX);
	if (t == 0) z = x + y;
	if (t == 1) z = x - y;
	if (t == 3) {
		x = getRandom(0,LMAX);
		y = getRandom(0,900000);
		z = x / y;
	}
	if (t == 2) {
		x = getRandom(0,90000000);
		y = getRandom(0,90000000);
		z = x * y;
	}
	printf("quest: %d\n",i+1);
	L1:
	if (t==0) printf("%lld + %lld = ",x,y);
	if (t==1) printf("%lld - %lld = ",x,y);
	if (t==2) printf("%lld * %lld = ",x,y);
	if (t==3) printf("%lld / %lld = ",x,y);
	scanf("%lld",&n);
	getchar();
	//printf("%d\n",z);
	if (n==z) {
		printf("yes!\n");
		i++;
	} else {printf("no!\n");
		goto L1;
	}}
	win();
}
