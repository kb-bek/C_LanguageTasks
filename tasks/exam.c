#include <stdio.h>

int main() {
    float vize, final, mid;
    
    printf("Vize > ");
    scanf("%f", &vize);
    
    printf("Final > ");
    scanf("%f", &final);
    
    mid = (vize * 0,4) + (final * 0.6);
    
    if (mid >= 50) {
        printf("Gectiniz");
    }
    else {
        printf("Gecmediniz");
    }
    

    return 0;
}
