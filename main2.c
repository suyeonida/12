#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char c;
	//char str[100]; 뭉탱이로 가지고 올 떄  
	int i;
	
	fp= fopen("sample.txt","r");
	if (fp==NULL){
		return -1;
	}
	
	while( (c=fgetc(fp)) != EOF ){  //한글자씩 읽어 저장  
		printf("%c",c);
	}
	
	fclose(fp);
	
	return 0;
}
