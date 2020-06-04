#include <stdio.h>


 int main(){
    printf("\nGUILHERME AVELAR MAGALHAES DA SILVA");
    printf("\nguilhermeavelarms@gmail.com");

    printf("\n\n sem parcelas");

    char verduras = 2;
    printf("\n\ncategoria; verduras");
    float alface = 3.80 , couve = 4.53 , totalv , a , b;
    a = alface * 2;
    printf("\nalface: R$%.2f 2un" , a);
    b = couve * 3;
    printf("\ncouve: R$%.2f 3un" , b);
    totalv = a + b;
    printf("\ntotal de verduras: R$%.2f" , totalv);


    char carnes = 2;
    printf("\n\ncategoria; carnes");
    float alcatra = 24.60 , patinho = 21.90 , totalc , c , d;
    c = alcatra * 2;
    printf("\nalcatra: R$%.2f 2kg" , c);
    d = patinho * 3.5;
    printf("\npatinho: R$%.2f 3.5kg" , d);
    totalc = c + d;
    printf("\ntotal de carnes: R$%.2f" , totalc);


    char legumes = 3;
    printf("\n\ncategoria; legumes");
    float cenoura = 3.50 , batata = 4.70 , vagem = 2.80 , totall , e , f , g;
    e = cenoura - 0.8;
    printf("\ncenoura: R$%.2f 0.8kg" , e);
    f = batata * 4.5;
    printf("\nbatata: R$%.2f 4.5kg" , f);
    g = vagem - 0.5;
    printf("\nvagem:R$%.2f 0.5kg" , g);
    totall = e + f +g;
    printf("\ntotal de legumes: R$%.2f" , totall);


    char limpeza = 3;
    printf("\n\ncategoria; limpeza");
    float veja = 8.70 , bombril = 1.80 , limpol = 1.99 , totalx , h , i , j;
    h = veja * 2;
    printf("\nveja: R$%.2f 2un" , h);
    i = bombril * 3;
    printf("\nbombril: R$%.2f 3pct" , i);
    j = limpol * 3;
    printf("\nlimpol:R$%.2f 3un" , j);
    totalx = h + i + j;
    printf("\ntotal de limpeza: R$%.2f" , totalx);

    float total , z , y , x;
    total = verduras + carnes + legumes + limpeza;
    printf("\n\ntotal de itens: %.2f" , total);

    z = totalv + totalc + totall+ totalx;
    printf("\n\nvolor sem desconto: R$%.2f" , z);

    printf("\n\ndesconto: 10.50/");
    printf("\n\nvalor do desconto: 21.21");
    y = z - 21.21;
    printf("\n\nvalor total : R$%.2f" , y);

    printf("\n\n com parcelas");
    printf("\n\nparcelas : 3");

    x = y / 3;
    printf("\n\nvalor parcelado R$%.2f\n\n" , x);

}
