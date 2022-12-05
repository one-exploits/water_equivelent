#include <stdio.h>
#define Cu 0.385
#define Fe 0.449
#define Al 0.903
#define H2O 4.84
#define Zn 0.400    

void home();
float water_equi(float specific_h_c,float amount);
int  main()
{
unsigned choice;
float i=0;
home();
printf("\n\n\n\n\t\t\t Enumeration Of Water Equivalent, choose options");	
printf("\n[1] Fe");
printf("\n[2] Cu");
printf("\n[3] Zn");
printf("\n[4] Al");
printf("\n[5] Various Metals Water Equivalent");
printf("\n[6] Exit");
printf("\noption :");
scanf("%d",&choice);

switch(choice){
	case 1:
	     i=10;
		while(1){
		printf("\nWater Equivalent for %.3f g of Fe = %.3f g of water",i,water_equi(Fe,i));	
		system("sleep 0.3");
		i=i+1.123;	
		}
	case 2:
		i=10;
		while(1){
		printf("\nWater Equivalent For %.3f g Of Cu = %.3f g Of Water",i,water_equi(Cu,i));	
		system("sleep 0.3");
		i=i+1.123;
		}
	case 3:
		i=10;
		while(1){
		printf("\nWater Equivalent For %.3f g Of Zn = %.3f g Of Water",i,water_equi(Zn,i));	
		system("sleep 0.3");
		i=i+1.123;
		}
	case 4:
		i=10;
		while(1){
		printf("\nWater Equivalent For %.3f g Of Al = %.3f g Of Water",i,water_equi(Al,i));	
		system("sleep 0.3");
		i=i+1.123;
		}
	case 5:
	    i=10;
	printf("\n+----------------------------------------------+");		
    printf("\n|     Fe     |    Cu    |    Zn    |    Al     |");
	printf("\n+----------------------------------------------+");		

		while(1){
	printf("\n+----------------------------------------------+");		
    printf("\n|   %.3f    |   %.3f   |  %.3f  |  %.3f    | Substance %f.3g",water_equi(Fe,i),water_equi(Cu,i),water_equi(Zn,i),water_equi(Al,i),i);
	printf("\n+----------------------------------------------+");		
		system("sleep 0.3");
		i=i+1.123;
		}	
	
	case 6:
		exit(1);
	default:
		printf("\n[!]Invalid input");
}

float ans=water_equi(Cu,10);
printf("\n%f",ans);		

}
/*
0.385
0.449fe
0.903al
4.184
zn=0.400

*/

void home(){
	printf("\n\n\t\t\t\tW A T E R   E Q U I V A L E N T");
	printf("\n\n");
	printf("+----------------------------------------------+");		
	printf("\n|    substance      |   Specific Heat (j/g°c)  |");
	printf("\n+----------------------------------------------+");		
    printf("\n|\tFe\t    |\t\t0.449\t       |");
	printf("\n+----------------------------------------------+");		
    printf("\n|\tCu\t    |\t\t0.385\t       |");
	printf("\n+----------------------------------------------+");		
    printf("\n|\tZn\t    |\t\t0.400\t       |");
	printf("\n+----------------------------------------------+");		
    printf("\n|\tAl\t    |\t\t0.903\t       |");
    printf("\n+----------------------------------------------+");		
    printf("\n|\tH2O\t    |\t\t4.184\t       |");	
	printf("\n+----------------------------------------------+");
	

		}
		
float water_equi(float specific_h_c,float amount){	
	float we,s_h_water=4.184;
	we=((specific_h_c/s_h_water)*amount);
	return we; 		
}