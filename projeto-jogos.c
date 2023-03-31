/*A ideia do código é criar um sistema com dois mini jogos. Ao iniciar o aplicativo, o
usuário se deparará com um menu principal:
TITULO DO JOGO
1: Pergunta e resposta
2: Cobra na caixa!
3: Sair.
O aplicativo deve continuar rodando até que o usuário escolha a opção de sair. Ao
escolher uma opção de jogo deve ter uma descrição prévia do jogo e a pergunta se o
usuário quer começar..*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct pergunta {
    char* enunciado;
    char* alternativas[4];
    int resposta;
};
#define Np 5

struct pergunta perguntas[Np] = {
    {
        "Qual o maior animal do mundo?",
        {"Elefante", "Baleia Azul", "Girafa", "Tubarão Branco"},
        1 
    },
{
        "Qual seleção é a atual campeã do mundo?",
        {"Argentina", "Estados Unidos", "Canadá", "Rússia"},
        0 
    },
    {
        "Qual é o maior país do mundo em área territorial?",
        {"China", "Estados Unidos", "Canadá", "Rússia"},
        3 
    },
    {
        "Qual o planeta mais próximo do Sol?",
        {"Marte", "Vênus", "Júpiter", "Mercúrio"},
        3 
    },
    {
        "Qual jogador é conhecido como Rei do Futebol?",
        {"Lucas Paqueta", "Messi", "Pelé", "Maradona"},
        2 
    }
};

void Jogo_1(){
  
  srand(time(NULL));
    
  for (int p = 0; p<5; p++){
    int NumeroDaPergunta = p; 
    struct pergunta pergunta_atual = perguntas[NumeroDaPergunta];
    
    printf("%d° - %s\n",p+1, pergunta_atual.enunciado);
    for (int i = 0; i < 4; i++) {
        printf("%d) %s\n", i+1, pergunta_atual.alternativas[i]);
    }
    
    int resposta_usuario;
    printf("Qual a alternativa correta? ");
    scanf("%d", &resposta_usuario);
    
    if (resposta_usuario == pergunta_atual.resposta+1) {
        printf("\nParabéns, você acertou!\n\n");
    } else {
        printf("\nResposta incorreta. A resposta correta é: %s\n\n", pergunta_atual.alternativas[pergunta_atual.resposta]);
    }
}
}

void Descrição_jogo1(){
  char opjogo1;
  printf ("\nÉ um jogo em que o computador faz uma pergunta e apresenta quatro alternativas, pedindo ao usuário que escolha a alternativa correta.\nVoce quer começar ? S/N ?\n");
  scanf("%c", &opjogo1);
  if (opjogo1 == 'S' || 's'){
    printf ("Jogo começando\n");
  } else if (opjogo1=='N'||'n'){
    
  }
    
  }




#define max_n 5
void Descrição_jogo2(){
  char opjogo2;
  printf ("\nEsse é um jogo de sorte, onde ganha o jogador que descobrir a caixa que contém o botão e perde aquele que descobrir a caixa cm a cobra.\nVoce quer começar ? S/N ?\n");
  scanf("%c", &opjogo2);
  if (opjogo2 == 'S' || 's'){
    printf ("Jogo começando\n");
  } else if (opjogo2== 'N' || 'n') {
    
  }
}

void Jogo_2(){
    char nome1[100], nome2[100];
    int num, i, comeca, j;
    int caixas[max_n] = {0};

    printf("Nome do jogador 1: ");
    scanf("%s", &nome1);
    getchar();

    printf("Nome do jogador 2: ");
    scanf("%s", &nome2);
    getchar();
    printf("\n");

    srand(time(NULL));
    comeca = rand() % 2;
     
    if(comeca == 0){
      
        printf("Jogador %s eh quem comeca jogando.\n", nome1);
      
    }else if(comeca == 1){
      
        printf("Jogador %s eh quem comeca jogando.\n", nome2);
      
    }

    for(j = 1; j > 0 ; j++){
     
        printf("\nrodada: %d \n", j);
          printf("Digite o numero da caixa a ser aberta: ");
        scanf("%d", &num); 

        
            
                caixas[i] = num;
      if (num > 5){
        printf ("Esse numero n esta disponivel");
      }
                if(num == 2){
                    printf("caixa com botao! \n");
                    printf("voce ganhou!!!\n");
                  j = 6;
                  break;
                }else if(num == 4){
                    printf("caixa com cobra! \n");
                    printf("GAME OVER !!!\n"); 
                  j = 6;
                  break;
                }else{
                    printf("caixa vazia.\n");
                  
                }
                
            
        }}

        
            
          
void Menu() {
  int Opção_menu;
  for (int i = 1; i>0; i++ ){
  printf("\n\nCesuGame\n1: Pergunta e resposta\n2: Cobra na caixa!\n3: Sair\n");
    scanf("%d", &Opção_menu);;
    if (Opção_menu==1){
      Descrição_jogo1();
      Jogo_1();
      printf("Voce quer jogar dnv ou ir para o menu? 1 - Jogar novamente / 2 - ir ao menu ");
  int op1;
      scanf("%d", &op1);
  if(op1==1){
    Jogo_1();
  } else if (op1==2){
    
  }
    } 
    else if (Opção_menu==2){
      Descrição_jogo2();
      Jogo_2();
      printf("Voce quer jogar dnv ou ir para o menu? 1 - Jogar novamente / 2 - ir ao menu ");
  int op1;
      scanf("%d", &op1);
  if(op1==1){
    Jogo_2();
  } else if (op1==2){
    
  }
        
    }
    
    else if (Opção_menu==3){
      printf("Jogo finalizado. ");
      break;
    } else if (Opção_menu>3){
      printf("Opção invalida, marque outra: \n");
    }
    
  }
}


int main() {
  Menu();
  
    return 0;
}