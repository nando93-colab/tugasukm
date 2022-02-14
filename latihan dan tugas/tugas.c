#include <stdio.h>


struct nama{
	char *nama;
    int  *umur;
    char *hobi;
};
void  main(){
	struct nama;
	char nama[]= "nando";
	int umur= 21 ;
	char hobi[]= "bulutangkis";
	 
	printf("nama%s\n",nama);
	printf("umur%i\n",umur);
	printf("hobi%s\n",hobi);
	return 0;
}
