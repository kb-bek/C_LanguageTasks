
/*
1-Code

#include <stdio.h>

int main()
{	
	int num;
	printf("Num: ");
	scanf("%d", &num);
	
	if (num > 100)
		printf("%d Number greater than 100\n", num);
	
	else if (num == 100)
		printf("%d Number is 100\n", num);
	
	else
		printf("%d Number less than 100", num);

	return 0;

}




2 - Code

#include <stdio.h>

int main() {
    float vize, final, ortalama;
    
    printf("Vize > ");
    scanf("%f", &vize);
    
    printf("Final > ");
    scanf("%f", &final);
    
    ortalama = (vize * 0,4) + (final * 0.6);
    
    if (ortalama >= 50) {
        printf("Gectiniz");
    }
    else {
        printf("Gecmediniz");
    }
    

    return 0;
}

3 - Code

#include <stdio.h>

int main() {
    int s1, s2;
    printf("1.Sayiya giriniz > ");
    scanf("%d", &s1);
    
    printf("2.Sayiya giriniz > ");
    scanf("%d", &s2);
    
    if (s1 > s2){
    	printf("1.sayi 2.sayidan buyuk");
    }
    else {
    	printf("2.sayi 1.sayidan kucuk");
    }
    

    return 0;
}


4 - Code
#include <stdio.h>

int main() {
    int gun;
    
    printf("Gunu yaziniz > ");
    scanf("%d", &gun);
    
    if(gun == 1) {
        printf("Pazartesi");
    }
    else if (gun == 2) {
        printf("Sali");
    }
    else if (gun == 3) {
        printf("Carsamba");
    }
    else if (gun == 4){
        printf("Persembe");
    }
    else if (gun == 5){
        printf("Cuma");
    }
    else if (gun == 6){
        printf("Cumartesi");   
    }
    else if (gun == 7){
        printf("Pazar");    
    }
    
    else{
        printf("Sadece 7ye kadar sayi yaziniz");   
    }
        
    
    
    return 0;
}



5 - Code

#include <stdio.h>


int main(){

	int sayi;
	
	printf("Sayi yaziniz > ");
	scanf("%d", &sayi);
			
	if(sayi % 2 == 0){	
		printf("cift");
	}
	else {
		printf("tek);
	}


	return 0;

}


6 - code

#include <stdio.h>

int main(){

	float s;
	
	printf("Sayi yaziniz> ");
	scanf("%f", &s);
	
	if(s > 0){
		printf("positif");
	}
	else if (s == 0) {
		printf("sayi 0 esit");
	}
	
	else {
		printf("negatif");
	}
	
	return 0;
	
}


7 - Code 


#include <stdio.h>

int main(){
	int s;
	
	printf("Sayi yaziniz > ");
	scanf("%d", &s);
	
	if (s % 5 == 0 && s % 11 == 0) {
		printf("sayi 5e ve 11e bolunur");
	}
	
	else{
		printf("sayi 5e ve 11e bolunmez");
	}
	
	return 0;


}

code-8
#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("sayi> ");
            scanf("%d", &a[i][j]);
            
        }
        printf("\n");
    }
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf(" %d", a[i][j]);
            
        }
        printf("\n");
    }
    

    return 0;
}


Iki matrisenin toplami

#include <stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j;
    
    printf("Birinci matrise\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[%d][%d] elemani giriniz > ", i, j);
            scanf("%d", &a[i][j]);
        }
        
        printf("\n");
    }
    
    printf("Ikinci matrise\n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[%d][%d] elemani giriniz> ", i, j);
            scanf("%d", &b[i][j]);
        }
        
        printf("\n");
    }
    
    
    printf("Iki matrisenin toplami\n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            
            c[i][j] = a[i][j] + b[i][j];
            printf("  %d",  c[i][j]);
        }
        
        printf("\n");
    }
    
    

    return 0;
}







#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, tpl_str=0, tpl_stn=0, a[5][5];
    srand(time(NULL));
    
    
    
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            a[i][j] = rand() % 10;
            printf("  %d", a[i][j]);
        }
            
        printf("\n");
    }
    
    printf("\nSatirlarin toplami\n\n");
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            tpl_str += a[i][j];
        }
        printf("%d.satirin toplami = %d\n", i+1, tpl_str); 
        tpl_str = 0;
        
        
    }#include <iostream>

using namespace std;

int main()
{
    int a [10] = {23, -32, 43, -2, 44, -36, 14, 87, -12, 98};
    int i;
    for (i=0; i<10; i++){
        if (a[i] > 0) {
            cout<<a[i]<<"\n";
            
        }
    }

    return 0;
}
    

    printf("\nSutunlarin toplami\n\n");
    
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            tpl_stn += a[j][i];
        }
        printf("%d.sutunun toplami = %d\n", i+1, tpl_stn); 
        tpl_stn = 0;
        
        
    }
    

    
    

    return 0;
}



ODEV №1

#include <stdio.h>

int hesaplama(int v, int f){
    int ortalama = (v*0.4)+(f*0.6);
    if (ortalama > 50){
        printf("Basarili");
    }
    else{
        printf("Basarisiz");
    }
}
int main()
{
    hesaplama(70,70);
    return 0;
}



ODEV №2

#include <stdio.h>

int toplam(int num){
    int i, toplam=0;
    for (i=0; i<=num; i++){
        toplam+=i;
    }    
    
    return toplam;
}

int main(){
    int s;
    printf("Sayi giriniz > ");
    scanf("%d", &s);
    
    printf("%d", toplam(s));
    
    return 0;
}




**************************

#include <stdio.h>
int fak(int s){
    if (s==0) return 1;
    return s*fak(s-1);
}

int main(){
    int num;
    scanf("%d", &num);
    
    int k = fak(num);
    printf("%d", num);
}


************************


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10];
    int i;
    srand(time(NULL));
    int *p=dizi;
    int *p1 = &dizi[0];
    
    printf("Dizinin basl.adresi = %d\n", p);
    
    for (i=0; i<10; i++){
        printf("Dizinin %d.adresi:%#x\n", i, p+i);
        *(p+i) = rand()%100;
        printf("Ve Degeri: %d\n", *(p+));
    }
    

    return 0;
}


*/

