#include <stdio.h>

int nota, prom, acum, cont, contmax, contmin, cont6, acum6, max, min, porc, exit, i;

int main(){
	
		printf("Ingrese nota\n  ", i+1);
		scanf("%d", &nota);
	
while( nota != 0){ 
	
		if( nota >= 6){
			cont6= cont6 + 1;
			acum6= acum6 + nota;
		}
		if( nota > max){
			max= nota;
			contmax= contmax + 1;
		}
		if(nota < min ){
			min=nota;
			contmin= contmin + 1;
		}
		
		acum= acum + nota;
		cont= cont + 1;
		
		printf("Ingrese nota\n  ", i+1);
		scanf("%d", &nota);
	}
	cont= cont - 1;
	
	prom= acum / cont;
	porc= (cont6 * 100)/ cont;
	
	printf("  \n Porcentaje de aprobadas= %d", porc);
	printf("  \n Promedio del alumno=  %d", prom);
	printf("  \n La nota maxima fue en la %d prueba", contmax);
	printf(" y el valor fue de=  %d" , max);
	printf("  \n La nota minima fue en la %d prueba", contmin);
	printf(" y el valor fue de=  %d" , min);
}
