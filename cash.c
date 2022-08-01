#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void){
    
float reais;

do {
    float coin = get_float("Qual o valor da compra: ");
    reais = round (coin * 100);
}

while (reais < 0 );


int total = reais;
int contador = 0;

while (total > 0){
    
    if (total >= 25){
        total = total - 25;
        contador++;
    }
    
    else if (total >= 10)
    {
        total = total - 10;
        contador ++;
    }
    
    else if (total == 5 && total > 1)
    {
        total = total - 5;
        contador++;
    }
    
    else{
        total = total - 1;
        contador++;
    }
}
printf("%d\n", contador);
}

