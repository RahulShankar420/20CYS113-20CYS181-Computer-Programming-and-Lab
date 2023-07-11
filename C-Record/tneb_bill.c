#include<stdio.h>
void main(){
	int n=2,i;
	char name[n][20];
	char eb[n][20];
	int unit[n];
	int cost[n];
	char u_eb;
	int id=7;
	//for the input
	for(i=0;i<n;i++){
		printf("For Consumer %d",i+1);
		printf("Name:");
		scanf("%s",&name[i]);
		printf("EB number:");
		scanf("%s",&eb[i]);
		printf("units:");
		scanf("%d",&unit[i]);
		}
	//calcultion
	for(i=1;i<n;i++){
		if(unit[i]<=100){
		cost[i]=0;
		}
		else if(unit[i]<=400){
		cost[i]=(unit[i]-100)*2.25;
		}
		else if(unit[i]<=500){
		cost[i]=(unit[i]-100)*2.25+(unit[i]-400)*4.5;
		}
		else if(unit[i]<=600){
		cost[i]=(unit[i]-100)*2.25+(unit[i]-400)*4.5+(unit[i]-500)*6;
		}	
		else{
		cost[i]=(unit[i]-100)*2.25+(unit[i]-400)*4.5+(unit[i]-500)*6+(unit[i]-600)*8;
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("Name:%s\n",name[i]);
		printf("EBnumber:%s\n",eb[i]);
		printf("Units:%dunits\n",unit[i]);
		printf("Cost:%drupees\n",cost[i]);
	}
	
}
