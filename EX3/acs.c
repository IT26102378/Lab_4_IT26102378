#include <stdio.h>
int main ()
{
	int fingerprint_match, rentinal_match, access_card_valid;
	
	printf("Fingerprint match (1/0): ");
	scanf("%d", &fingerprint_match);
	printf("Retinal match (1/0): ");
	scanf("%d", &rentinal_match);
	printf("Access Card valid (1/0): ");
	scanf("%d", &access_card_valid);

	if ((fingerprint_match && rentinal_match) || (fingerprint_match && access_card_valid) || (rentinal_match && access_card_valid))
		printf("Access Granted\n");
	else
		printf("Access Denied\n");
        return 0;
}
	
	
             
