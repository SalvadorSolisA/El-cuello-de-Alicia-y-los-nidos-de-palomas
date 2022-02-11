#include<stdio.h>
/*Autor: Salvador Solis Atenco*/
/*
5
2 3 6 8 9
4
2 7 -7 -1
*/

/*
3
4 5 6
4
1 1 4 2
*/
/*
6
2 3 5 6 8 9
5
1 1 2 1 -3
*/


int main(){
	int i,j;//contadores
	int altura = 1;
	
	int n;//nidos
	scanf("%d",&n);
	int altura_nidos[n];
	for(i = 0; i < n; i++)
		scanf("%d",&altura_nidos[i]);
	
	int m;//deltas de crecimiento
	scanf("%d",&m);
	int deltas_altura[m];
	for(i = 0; i < m; i++)
		scanf("%d",&deltas_altura[i]);
	
	
	//crecimiento
	int nidos = 0;
	for(i = 0; i < m; i++){
		altura += deltas_altura[i];//calcula altura
		
		for(j = 0; j < n; j++){//valida si hay un nido a esa altura
			if(altura_nidos[j] == altura){
				nidos++;//aumenta los nidos vistados
				altura_nidos[j] = 0; //marcar nido como visitado
				j = m;//rompe el ciclo
			}
		}
	}
	
	printf("%d\n",nidos);
	
	
	return 0;
}
