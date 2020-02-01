#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* TODO: all a constructor using a struct */

int main(){
	int noOfGators = 10;
	int playerIDs[] = {1,2,3,4,5,6,7,8,9,10};
	char* players[] = {"Alex", "Bob", "Chris", "David", "Easton",
	"Frank", "Henry", "Peter", "Samuels", "Thomas"};

	struct gator gs[noOfGators];
	srand(time(0));
	for (int i= 0; i < noOfGators; i++){
		gs[i].playerID = playerIDs[i];
		gs[i].playerName = players[i];
		gs[i].playerWeight = 100 + rand()%101;
		gs[i].playerHeight = 150 + rand()%51;
	}
	for (int i= 0; i < noOfGators; i++){
		printf("%d\t%s\t%f\t%f\n", gs[i].playerID,
			gs[i].playerName,
			gs[i].playerWeight,
			gs[i].playerHeight
			);
	}
	return 0;
}
