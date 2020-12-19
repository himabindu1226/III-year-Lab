#include <stdio.h>
#include <string.h>
 int main() {
	int i,j,keylen,msglen;
	char frames[100], key[30],temp[30],quot[100],rem[30],coeff1[30];
	printf("Enter Data: ");
	scanf("%s",frames);
	printf("Enter Polynomial Coefficient: ");
	scanf("%s",key);
	keylen = strlen(key);
	msglen = strlen(frames);
	strcpy(coeff1,key);
//Adding zeroes to the given input data
	for (i = 0; i < keylen - 1; i++) {
		frames[msglen + i] = '0';
	}
//XOR DIVISION
	for (i = 0; i < keylen; i++)
		 temp[i] = frames[i];

    for (i = 0; i < msglen; i++) {
		quot[i] = temp[0];
		if(quot[i] == '0')
		 for (j = 0; j < keylen; j++)
		 key[j] = '0';
		 else
		 for (j = 0; j < keylen; j++)
		 key[j] = coeff1[j];
		for (j = keylen - 1; j > 0; j--) {
			if(temp[j] == key[j])
			 rem[j - 1] = '0';
			else
			 rem[j - 1] = '1';
		}
		rem[keylen - 1] = frames[ i + keylen];
		strcpy(temp,rem);
	}
	strcpy(rem,temp);
	printf("\nMesage is ");
	for (i = 0; i < msglen; i++)
	 printf("%c",quot[i]);
	printf("\nCRC is ");
	for (i = 0; i < keylen - 1; i++)
	 printf("%c",rem[i]);
	printf("\nMessage at  Receiver is : ");
	for (i = 0;i < msglen; i++)
	 printf("%c",frames[i]);
	for (i = 0;i < keylen - 1; i++)
	 printf("%c",rem[i]);
 printf("\n");
	return 0;
}
