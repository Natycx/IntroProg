#include <stdio.h>
#include <math.h>

int soma(int x, int y){
    return x + y;
}

int resolucao(){
    int a , b;

    scanf("%d", &a);  // input() + int()
    scanf("%d", &b);  // input() + int()

    int x = soma(a, b);

    printf("X = %d\n", x);

    return 0;
}

int desafio2(){
        double pi = 3.14159, raio;

        scanf("%lf", &raio);

        double area = pi * raio * raio;

        printf("A=%.4lf\n", area);

        return 0;
}

int desafio3(){
    double a, b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    double media = (3.5 * a + 7.5 * b)/11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}

int desafio4(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int SOMA = a + b;
    printf("SOMA = %d\n", SOMA);

    return 0;
}

int desafio5(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int PROD = a * b;

    printf("PROD = %d\n", PROD);


    return 0;
}

int desafio6(){
    double a, b, c, media;

    scanf("%lf %lf %lf", &a, &b, &c);

    media = (a * 2 + b * 3 + c * 5) / 10.0;

    printf("MEDIA = %.1lf\n", media);



    return 0;
}

int desafio7(){

    int a, b, c, d, diferenca;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    diferenca = (a * b - c * d);

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}

int desafio8(){
    int funcionario, horas;
    double valor, salario;

    scanf("%d %d %lf", &funcionario, &horas, &valor);

    salario = horas * valor;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", funcionario, salario);


    return 0;
}

int desafio9(){
    double salario, vendas, total;
    char nome;

    scanf("%s %lf %lf", &nome, &salario, &vendas);

    total = vendas * (15.0 / 100) + salario;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}


int desafio10(){

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);


    // Operadores de comparação em c: >, <, <=, >=, ==, !=
    // Operadores logicos em c: && (and), || (or), !(not)
    // Operadores aritmeticos: +, -, *, /, %

    if (a > b && a > c){
        printf("%d é o maior\n", a);
    } else if (b > c){
        printf("%d é o maior\n", b);

    } else{
        printf("%d eh o maior\n", c);
    }

    return 0;
}

int desafio11(){

    int a, b, c , d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (b > c && d > a && (c + d) > (a + b) && c > 0 && d > 0 && a % 2 == 0 ){
        printf("Valores aceitos\n");

    } else{
        printf("Valores nao aceitos\n");
    }


    return 0;

}

int desagio12(){
    int x = 1;

    while (x <= 100){
        if (x % 2 == 0){
            printf("%d\n", x);
        }

        ++x;       // x += 1;
    }

    // em for
    for (int i = 2; i <= 100; i += 2){
        printf("%d", i);
    }

    return 0;
}

int incremento() {
    int x = 10, y, z;

    y = ++x;

    printf("x = %d, y = %d\n", x, y);

    z = x++;

    printf("x = %d, z = %d\n", x, z);

    return 0;
}

int desafio12(){
    double codigo1, codigo2, quantidade1, quantidade2, valor1, valor2;

    scanf("%lf %lf %lf", &codigo1, &quantidade1, &valor1);
    scanf("%lf %lf %lf", &codigo2, &quantidade2, &valor2);

    double total = (quantidade1 * valor1) + (quantidade2 * valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);


    return 0;
}

int desafio13(){
    double pi = 3.14159, R, total;

    scanf("%lf", &R);

    total = (4/3.0) * pi * (R * R * R);

    printf("VOLUME = %.3lf\n", total);

   return 0;
}

int desafio14(){
    double a, b, c, pi = 3.14159;

    scanf("%lf%lf%lf", &a, &b, &c);

    double triangulo = (a * c) / 2;
    double circulo = pi * (c * c);
    double trapezio = (a + b) * c / 2;
    double quadrado = b *b;
    double retangulo = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);


    return 0;
}

int desafio15(){
    int distancia;
    double litros;

    scanf("%d %lf", &distancia, &litros);

    double total = distancia / litros;

    printf("%.3lf km/l\n", total);


    return 0;
}

int desafio16(){
    int nao_eh_vetor;

    for(int i = 0; i < 10; ++i) {
        scanf("%d", &nao_eh_vetor);

        if (nao_eh_vetor <= 0)
            nao_eh_vetor = 1;

        printf("X[%d] = %d\n", i, nao_eh_vetor);
    }

    return 0;
}

int desafio16_vetor(){
    int n;

    scanf("%d", &n);

    int x[n];

    x[0] = 44;
    x[2] = x[0] * 33;

    for(int i = 0; i < n; ++i){
        scanf("%d", &x[i]);

        if(x[i] <= 0){
            x[i] = 1;
        }
        printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}

int desafio17(){
    int dim = 12, l = 1;
    char t;

    scanf("%d %c", &l, &t);

    double m[dim][dim];

    for(int i = 0; i < dim; ++i) {
        for(int j = 0; j < dim; ++j) {
            //printf("i = %d, j = %d\n", i, j);
            scanf("%lf", &m[i][j]);
        }
    }

    double soma = 0;

    for(int i = 0; i < dim; ++i)
        soma += m[l][i];    // soma = soma + m[l][i]

    if (t == 'M')
        printf("%.1lf\n", soma/dim);
    else
        printf("%.1lf\n", soma);

    return 0;

}

int desafio18(){
    double x1, x2, y1, y2;

    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 -y1, 2));

    printf("%.4lf", distancia);

    return 0;
}

int desafio19(){
    int x;

    scanf("%d", &x);
    int total = x * 2;

    printf("%d minutos", total);

    return 0;
}

int desafio20(){
    double hora, velocidade;

    scanf("%lf%lf",&hora, &velocidade);

    double distancia = hora * velocidade;
    double total = distancia / 12;

    printf("%.3lf", total);


    return 0;
}

int desafio21(){
    int x;

    scanf("%d", &x);

    

    return 0;
}


int main() {
    return desafio20();


}