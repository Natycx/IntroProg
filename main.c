#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

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
    int x, h, m, s;

    scanf("%d", &x);

    h = x /3600;
    x-= h * 3600;
    m = x / 60;
    x -= m * 60;

    printf("%d:%d:%d\n", h, m, x);

    return 0;
}

int desafio22(){

    int x, y;
    double tabela[5] = {4.00, 4.50, 5.00, 2.00, 1.50};

    scanf("%d%d", &x, &y);

    double total = tabela[x - 1] * y;

    printf("Total: R$ %.2lf", total);

    return 0;
}

int desafio23(){
    double x,y;

    scanf("%lf%lf", &x, &y);

    if(x == 0 && y == 0){
        printf("Origem");
    } else if(x > 0 && y > 0){
        printf("Q1");
    } else if(x < 0 && y > 0){
        printf("Q2");
    } else if (x < 0 && y < 0){
        printf("Q3");
    } else{
        printf("Q4");
    }


    return 0;
}

int desafio24(){
    double x, y;
    int total = 0;

    scanf("%lf", &x);

    for(int i = 0; i < x; ++i){
        scanf("%lf", &y);
        if(y > 0){
            total += 1;
        }
    }
    printf("%d valores positivos\n", total);

    return 0;
}

int desafio25(){
    double x, y;
    int total = 0;
    double media = 0;

    scanf("%lf", &x);

    for(int i = 0; i < x; ++i){
        scanf("%lf", &y);
        if(y > 0){
            total += 1;
            media += y;
        }
    }
    double resultado = media / total;
    printf("%d valores positivos\n", total);
    printf("%.1lf\n", resultado);

    return 0;
}

int desafio26(){
    int x, total = 0;

    for(int i = 0; i < 5; ++i){
        scanf("%d", &x);
        if(x % 2 == 0){
            total += 1;
        }
    }
    printf("%d valores pares\n", total);

    return 0;
}

int desafio27(){
    int x, pares = 0, impares =0, positivo = 0, negativo =0;

    for(int i = 0; i < 5; ++i){
        scanf("%d", &x);

        if(x % 2 == 0){
            pares += 1;
        } else {
            impares += 1;
        }
        if(x > 0){
            positivo += 1;
        } else if(x < 0){
            negativo += 1;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}

int desafio28(){
    int x = 0, y;

    while (x < 1 || x > 1000){
        scanf("%d", &y);
        x += y;
    }
    for(int i =0; i <= x; ++i){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }


    return 0;
}

int desafio29(){
    int x;

    scanf("%d", &x);

    int contador = 0;
    while (contador < 6){
        if(x % 2 != 0){
            printf("%d\n", x);
            contador += 1;
        }
        x += 1;
    }


    return 0;
}

int desafio30(){
    int x, y;

    scanf("%d%d", &x, &y);

    int soma = 0;

    for(int i = x; i < y; ++i){
        if(i%2!=0){
            soma += i;
        }
    }

    printf("%d", soma);

    return 0;
}

int desafio31(){
    int n;

    scanf("%d", &n);
    int y, in = 0, out = 0;

    for(int i = 0; i < n; ++i){
        scanf("%d", &y);
        if(y >= 10 && y <= 20){
            in += 1;
        } else{
            out += 1;
        }

    }
    printf("%d in\n%d out", in, out);

    return 0;
}

int desafio32(){
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            int pot = i * i;
            printf("%d^2 = %d\n", i, pot);
        }
    }

    return 0;
}

int desafio33(){
    int n;
    scanf("%d", &n);

    int p, q;
    char c;

    scanf("%d %c%d", &p, &c, &q);

    int r;

    if (c == '+')
        r = p + q;
    else
        r = p * q;

    if (r > n)
        printf("OVERFLOW\n");
    else
        puts("OK");

    return 0;
}


int desafio34(){
    char uma_jogada[8] = "tesoura";

    char uma_regra[2][8] = {"tesoura", "papel"};

    char regras[10][2][8] = {
            {"tesoura", "papel"},
            {"papel", "pedra"},
            {"pedra", "lagarto"},
            {"lagarto", "Spock"},
            {"Spock", "tesoura"},
            {"tesoura", "lagarto"},
            {"lagarto", "papel"},
            {"papel", "Spock"},
            {"Spock", "pedra"},
            {"pedra", "tesoura"},
    };

    int t;

    scanf("%d", &t);

    char sheldon[8] = "xyz", raj[8] = "abc";

    for(int i = 0; i < t; ++i) {
        printf("Caso #%d: ", i+1);

        scanf("%s%s", sheldon, raj);

        if (strcmp(sheldon, raj) == 0) {
            puts("De novo!");
            continue;
        }

        int sheldon_ganhou = 0;

        for(int j = 0; j < 10; ++j)
            if (strcmp(sheldon, regras[j][0]) == 0 && strcmp(raj, regras[j][1]) == 0)
                sheldon_ganhou = 1;

        if (sheldon_ganhou)
            puts("Bazinga!");
        else
            puts("Raj trapaceou!");
    }

    return 0;
}
int numero_leds(char d) {

    int numleds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    return numleds[d - '0'];
}
int num_leds(char d){
    if(d == '1'){
        return 2;
    }
    if(d == '2'){
        return 5;
    }
    if(d == '3'){
        return 5;
    }
    if(d == '4'){
        return 4;
    }
    if(d == '5'){
        return 5;
    }
    if(d == '6'){
        return 6;
    }
    if(d == '7'){
        return 3;
    }
    if(d == '8'){
        return 7;
    }
    if(d == '9'){
        return 6;
    }

    return 6;
}


