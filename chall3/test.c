#include<stdio.h>
void logo(){
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
	logo();
	int a=0;
	char buf[20];
	puts("what you name: ");
	gets(buf);
	printf("Hello %s!!!",buf);
	L1:
	printf("You have : %d $\n",a);
	printf("What you want to do: \n1. Work!\n2. Buy flag!\n3. Show hint 1!\n4. Show hint 2!\n");
	int x;
	scanf("%d", &x);
	switch (x) {
		case 1:
			puts("You earn 1$");
			a++;
			goto L1;
		case 2:
			if (a<1000000000) {
				puts("Sorry you don't have enough money~~~");
				puts("Flag cost 1 000 000 000$");
				puts("Pls go away~~~");
				goto L1;
			} else {
				win();
				exit(0);
			}
		case 3:
			if (a<5) puts("You must have at least 5$");
                        else {
                                puts("================================     HINT    ====================================");
				puts("                https://www.youtube.com/watch?v=dQw4w9WgXcQ ");
                                puts("=================================================================================");
                                a-=15;
                        }
                        goto L1;

		case 4:
			if (a<15) puts("You must have at least 15$");
			else {
				puts("================================     HINT    ====================================");
				puts("I want a very longgggggggggggggggggggggggggggggggggggggggggggggggggggggggggg name");
				puts("=================================================================================");
				a-=15;
			}
			goto L1;
		default:
			puts("Nah, try again!!!");
			getchar();
			goto L1;
	}
	return 0;
}
