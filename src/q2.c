#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 16

int main(){
	int array[MAX];
	
	//[1]...refer to markdown
	for(int i = 0;i < MAX; i++){
		array[i] = i+1;
	}
	
	srand((unsigned int)time(NULL));

	//[2]...refer to markdown
	for(int j = 0; j < MAX; j++){
		int randomNumber = rand() % MAX;
		int tmp = array[randomNumber];
		array[randomNumber] = array[j];
		array[j] = tmp;
	}

	for(int k = 0;k < MAX; k++){
		printf("%d ",array[k]);
	}
}
