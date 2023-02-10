int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j;
    
    printf("First matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[%d][%d] Enter a elements > ", i, j);
            scanf("%d", &a[i][j]);
        }
        
        printf("\n");
    }
    
    printf("Second matrix\n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("[%d][%d] Enter a elements > ", i, j);
            scanf("%d", &b[i][j]);
        }
        
        printf("\n");
    }
    
    
    printf("Sum of two matrixs\n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            
            c[i][j] = a[i][j] + b[i][j];
            printf("  %d",  c[i][j]);
        }
        
        printf("\n");
    }
    
    

    return 0;
}
