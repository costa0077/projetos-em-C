#include <stdio.h>
#include <stdlib.h>
/*
int main()
{

       int numero, cubo;
       do{
           printf("Digite um numero(encerra ao achar m�ltiplo de 7): ");
           scanf("%d", &numero);
           cubo = numero * numero * numero;
           printf("Cubo: %d\n\n", cubo);

       }while (numero % 7 != 0);

    int idade = 0;

    while(idade != -1)
    {
        printf("Digite sua idade para verificar quanto voce ira pagar de plano de saude: ");
        scanf("%d", &idade);
        if(idade <10)
        {
            printf("Voce ira pagar R$ 280\n");
        }
        if(idade >10 && idade <=30)
        {
            printf("Voce ira pagar R$ 250\n");
        }
        if(idade >30 && idade<=60)
        {
            printf("Voce ira pagar R$ 295\n");
        }
        if(idade >60)
        {
            printf("Voce ira pagar R$ 330\n");
        }


    }


    int N;
    // 1. Leitura e valida��o de N
    do
    {
        printf("Informe um N inteiro e positivo: ");
        scanf("%d", &N);
    }
    while (N <= 0);

    // 2. C�lculo da soma
    int soma = 0;
    int contador = 0;
    int num = 2;  // in�cio na sequ�ncia de pares

    while (contador < N)
    {
        if (num % 7 != 0)
        {
            soma += num;
            contador++;
        }
        num += 2;
    }

    // 3. Impress�o do resultado
    printf("Soma dos %d primeiros pares n�o m�ltiplos de 7: %d\n", N, soma);



    int N, soma =0;
    for(int i = 0; i<= n; i++){
        printf("Digite um numero: ");
        scanf("%d", &N);

    }




    int somatorio(int n)
    {
        if(n <= 1)
        {
            return n;
        }
        return n + somatorio(n-1);



    }

    int n =-5;
    printf("A soma dos %d primeiros numeros e %d", n, somatorio(n));






}


    return 0;
}


int fatorial(int n)
{
    if(n >= 1){

        return n * fatorial( n-1);
    }else{
        return 1;
    }
}

int main()
{
    int n = 5;


    printf("O fatorial de %d e %d", n, fatorial(n));



    return 0;
}
int binario(int n){
    if(n == 0){
        return n;
    }else{
        return (n % 2 + 10 * binario(n / 2));
    }


}

int main()
{
    int n = 5;


    printf("O binario de %d e %d", n, binario(n));



    return 0;
}

#include <stdio.h>

// Fun��o recursiva para fatorial
int fatorial(int n)
{
    if (n == 0 || n == 1) return 1;
    return n * fatorial(n - 1);
}

// Fun��o recursiva para calcular E
double calcularE(int n)
{
    if (n == 1) return 1.0;
    return (1.0 / fatorial(n)) + calcularE(n - 1);
}

int main()
{
    int N;

    // Leitura e valida��o
    do
    {
        printf("Digite um valor inteiro positivo (>= 1): ");
        scanf("%d", &N);
    }
    while (N < 1);

    // C�lculo e sa�da
    double E = calcularE(N);
    printf("Valor de E = %.6lf\n", E);

    return 0;
}
*/

int main(){

    int n;
    for(int i = 0; i <=n; i++){
        printf("Digite um numero: ");
        scanf("%d", n);
        printf("%d\n", i);

    }




return 0;
}
