#include<stdio.h>
char lista[4][10]={"Pepe","Paco","Hugo","Luis"};
int ele,a,b,c,d;
int main()
{
	printf("Ingresa la posicion en la lista: ");
	scanf("%li",&ele);
	if(ele==0){
		for(a=0;a<=5;a++)
		{
			printf("%c",lista[0][a]);
		}
	}
	if(ele==1){
		for(b=0;b<=5;b++)
		{
			printf("%c",lista[1][b]);
		}
	}
	if(ele==2){
		for(c=0;c<=5;c++)
		{
			printf("%c",lista[2][c]);
		}
	}
	if(ele==3){
		for(d=0;d<=5;d++)
		{
			printf("%c",lista[3][d]);
		}
	}
	if(ele!=0&&ele!=1&&ele!=2&&ele!=3) printf("El elemento no existe");
}