int desafio1168(){
    char x[] = "abc123";
    printf("%s\n", x);
    printf("%c %c\n", x[0], x[3]);
    printf("%d %d\n", x[0], x[3]);

    for(int i = 0; x[i] != '\0'; ++i){
        printf("%c %d\n", x[i], x[i]);
    }

    int n;

    scanf("%d", &n);

    char num[102];

    for(int i =0; i < n; ++i){
        scanf("%s", num);

        int total = 0;
        int total_len = strlen(num);

        for(int j = 0; total_len != '\0' ; ++j){
            char digito = num[j];
            total += numero_leds(num[j]);
        }
        printf("%d leds", total);
    }

    return 0;
}


int desafio1024(){
    int n, tam;
    char str[1123], inversao[1123];

    scanf("%d%*c", &n);

    for(int i = 0; i < n; ++i) {
        fgets(str, 1123, stdin);

        int len = 0;

        for (int j = 0; str[j] != '\n' && str[j] != '\0'; ++j) {
            //if((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z')){
            len++;
            if (isalpha(str[j]))
                str[j] += 3;
        }

        for (int j = 0; j < len; ++j) {
            inversao[len - 1 - j] = str[j];
        }
        inversao[len] = '\0';
        for(int j = len/2; inversao[j]; ++j)
            --inversao[j];
        printf("%s\n", inversao);
    }

    return 0;
}

int desafio1173(){
    int n, vetor[10];

    scanf("%d", &n);

    for(int i = 0; i < 10; ++i){
        vetor[i] = n;
        printf("N[%d] = %d\n", i, vetor[i]);
        n *= 2;

    }

    return 0;
}

int exemplos_entradas(){
    char nome_completo[101];
    //scanf("%[3A-Za-z ]", nome_completo);

    for(;;)//white(1) equivale ao while true de python{
        if(scanf(" %[^\n]%*c", nome_completo) == EOF){
            break;
        }
        //if(fgets(nome_completo, 101, stdin) == NULL){
            //break;
        //}

        //int len = strlen(nome_completo);
        //nome_completo[len - 1] = '\0';
        printf("O nome lido e: %s", nome_completo);
        printf("");
        // ctrl + d fim de arquivo

    return 0;
}

int desafio1253(){
    int testes, deslocamento;
    int i, j;

    scanf("%d", &testes);

    for (i = 0; i < testes; i++)
    {
        char palavra[50], letra;
        scanf("%s", palavra);
        scanf("%d", &deslocamento);

        for (j = 0; j < strlen(palavra); j++)
        {
            if (palavra[j] - deslocamento < 'A')
            {
                letra = '[' - (deslocamento - (palavra[j] - 'A'));
                printf("%c", letra);
            }
            else
            {
                letra = palavra[j] - deslocamento;
                printf("%c", letra);
            }
        }
        printf("\n");
    }
    return 0;
}

int desafio1120(){
    char number[102], digit;

    for(;;){
        scanf("%c%*c", &digit);

        fgets(number, 102, stdin);

        int len = strlen(number);

        if(number[len - 1] == '\n'){
            number[len - 1] = '\0';
            --len;
        }
        if(strcmp(number, "0") == 0 && digit == '0'){
            break;
        }
        for(int i =0; i < len; i++){
            if(number[i] == digit){
                for(int j = i; j < len; j++){
                    number[j] = number[j + 1];
                }
                len--;
                i--;
            }
        }
        len = strlen(number);
        for(int i = 0; number[i] == '0'; ++i){
            if(number[i] == '0'){
                for(int j = i; j < len; j++){
                    number[j] = number[j + 1];
                }
                len--;
                i--;
            }
        }
        if(strcmp(number, "") == 0){
            printf("0\n");
        } else{
            printf("%s\n", number);
        }
    }



    return 0;
}

