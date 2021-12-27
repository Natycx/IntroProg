#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

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

int desafio1175(){



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

int desafio1222(){
    char vetor[50];

    scanf("%s");




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


int main() {
    return aula24_12_21();


}