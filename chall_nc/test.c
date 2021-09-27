#include <stdio.h>
#include <unistd.h>
void main(){
setbuf(stdin,0);
setbuf(stdout,0);
setbuf(stderr,0);
puts("            .       .");
puts("            \\`-\"'\"-'/");
puts("             } 6 6 {");
puts("            ==. Y ,==");
puts("              /^^^\\  .");
puts("             /     \\  )  ");
puts("            (  )-(  )/");
puts("            -\"\"---\"\"---   /");
puts("           /   Ncat    \\_/");
puts("          (     ____");
puts("           \\_.=|____E");
puts("");
	char flag[]="ISPCLUB{SO_WEIRD_CAT}";
	int i=0;
	puts("Here your flag: ");
	while (i<21){
		sleep(1);
		printf("%c",flag[i]);
		i++;
	}
}
