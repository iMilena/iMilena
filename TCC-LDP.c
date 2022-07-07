#include<stdio.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"portuguese");
int reset,cpf,kwh,cla,t; 
float vkwhr,vkwhc,vkwhi,somai,somac,somar,somai1,somac1,somar1;
int c=0;
int r = 0;
int i =0;
int j =0; 
char nome [40];
// declaração 

printf("Deseja calcular a conta de um usúario ?\n 1- Sim\n 2- Não\n");
scanf("%d",&reset);

	while(reset==1){
system("cls");
printf ("insira o nome do titular:\t ");
scanf("%s",& nome);
printf("\n digite o seu CPF:\t");
scanf("%d",& cpf);
system("cls");
printf ("%s por favor digite o quantidades \nde KWH mensal que você utilizou a energia:", nome);
scanf("%d",&kwh);
printf("Como a propriedade se caracteriza?\n");
printf("1- residencial\n");
printf("2- comercial\n");
printf("3- industrial\n");
scanf("%d",&cla);
// dados por pessoa.

switch(cla){
	case 1://RESIDENCIAL
	r++;
    vkwhr= (kwh*0.4);
    somar = vkwhr + somar;
    somar1 = kwh + somar1;
	break;
	
	case 2:// COMERCIAL
	c++;
    vkwhc=(kwh*0.6);
    somac= vkwhc + somac;
    somac1= kwh + somac1;
	break;
	
	case 3:// INDUSTRIAL
	i++;
    vkwhi=(kwh*0.9);
    somai= vkwhi + somai;
    somai1= kwh + somai1;
    
	break;	
	
} system("cls");
printf("Deseja calcular a conta de um usúario ?\n 1- Sim\n 2- Não\n");
scanf("%d",&reset);

	if(reset==2){
system("cls");
    //custo dos usuarios envolvidos
	printf("Comprovante Geral:\n");
	float somat =somai+somac+somar;
	float somat1 =somai1+somac1+somar1;
	printf("\nCUSTO TOTAL: R$%2.f\n",somat);
	//custo por usuario
	printf("\nCUSTO POR CLASSIFICAÇÃO:\n\n");
	printf("RESIDENCIAL:R$%2.f mensal\n",somar);
	printf("COMECIAL:R$%2.f mensal\n",somac);
	printf("INDUSTRIAL:R$%2.f mensal\n",somai);
    t = i+c+r;
    // medias de cosumo
    float mediag= somat1/t;
    printf("\nMEDIA GERAL DE KWH POR PESSOA:%2.fKWH\n",mediag); 
	float mediar= somar1/r;
	float mediac= somac1/c;
	float mediai= somai1/i;
	printf("\nMEDIA GERAL DE KWH POR CLASSIFICAÇÃO:\n\n");
	printf("RESIDENCIAL:%2.fKWH\n",mediar);
	printf("COMECIAL:%2.fKWH\n",mediac);
	printf("INDUSTRIAL:%2.fKWH\n",mediai);
	}}
	return 0;
}