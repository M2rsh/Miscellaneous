#include <stdio.h>
#include <stdlib.h>

void main(){
	printf("This app will fuck the shit out of your ram\nLet's start doing a bit of trolling :troll:\n");
	printf("\nPress [ENTER] to continue ");
	char enter = 0;
	while (enter != '\r' && enter != '\n') { enter = getchar(); }
	printf("\nTrolling started\n");
	while (1) { int* p = malloc(1024); }
	printf("\nSomething ain't right");
}
