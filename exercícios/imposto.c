#include <stdio.h>

int main(){
	float salario;
	float imposto;
	scanf ("%f", &salario);
	if ( salario>=0 && salario<=2000){
		printf ("Isento\n");
	}
	else {
		if(salario>2000.00 && salario<=3000.00){
			imposto=(0.08*salario)-160;
		}
		else{
		 	if (salario>3000.00 && salario<=4500.00){
				imposto=(0.18*salario)-460;
			}
			else imposto=(0.28*salario)-910;
		}
	}

	if (salario>2000){
		printf ("R$ %.2f\n", imposto);
	}


	











	return 0;
		 	

	}

