/*****************************************************************
 * This file, selfdestruct.c is licensed under the GNU GPLv3.    *
 * (c) DamieFC, 2021                                             *
 *****************************************************************/
#include "../libraries/cli/cprompt.h"

int main(){
	if (input == "selfdestruct"){
		char sure
		printf("Are you sure? This action cannot be undone. Y/n \n");
		scanf("%c", sure)
		if (sure == "y" || "Y" || "n" || "N"){
			char extrasure
			printf("Are you extra sure? Y/n \n");
			scanf("%c", extrasure)
			if (extrasure == "Y" || "y" || "N" || "n"){
				printf("Ok... \n");
				printf("Self destructing... \n");
				remove(*);
				printf("You won't ever see this");
			};
		};
	};
};
