#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int grade[SIZE];
	int i;
	int sum=0;
	printf("5명의 점수를 입력하세요.\n");
	
	for(i=0;i<SIZE;i++){
	  scanf("%d",&grade[i]);
	  sum+=grade[i];
	}
	for(i=0;i<SIZE;i++){
	 printf("grade[%i] = %d\n",i,grade[i]); 
    }
    
     printf("Mean : %d\n",sum/SIZE); 

	return 0;
}