int aula15_12_21(){
    //int x = 5;

    //for(int i = 0; i <= 10; ++i){
        //printf("5 * (2 ** %d) = %d\n", i, 5 << i); // shift left
    //}
    //for(int i = 0; i <= 10; ++i){
        //printf("123 / (2 ** %d) = %d\n", i , 123 >> i); // shift right
    //}
    //printf("%d %d %d\n", 12 & 5, 12 | 5, 12 ^ 5);
    /*
    int n;
    scanf("%d", &n);

    if((n & 1) == 1){
        puts("Impar");
    } else
        puts("Par");

    int nbits;

    for(int i = 0;; ++i){
        if((n >> i) == 0){
            nbits = i;
            break;
        }
    }
    printf("O numero possui %d bits\n", nbits);

    char bits[nbits + 1];
    bits[nbits] = '\0';

    for(int i = 0; i < nbits; ++i){
        int n_linha = n >> i;
        bits[nbits - 1 - i] = '0' + (n_linha & 1);


        if((n_linha & 1) == 0){

        } else{

    }

    }
    puts(bits);


    char bits[31];

    scanf("%s", bits);
    int len = strlen(bits);

    int resultado = 0;

    for(int i = 0; i < len; ++i){
        int bit = bits[i] - '0';

        resultado += bit * (1<< (len - 1 -i));
    }
    printf("%d\n", resultado);
     */

    int x = 2147483647;

    printf("%d %d", x, x+1);

    return 0;
}

int desafio1018(){
    int n;

    scanf("%d", &n);

    int nota100 = n / 100;
    int resto = n % 100;
    int nota50 = resto / 50;
    int resto2 = resto % 50;
    int nota20 = resto2 / 20;
    int resto3 = resto2 % 20;
    int nota10 = resto3 / 10;
    int resto4 = resto3 % 10;
    int nota5 = resto4 / 5;
    int resto5 = resto4 % 5;
    int nota2 = resto5 / 2;
    int resto6 = resto5 % 2;
    int nota1 = resto6;


    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);


    return 0;
}

int desafio1020(){
    int n;

    scanf("%d", &n);

    int ano = n / 365;
    int resto1 = n % 365;
    int mes = resto1 / 30;
    int dias = resto1 % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);


    return 0;
}

int aula24_12(){
    int x = -2147483647;
    int y = x + 1;

    printf("%d %d \n", x, y);

    int tamanho;
    char num[33];

    for(tamanho = 0;(x >> tamanho) != 0; ++tamanho){
        printf("%d: %d\n", tamanho, (x >> tamanho));
        num[tamanho] = '0' + ((x >> tamanho) & 1);
    }
    for(int j = 0; j < tamanho; ++j){
        printf("%c", num[tamanho - j - 1]);
    }
    printf("\nTamanho: %d\n", tamanho);

    return 0;


}

int aula24_12_21(){
    /*
    char a[] = "12341234123412341234123412341234123412341234123412341234123412341234123412341234123412341234123412341234123412341234123412341234";
    char b[] = "01230123012301230123012301230123012301230123012301230123012301230123012301230123012301230123012301230123012301230123012301230123";
    char c[130];
    for(int i = 0; i < 128; ++i){
        c[i] = (a[i] - '0') + (b[i] - '0') + '0';
    }

    c[128] = '\0';
    puts(c);

    unsigned int x = 1 << 31; // Valores entre 0 e 2**32 -1

    printf("%u\n", x);

    long long int y = 1ll << 62; //64 bit(1 bit pra sinal, 63 pro valor) Aceita valores que vão de -2**63 até 2**63 - 1

    printf("%lld\n", y);

    unsigned long long int z = 1ull << 63; // 64 bits (64 pro valor) valores de 0 a 2**64-1

    printf("%llu", z);
    */
    short int s = 1<< 15 -1; // só tem 16 bits (1 pro sinal, 15 para valor) valores -2**15 a 2**15 -1

    printf("%d\n", s);

    char t = (1 << 7) - 1; // 8 bits (1 pra sinal, 7 para valor) valores -2**7 a 2**7 - 1

    return 0;
}

int aula_27_12(){
    int a;
    long long b = 123456789123545ll;
    double c;
    char d;

    printf("a: %lu %p\n", sizeof(a), &a);
    printf("b: %lu %p\n", sizeof(b), &b);
    printf("c: %lu %p\n", sizeof(c), &c);
    printf("d: %lu %p\n", sizeof(d), &d);

    //scanf("%d", &a);

    char e[10];

    printf("e: %lu %p\n", sizeof(e), e);
    printf("e[0]: %lu %p\n", sizeof(e[0]), &e[0]);
    printf("e[1]: %lu %p\n", sizeof(e[1]), &e[1]);
    printf("e[2]: %lu %p\n", sizeof(e[2]), &e[2]);

    printf("e[90]: %lu %p\n", sizeof(e[90]), &e[90]);

    //scanf("%d %s", %a, e);

    e[99] = 111;

    int *pa = &a;
    // ruim: int xa = &a;

    a = 22;

    scanf("%d", pa);

    printf("a: %d %d\n", a, *pa);

    /*vao dar ruim
     int *x = (int *) 0x12345;
     printf("%d\n", *x);
     */

    /* vai da ruim
     pa = (int *) &b;
     printf("%d\n", *pa);
     
     */



    return 0;
}


