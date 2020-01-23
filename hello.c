#include <stdio.h>

void boucleAvant(){
for (int i=0; i<10; ++i){
	printf("%d",i);
}
printf("\n");
}

void boucleApres(){
for(int j=0; j<10; j++){
	printf("%d",j);
}
}

void ligneCommande (char *argv[]){
	for(int i=0; i<3 ; i++){
	printf("\nresultat : %s\n", argv[i]);
}
}

int main ( int argc, char *argv[] ){

	boucleAvant();
	boucleApres();
	ligneCommande(argv);

	return 0;
}
