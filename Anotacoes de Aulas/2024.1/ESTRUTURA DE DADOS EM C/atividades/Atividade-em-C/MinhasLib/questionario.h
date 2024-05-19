#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;

void Q1() {
  int n1;
  double n2;

  printf("Inteiro:");
  scanf("%d", &n1);
  printf("precisao dupla:");
  scanf("%lf", &n2);
  printf("%i, %lf", n1, n2);
}

void Q2() {
  double soma = 0;
  int n1, n2, n3;
  printf("Informe tres Inteiros:\n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  soma = n1 + n2 + n3;
  printf("Soma: %lf", soma);
}

void Q3() {
  double real = 0;
  printf("Informe um numero real:\n");
  scanf("%lf", &real);
  printf("Quadrado: %lf", real * real);
}

void Q4() {
  double real = 0;
  printf("Informe um numero real:\n");
  scanf("%lf", &real);
  printf("Quinta parte do numero e: %lf", real / 5);
}

void Q5() {
  float tempC;
  float tempF;
  printf("Informe a temperatura em graus Celsius:\n");
  scanf("%f", &tempC);
  tempF = (tempC * (9.0 / 5.0)) + 32.00;
  printf("Temperatura em F: %f", tempF);
}

void Q6() {
  double velKm;
  double velMs;
  printf("Informe a velocidade em Km/h:\n");
  scanf("%lf", &velKm);
  velMs = velKm / 3.6;
  printf("A velocidade em m/s e: %lf", velMs);
}

void Q7() {
  double raio, h;
  const double pi = 3.1415;
  double volume = 0;
  printf("Informe a altura do cilindro:\n");
  scanf("%lf", &h);

  printf("Informe o raio do cilindro:\n");
  scanf("%lf", &raio);

  volume = (raio * raio) * pi * h;
  printf("Volume: %lf", volume);
}

void Q8() {
  double valorSD, taxaDesconto = 12;
  double valorCD = 0;

  printf("Informe o valor sem desconto:");
  scanf("%lf", &valorSD);
  valorCD = valorSD - (valorSD * (taxaDesconto / 100));
  printf("Valor com desconto %lf", valorCD);
}

void Q9() {
  double salario, taxaAumento = 25;
  printf("Informe o valor do salario:");
  scanf("%lf", &salario);
  salario = salario + (salario * (taxaAumento / 100));
  printf("Valor com Aumento %lf", salario);
}

void Q10() {
  double g1, g2, g3;
  double premio = 780000;
  g1 = premio * 0.46;
  g2 = premio * 0.23;
  g3 = premio - (g1 + g2);
  printf("Ganhador 01: %lf\n", g1);
  printf("Ganhador 02: %lf\n", g2);
  printf("Ganhador 03: %lf\n", g3);
}

void diaSemana() {
  int dia;
  printf("Informe um numero da semana");
  scanf("%d", &dia);
  printf("\n");

  if (dia == 1) {
    printf("Domingo");
  } else if (dia == 2) {
    printf("Segunda");
  } else if (dia == 3) {
    printf("Terça");
  } else if (dia == 4) {
    printf("Quarta");
  } else if (dia == 5) {
    printf("Quinta");
  } else if (dia == 6) {
    printf("Sexta");
  } else if (dia == 7) {
    printf("Sabado");
  } else {
    printf("Id errado");
  }
}

void diaSemana2() {
  int dia;
  printf("Informe um numero da semana");
  scanf("%d", &dia);
  printf("\n");
}

void MaiorIdade() {
  int maiorIdade;
  char resposta[255];
  printf("Informe idade:");
  scanf("%d", &maiorIdade);
  maiorIdade > 18 ? strcpy(resposta, "Maior Idade")
                  : strcpy(resposta, "Menor Idade");
}

void ValorNegativoPositivo() {
  int n;
  printf("Informe um numero:");
  scanf("%d", &n);
  if (n < 0) {
    printf("Negativo");
  } else if (n > 0) {
    printf("Positivo");
  } else {
    printf("Nulo");
  }
}

void CalculadoraSimples() {
  const int op = 4;
  double n1, n2;
  // 1 = soma , 2=sub, 3 = mult, 4 = div
  printf("Informe n1");
  scanf("%lf", &n1);
  printf("Informe n2");
  scanf("%lf", &n2);

  if (op == 1) {
    printf("Soma: %lf", (n1 + n2));
  } else if (op == 2) {
    printf("Sub: %lf", (n1 - n2));
  } else if (op == 3) {
    printf("Mult: %lf", (n1 * n2));
  } else if (op == 4) {
    if (n2 == 0) {
      printf("Nao pode dividir por zero");
    } else {
      printf("Div: %lf", (n1 / n2));
    }
  }
}