void produtoInterno(int *a, int *b, int *c, int tamanho){

    for(int i =0; i< tamanho; ++i){
        c[i] = a[i] * b[i];

    }

}

void somaVetorial(int *a, int *b, int *c, int tamanho){

    for(int i =0; i< tamanho; ++i){
        c[i] = a[i] + b[i];

    }

}

void operacaoXVetorial(int *a, int *b, int *c, int tamanho){

    for(int i =0; i< tamanho; ++i){
        c[i] = (a[i] - b[i]) * (a[i] + b[i]);

    }

}

int prod2(int a, int b){
    return a*b;
}

int soma2(int a, int b){
    return a+b;
}

int operacaoX(int a, int b){
    return (a+b) * (a+b);
}

int operacaoY(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

void operacaoVetorialGenerica(int *a, int *b, int *c, int tamanho,int operacao(int , int)){

    for(int i =0; i< tamanho; ++i){
        c[i] = operacao(a[i], b[i]);

    }

}

int aula_29_12_21(){
    int x[3] = {1,2,3}, y[3] = {4, 5, -6}, z[3];

    operacaoVetorialGenerica(x,y,z,3, prod2);  //produtoInterno(x,y,z,3);

    printf("%d %d %d\n", z[0], z[1], z[2]);

    operacaoVetorialGenerica(x,y,z,3, soma2);   //  somaVetorial(x,y,z,3);

    printf("%d %d %d\n", z[0], z[1],z[2]);

    operacaoVetorialGenerica(x,y,z,3,operacaoX); // operacaoXVetorial(x,y,z,3);

    printf("%d %d %d\n", z[0], z[1],z[2]);

    operacaoVetorialGenerica(x,y,z,3,operacaoY);

    printf("%d %d %d\n", z[0], z[1],z[2]);


    return 0;
}

int aula_29_12_21_parte_2(){
    int a[3] = {1, 2, 3};
    double x[3] = {48974894489.5, 6.7, 8.9};

    int *pa = a;
    double *px = x;

    printf("%d %lf\n", *pa, *px);

    pa = x;

    printf("%d %lf\n", pa, px);
    printf("%d %lf\n", *pa, *px);

    void *p = x;

    // Não funciona: printf("%lf\n", *p);

    px = p;
    printf("%lf\n", *px);

    printf("%lf\n", *((double *)p));

    printf("%p\n", ((int *)p));
    printf("%p\n", ((double *)p));
    printf("%p\n", ((char *)p));


    return 0;
}

int criterioOrdenacao(const void *x, const void *y){
   //Se a ordem correta for primeiro o a e depois o b, retorna qualquer valor negativo
   //Se a ordem correta for primeiro o a e depois o a, retorna qualquer valor positivo
    //Se a ordem correta for tanto faz pois a e b são equivalentes, retorna 0

    //printf("%p %p\n", x, y);

    int a = *((const int *)x), b = *((const int *)y);


    if(a < b){
        return -1;
    }
    if(a > b){
        return 1;
    }

    return 0;

}

int ordemDecrescente(const void  *x, const void *y){
    int a = *((const int *)x), b = *((const int  *)y);
    if(a < b){
        return -1;
    }
    if(a > b){
        return 1;
    }

    return 0;

}

int funcaoQsort(){
    int a[10] = {1,3,5,7,9,0,8,6,4,2};

    for(int i = 0; i< 10; ++i){
        printf("%d: %p\n", i &a[i]);
    }
    puts("------------------");

    qsort(a, 10, 4, criterioOrdenacao);

    for(int i = 0; i < 10; ++i){
        printf("%d: %d\n", i, a[i]);
    }
    puts("-----------------");

    qsort(a, 10, 4, ordemDecrescente);

    for(int i = 0; i < 10; ++i){
        printf("%d: %d\n", i, a[i]);
    }


    return 0;
}

int ordem(const void*x, const void*y){
    int a = *((const int*)x), b = *((const int*)y);
    if(a<b)
        return -1;
    if(a>b)
        return 1;
    return 0;
}


int problema2445(){
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
    }

    qsort(v,n,4,ordem);
    for(;n>2;){
        int soma=0;
        for (int j = 0; j<n; ++j){
            soma +=v[j];
        }
        if(v[n-1]>=soma){
            --n;
        } else{
            printf("%d\n",n);
            return 0;
        }
    }
    if(n == 2){
        printf("0\n");
    }

    return 0;
}

