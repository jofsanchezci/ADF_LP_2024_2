#include <stdio.h>
#include <conio.h>
#include <string.h>
#define fl(i,a,b) for(i=a; i<b; i++)
#define scan(a) scanf("%d", &a)
#define leer(a) fscanf(archivo, "%d", &a)
#define leers(a) fscanf(archivo, "%s", a)
#define leerc(a) fgets(a, 1000, archCadenas)
#define nline printf("\n")
#define MAX 1000

int AFDomision(){
	
int states, symdir[20], estados_de_aceptacion, mark[20], mat[20][127];
char symbols[50]; // hasta 50 simbolos
char cadena[20];  // Cadena de maximo 20 simbolos

char fileName[256] = "adefault1.txt";
char stringsFileName[256] = "cadenasdefault1.txt";

FILE *archivo = NULL;
FILE *archCadenas = NULL;

archivo = fopen(fileName, "rt");
archCadenas = fopen(stringsFileName, "rt")	 ;
int i, j, n; 
leers(symbols);   
    n = strlen(symbols);
    fl(i,0,n) {
        symdir[i] = (int) symbols[i];
    }  

    // Primero leemos del archivo el numero de estados
    leer(states);

    // Ahora vamos por los estados de aceptaci�n
    leer(estados_de_aceptacion); 

    fl(i,0,estados_de_aceptacion) {

        int temp;

        leer(temp);

        mark[temp]=1;
    }

    
    //Defina Delta

    fl(i,0,states) {

        fl(j,0,n) {

            leer(mat[i][symdir[j]]);
            //printf("%d -> %c -> %d\n", i, symdir[j], mat[i][symdir[j]]);

        }

    }

    //--------------------------------------------------------//

    char str1[MAX];

    while(leerc(str1) != NULL) {

        int curr=0;

        int limit= strlen(str1) - 1;

        fl(i,0,limit) {

            if (strchr(symbols,str1[i]) == NULL) {
                printf("ERROR! En la cadena %s, %c no es un elemento del alfabeto\n", str1, str1[i]);
                curr = -1;
                break;
            }

            int ele=(int)(str1[i]);

            curr=mat[curr][ele];

            if (curr == -1) {
                printf("ERROR! Regla invalida!\n");
                break;
            }
        } 

        if (curr != -1) {


            if(mark[curr]==1)
            
				
                printf("La cadena %s es ACEPTADA ", (str1) );

            else

                printf("La cadena %s es RECHAZADA ", (str1));

            nline;
        }
    }

    
    return 0;

}
int AFDmanual(){
	printf("Automata de ingreso manual\n");
   

	int states, symbols, symdir[20], final_states, mark[20], mat[20][20];
  

    int i, j, k;

    printf("Ingrese el numero de estados : ");

    scan(states);

    printf("Ingrese el numero de simbolos : ");

    scan(symbols);
    char A[symbols];

    printf("Ingrese los simbolos: ");

    nline;

    fl(i,0,symbols)

    {

        printf("Ingrese el simbolo n�mero %d : ", i);

        scanf("%s",&A[i]);
        symdir[i]=i;
  
    }


		
    printf("Ingrese el numero de estado(s) de aceptacion : ");

    scan(final_states);

    printf("Ingrese el estado de aceptacion : ");

    fl(i,0,final_states)

    {

        int temp;

        scan(temp);

        mark[temp]=1;

    }

    
    printf("Defina delta: ");

    nline;

	

 fl(i,0,states)

        {

        		              	

    fl(j,0,symbols)

    {

            printf("Defina la relacion entre  el estado delta (%d, %c) = ", i,  A[j]);

            scan(mat[i][symdir[j]]);

        }

    }

    
    //--------------------------------------------------------//

while (i!=1)
    {

        printf("Ingrese las cadenas soluci�n : ");

    	char str1[MAX];
    	char str2[MAX];


        scanf("%s", & str1);

        

        int limit= strlen(str1);
        int limit2 =strlen(A);

        fl(i,0,limit)
        {
        	fl(j,0,limit2){
        		
	        	if(str1[i]==A[j]){
				str2[i]=j;
					
				}
				
			}
        	
		}

		int curr=0;

        fl(i,0,limit)

        {
            int ele=(int)(str2[i]);

            curr=mat[curr][ele];

        }

        //printf("la cadena ingresada es ");

        if(mark[curr]==1)

            printf("Verdadera");

        else

            printf("Falsa");

        nline;

    }
return 0;

}
int AFDautomatacadena(){

}


