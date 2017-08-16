#include<stdio.h>
#include<conio.h>
int main(){
	char c;
	printf("Este es un loop indefinido");
	while(1){
		printf("Dentro del loop indefinido (Presione una tecla)");
		if((c = getch()) == 'Q')
			break;

		printf("\nNo fue la tecla correcta para abandonar el loop");
	}
	printf("\nTecla correcta, abandonando el loop...");

}