int problema1259(){
    int n;
    int vet[n];
    scanf("%d", &n);
    for(int i = 0; i < n;++i){

        scanf("%d", &vet[i]);
    }
    qsort(vet,n,sizeof(int),ordem);
    for (int i = 0; i < n; ++i) {
        printf("%d", vet[i]);
    }


    return 0;
}

int problema1171(){
    int n, vect[n], vectOld[n];

    scanf("%d", &n);

    for(int i = 0; i< n; ++i){
        scanf("%d", &vect[i]);
    }
    for(int j = 0; j< n; ++j){
        vectOld[j]= vect[j];
    }

    qsort(vect,n,sizeof(int),ordem);

    for(int k = 0; k< n; ++k){
        printf("%d\n", vect[k]);
    }
    puts("");

    for(int l = 0; l< n; ++l){
        printf("%d\n", vectOld[l]);
    }


    return 0;
}

/*#include <stdio.h>
#include <math.h>

int main (){

  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a <= b && b <= c){
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
  }
  else{

    if (a <= c && c <= b){
      printf("%d\n", a);
      printf("%d\n", c);
      printf("%d\n", b);
    }
    else{

      if (b <= a && a <= c){
        printf("%d\n", b);
        printf("%d\n", a);
        printf("%d\n", c);
      }
      else{

        if (b <= c && c <= a){
          printf("%d\n", b);
          printf("%d\n", c);
          printf("%d\n", a);
        }
        else{

          if (c <= a && a <= b){
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
          }
          else{
            if (a == b && b == c){
              printf("%d\n", a);
              printf("%d\n", b);
              printf("%d\n", c);
            }
            else{
              printf("%d\n", c);
              printf("%d\n", b);
              printf("%d\n", a);
            }
          }
        }
      }
    }

}
  printf("\n");
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
}
*/

int problema1023(){
    int n, x[10], y[200],mediaCasa[n];
    double consutotal = 0, consumopessoa = 0, media = 0;
    for(;;){
        scanf("%d", &n);
        if(n == 0){
            break;
        }else{
            for(int i = 0; i< n; ++i){
                scanf("%d %d", &x[i], &y[i]);
                mediaCasa[i] = (y[i] / x[i]);

            }
            for(int i = 0; i< n;++i){
                consutotal += y[i];
            }
            for(int i = 0; i<n; ++i){
                consumopessoa += x[i];
            }

            media = consutotal/consumopessoa;

            printf("%lf\n", media);
            printf("%lf %lf\n", consumopessoa, consutotal);

        }
    }

    return 0;
}


int teste(){
    char text[100];
    int textaux[100];
    int ascii[255];
    int n;

    gets(text);

    //char *pont = text

    for(int i = 0; i<255; ++i){
        ascii[i] = 0;
    }
    for(int i = 0; i<strlen(text); ++i){
        textaux[i] = text[i];
    }
    for(int i = 0; i< strlen(text); ++i){
        if(textaux[i] != 32){
            ascii[textaux[i]]++;
        }
    }

    for(int i=0; i<255;++i){
        if(ascii[i]>=1){
            printf("\nA letra %c repetiu %d vezes na frase que voce escreveu!\n", i, ascii[i]);
        }
    }

    return 0;
}



int desafiovjud()
{
    int A, B, C;

    for(;;){
        scanf("%d %d %d", &A,&B,&C);
        if(A>=0 && A<=100 && B>=0 && B<=100 && C>=0 && C<=100){
            break;
        }
    }
    if(A == 5 && B == 7 && C == 5){
        puts("YES");
    }else if(A == 5 && B == 5 && C == 7){
        puts("YES");
    }else if(A == 7 && B == 5 && C == 5){
        puts("YES");
    }else{
        puts("NO");
    }

    return 0;
}

int desafioF(){
    char letter[11], newLetter[11], backspace[1];

    scanf("%s", letter);

    for(int i = 0; i< 11; ++i){
        int ret = strcmp(letter[i], "B");
        if(ret != 0){
            newLetter[i] = letter[i];
        }
    }

    printf("%s", newLetter);
    return 0;
}

int desafioG()
{
    int A, B, K, count = 0;

    for(;;){
        scanf("%d %d %d", &A, &B, &K);
        if(A>=0 && B>=0 && B>=A && K>=0){
            break;
        }
    }
    for(int i = A; i <= B;++i){
        if(A % K == 0){
            count  += 1;
        }
    }
    printf("%d", count);

    return 0;
}
const int max_paises = 81234;
int medalhas[500][3];
char nome[500][1123];

