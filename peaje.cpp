#include <stdio.h>
#include <stdlib.h>
	
	int calculoImporte(int dia, int horario, int valorBase){
		float importe = valorBase;

	if ((dia >= 1 && dia <= 5) && horario == 'a') {
        importe *= 1.2; 
    } else if ((dia >= 1 && dia <= 5) && horario == 'b') {
        importe *= 0.8; 
    } else {
        importe *= 0.8; 
    }
	return (int) importe;
}
	int calcularCambio(int importeCobrado, int importeCobrar){
		return importeCobrado - importeCobrar;
	}
	
	void limpiarPantallaMostrar(int importeCobrar, int cambio){
		system("cls||clear");
		printf("El importe a cobrar es: %d \n", importeCobrar);
		printf("Su vuelto es: %d \n",cambio);
	}
	
int main (){
	int importeCobrar, importeCobrado, dia, cambio;
	int autosPico = 0;
	int totalPases=0;
	int totalRecaud=0;
	char categoria, horario, continuar;
	
	do{
	printf("Vehiculo m (moto), a (auto), c (camioneta), t (camion): \n");
	scanf("%c",&categoria);
	printf("Ingrese dia se la semana: ");
	scanf("%i",&dia);
	printf("Ingrese importe entregado por el conductor: ");
	scanf("%i",&importeCobrado);
	printf("Ingrese horario a (pico) b (no pico): ");
	scanf(" %c",&horario);
	
	switch (categoria) {
            case 'm':
                importeCobrar = calculoImporte(dia, horario, 5);
                break;
            case 'a':
                importeCobrar = calculoImporte(dia, horario, 10);
                autosPico++;
                break;
            case 'c':
                importeCobrar = calculoImporte(dia, horario, 15);
                break;
            case 't':
                importeCobrar = calculoImporte(dia, horario, 20);
                break;
            default:
                printf("Categoría de vehículo no válida\n");
                return 1;
        }
	cambio = calcularCambio(importeCobrado, importeCobrar);
    limpiarPantallaMostrar(importeCobrar, cambio);
	totalRecaud += importeCobrar;
	totalPases++;
	
		printf("Desea hacer otra venta? s/n: ");
		scanf(" %c", &continuar);
		fflush(stdin);
	} while(continuar == 's');
	printf("Cantidad de ventas categoria auto en horario pico: %i \n ",autosPico);
	printf("Total de pases vendidos: %i \n",totalPases);
	printf("Total recaudado: %d \n",totalRecaud);
	return 0;
}
