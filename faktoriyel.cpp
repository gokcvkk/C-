#include <stdio.h>
 
main()
{
    int faktoriyel = 1; 
    int sayi;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(int i = 1; i <= sayi; i++)
    {
        faktoriyel *= i;                                      
    }
    printf("%d != %d",sayi, faktoriyel);
}