int cmp_indice(const void *a, const void *b){
    const int *x = a, *y = b;

    //printf("%p %d \t %p %d\n", x, *x, y, *y);

    for(int i = 0; i < 3; ++i){
        if(medalhas[*x][i] >medalhas[*y][i]){
            return -1;
        }
        if(medalhas[*x][i] <medalhas[*y][i]){
            return 1;
        }
    }

    return strcmp(nome[*x], nome[*y]);
    /*
    if(medalhas[*x][0] >medalhas[*y][0]){
        return -1;
    }
    if(medalhas[*x][0] <medalhas[*y][0]){
        return 1;
    }
    if(medalhas[*x][1] >medalhas[*y][1]){
        return -1;
    }
    if(medalhas[*x][1] <medalhas[*y][1]){
        return 1;
    }
    if(medalhas[*x][2] >medalhas[*y][2]){
        return -1;
    }
    if(medalhas[*x][2] <medalhas[*y][2]){
        return 1;
    }
    */
    /*
    int *v = medalhas[*x], *u = medalhas[*y];

    if(u[0]> v[0]){
        return -1;
    }
    if(u[0]< v[0]){
        return 1;
    }
    */
    /*
    if(medalhas[*x])

    if(x[0]> y[0]){
        return -1;
    }
    if(x[0]< y[0]){
        return 1;
    }
    if(x[1]> y[1]){
        return -1;
    }
    if(x[1]< y[1]){
        return 1;
    }
    if(x[2]> y[2]){
        return -1;
    }
    if(x[2]< y[2]){
        return 1;
    }
    */
}

int aula19_01(){
    int n;
    scanf("%d", &n);

    int indice[n];

    for(int i = 0;i < n; ++i){
        scanf("%s%d%d%d", nome[i],&medalhas[i][0], &medalhas[i][1], &medalhas[i][2]);
        indice[i] = i;
    }

    //printf("sizeof(medalhas[0]): %lu\n", sizeof(medalhas[0]));
    qsort(indice, n, sizeof(indice[0]), cmp_indice);

    for(int i = 0;i < n; ++i){
        //printf("%d: %d\n", i, indice[i]);
        printf("%s %d %d %d\n", nome[indice[i]],medalhas[indice[i]][0], medalhas[indice[i]][1], medalhas[indice[i]][2]);
    }

    return 0;
}

typedef int Inteiro;
typedef char Caracter;
typedef void Vazio;



typedef struct Pais{
    int ouro, prata, bronze;
    char nome[1123];
}Pais;

int cmp_pais(const void *a, const void *b){
    const struct Pais *x = a, *y = b;

    if((*x).ouro > (*y).ouro){
        return -1;
    }
    if((*x).ouro < (*y).ouro){
        return 1;
    }
    if(x->prata > y->prata){
        return -1;
    }
    if(x->prata < y->prata){
        return 1;
    }
    if(x->bronze > y->bronze){
        return -1;
    }
    if(x->bronze < y->bronze){
        return 1;
    }

    return strcmp(x->nome, y->nome);
}

int aula19_01_22()
{
    int n;
    scanf("%d", &n);

    struct Pais paises[n];

    for(int i= 0; i< n; ++i){
        scanf("%s%d%d%d", paises[i].nome, &paises[i].ouro, &paises[i].prata, &paises[i].bronze);
    }

    //printf("sizeof(paises[0]): %lu\n", sizeof(paises[0]));


    qsort(paises, n, sizeof(paises[0]), cmp_pais);

    for(int i= 0; i< n; ++i){
        printf("%s %d %d %d\n", paises[i].nome, paises[i].ouro, paises[i].prata, paises[i].bronze);
    }

    return 0;
}

char linhas[5123][5123];

int desafioA(){
    int n;
    scanf("%d", &n);



    for(int i = 0; i < n; ++i){
        scanf("%s", linhas[i]);
    }

    int maximo = 0;
    for (int (i) = 0; (i) < n; ++(i)) {
        int iguais = 0;
        for (int j = 0; j < n; ++j) {
            if(strcmp(linhas[i], linhas[j]) == 0){
                ++iguais;
            }
        }
        if(iguais > maximo){
            maximo = iguais;
        }
    }
    // Aqui são feitas no total n^2 chamadas a função strcmp
    printf("%d\n", maximo);


    return 0;
}

int cmp(const void *a, const void  *b){
    const int *x = a, *y = b;
    return strcmp(linhas[*x],linhas[*y]);
}

int desafioA2(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
        scanf("%s", linhas[i]);
    }

    qsort(linhas, n, sizeof(linhas[0]), cmp);
    // n * log2(n) chamadas a função cmp

    int iguais = 1, maximo = 0;

    for(int i = 1; i < n; ++i){
        if(strcmp(linhas[i], linhas[i - 1]) == 0){
            ++iguais;
        } else{
            if(iguais > maximo){
                maximo = iguais;
            }
            iguais = 1;
        }
    }
    // Aqui são feitas no total n +n * log2(n) chamadas a função strcmp

    if(iguais > maximo){
        maximo = iguais;
    }
    printf("%d\n", maximo);

    return 0;
}

