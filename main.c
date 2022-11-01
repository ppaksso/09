#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[SIZE];
	int i;
	int score[SIZE];
	
	printf("5명의 점수를 입력하세요.\n");
	
	for(i=0;i<SIZE;i++){
	 grade[i] = rand() % 100;
	}
	
	for(i=0;i<SIZE;i++){
	   grade[i]=score[i];
    }
	for(i=0;i<SIZE;i++)
	  printf("score[%i] = %d (%d)\n",i,score[i],grade[i]); 
    
	return 0;
}