int desafioA3(){
    int n;
    scanf("%d", &n);

    int indice[n];

    for(int i = 0; i < n; ++i){
        scanf("%s", linhas[i]);
        indice[i] = i;
    }

    qsort(indice, n, sizeof(indice[0]), cmp);
    // n * log2(n) chamadas a função cmp

    int iguais = 1, maximo = 0;

    for(int i = 1; i < n; ++i){
        if(strcmp(linhas[indice[i]], linhas[indice[i - 1]]) == 0){
            ++iguais;
        } else{
            if(iguais > maximo){
                maximo = iguais;
            }
            iguais = 1;
        }
    }
    // Aqui são feitas no total n +n * log2(n) chamadas a função strcmp

    if(iguais > maximo){
        maximo = iguais;
    }
    printf("%d\n", maximo);

    return 0;
}

int aula31_01_22(){
    int a[10];
    int *p = malloc(sizeof(int) * 10);

    for(int i = 0; i< 10;++i){
        p[i] = i*i;
    }

    //p = realloc(p, sizeof(int) * 100001);
    p = malloc(sizeof(int) * 100001);

    p[100000] = 3;

    printf("%d\n", p[9]);

    free(p);


    return 0;
}

int* multiplica2(int *v, int tamanho){
    //int resultado[tamanho];
    int *resultado = malloc(sizeof(int) * tamanho);
    for(int i = 0; i< tamanho; ++i){
        resultado[i] = v[i] * 2;
    }

    printf("resultado : %p\n", resultado);
    return resultado;
}

int aula_31_01()
{
    int a[] = {1, 2, 3, 4, 5};

    int *p = multiplica2(a, 5);

    printf("p: %p\n", p);
    printf("%d\n", p[3]);

    free(p);


    return 0;
}

int f(){
    int x = -22;

    return x;
}

int aula31_01_2()
{
    int x; // &x é o endereço de memoria de x
    int a[10]; // a é o endereço de memoria onde começa uma sequencia de 10 inteiros

    int *p = a;

    p = (int *) 0xa1b2c3d4;

    printf("%p\n", p);
    //printf("%d\n",*p);



    p = malloc(sizeof(int));//int x;
    *p = 22;     // x = 22

    printf("%p\n", p);
    printf("%d\n",*p);
    free(p);


    p = malloc(sizeof(int) * 10); // int a[10];
    p[0] = p[4] = 30;        // a[4] = 30
    printf("%p\n", p);
    printf("%d %d\n",*p, p[4]);
    free(p);



    return 0;
}

int grande_pra_caramba[112345678];

int abcd = 456;

int aula31_01_03()
{
    int grande_pra_caramba_e_dificil_de_alocar[112345678];

    //printf("%d\n", x)
    int x;

    scanf("%d", &x);

    if(x % 2){
        puts("O numero é impar!");

    } else{
        int y = x % 4;

        if(y){
            puts("O número é par simples");
        } else {
            puts("O número é par duplo");
        }
    }

    return 0;
}


int cmp_teste(const void * a, const void *b){
    printf("a : %p \t \t b: %p \n", a,b);

    const char **x = a, **y = b;

    return strcmp(*x,*y);
}
int aula02_02(){

        int n;

        scanf("%d", &n);

        //char nomes[n][1123];

        char **nomes = malloc(n * sizeof(char *));

        printf("nomes : %p\n", nomes);

        for(int i = 0; i< n; ++i){
            nomes[i] = malloc(1123 * sizeof(char));
            scanf("%[^\n]", nomes[i]);

            printf("nomes[%d] : %p\n", i, nomes[i]);
        }
        for(int i = 0; i< n; ++i){
            printf("&nomes[%d] : %p\n", i, &nomes[i]);
        }

        printf("sizeof(nomes[0] : %lu\n", sizeof(nomes[0]));

        qsort(nomes, n ,sizeof(nomes[0]), cmp_teste);

        for(int i = 0; i< n; ++i){
            printf("%s\n", nomes[i]);
        }

        return 0;

}

int aula02_02_22(){
    double *a = malloc(10 * sizeof(double));

    a[0] = 1.23;
    a[5] = 45.6;

    free(a);

    int *b[10];

    for(int i = 0; i< 10; ++i){
        b[i] = realloc(b[i], 5* sizeof(int));
    }

    b[4][5] = 6;
    b[1][1] = 0;
    b[9][8] = 7;// Não pode! Não temos mais tantas colunas!

    for(int i = 0; i< 10; ++i){
        b[i] = realloc(b[i], (i + 1)* sizeof(int));
    }
    for(int i = 0; i< 10;++i){
        free(b[i]);
    }

    malloc(10 * sizeof(int *));

    int **c = malloc(10 * sizeof(int *));


    //c[0] = 123;
    c[0] = malloc(5 * sizeof(int));
    c[0][3] = 55;
    free(c[0]);

    c[1] = malloc(7 * sizeof(int));
    c[1][6] = 22;
    free(c[1]);

    for(int i = 0; i< 10; ++i){
        c[i] = malloc(5 * sizeof(int));
    }

    c = realloc(c, 100 * sizeof(int));

    for(int i = 0; i< 100; ++i){
        c[i] = malloc(50 * sizeof(int));
    }
    for(int i = 0; i< 100; ++i){
        free(c[i]);
    }

    free(c);

    int ***d = malloc(10 * sizeof(int **));

    for(int i = 0; i< 10; ++i){
        d[i] = malloc(20 * sizeof(int *));

        for(int j = 0; j< 20; ++j){
            d[i][j] = malloc(30*sizeof(int));

        }
    }


    d[4][15][26] = 7890;

    for(int i = 0; i< 10; ++i){
        for(int j = 0; j< 10; ++j){
            free(d[i][j]);
        }
        free(d[i]);
    }
    free(d);

    return 0;
}

int aula07_02_22()
{
    FILE *meu_arquivo = fopen("arquivo1.txt", "r");
    if(meu_arquivo == NULL){
        printf("ERRO NA ABERTURA DO ARQUIVO! Saindo....");
        return 0;
    }

    meu_arquivo = fopen("arquivo1.txt", "w");

    fprintf(meu_arquivo,"O Meu nome é natalia.\n");
    fprintf(meu_arquivo,"Eu sou do Rio de janeiro.\n");

    fclose(meu_arquivo);

    meu_arquivo = fopen("arquivo1.txt", "r");

    char c;
    char s[11], t[112];

    fseek(meu_arquivo, 7, SEEK_CUR);
    fseek(meu_arquivo, 7, SEEK_CUR);

    fscanf(meu_arquivo, "%c%s%[^\n]", &c, s, t);

    fclose(meu_arquivo);

    printf("c = %c\n", c);
    printf("s = %s\n", s);
    printf("t = %s\n", t);


    meu_arquivo = fopen("arquivo1.txt", "a");

    fprintf(meu_arquivo, "%s\n", t);

    fclose(meu_arquivo);

    meu_arquivo = fopen("arquivo1.txt", "r+");

    fscanf(meu_arquivo, "%[^\n]", t);

    printf("t = %s\n", t);

    fprintf(meu_arquivo, "testando r+\n");
    fclose(meu_arquivo);


    return 0;
}

typedef struct Aluno{
    char nomes[112];
    double notas[2];

};

int cmp_media(const void *a, const void *b){
    const struct Aluno *x = a, *y = b
}

int aula09_02(){
    int n;
    scanf("%d", n);

    struct Aluno turma[n];

    for (int i = 0; i < n; ++i) {
        scanf("%[^,],%lf,%lf", &turma[i].nomes, &turma[i].notas[0], &turma[i].notas[1]);

    }

    qsort(turma, n, sizeof(turma[0]), cmp_media);





    return 0;
}
typedef struct Aluno1{
    char nomes[112];
    double notas[2];

}Aluno1;

int cmp_media_12(const void *a, const void *b){
    const Aluno1 *x = a, *y = b;

    double media_x = (x->notas[0] + x->notas[1])/2;
    double media_y = (y->notas[0] + y->notas[1])/2;

    if(media_x > media_y){
        return -1;
    }
    if(media_x < media_y){
        return 1;
    }
    return strcmp(x->nomes, y->nomes);

}

int aula_09_02(){
    FILE *dados = fopen("dados.txt", "r+");

    /*for(;;){
        char c;
        fscanf(dados,"%c", &c);
        if(c == '\n'){
            break;
        }
    }*/

    fscanf(dados,"%*[^\n]\n");

    long int pos_linha2 = ftell(dados);

    int n = 0;

    //fscanf(dados,"%d", &c);


    Aluno1 *turma = NULL;//malloc(n * sizeof(Aluno))

    for (int i = 0;;++i) {
        turma = realloc(turma, (n + 1) * sizeof(Aluno1));

        if(fscanf(dados," %[^,],%lf,%lf", turma[i].nomes, &turma[i].notas[0], &turma[i].notas[1]) == EOF){
            break;
        }

        ++n;

    }

    qsort(turma, n, sizeof(turma[0]), cmp_media_12);

    //fseek(dados, 0, SEEK_SET);
    //fscanf(dados,"%*[^\n]\n");

    fseek(dados, pos_linha2, SEEK_SET);

    //fprintf(dados,"%d\n", n);

    for (int i = 0; i < n; ++i){
        //printf("%s teve as notas %.2lf, obtendo media %.2lf\n", turma[i].nomes, turma[i].notas[0], turma[i].notas[1]);
        fprintf(dados,"%s,%.1lf,%.1lf\n",turma[i].nomes, turma[i].notas[0], turma[i].notas[1]);
    }


    fclose(dados);


    return 0;
}


int main() {
    return desafioA();


}