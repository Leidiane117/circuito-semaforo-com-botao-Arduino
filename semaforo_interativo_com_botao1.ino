//Leidiane Soares de Souza turma B



#define carroVermelho 13
#define carroAmarelo 12
#define carroVerde 11

#define pedestreVerde 4
#define pedestreVermelho 5

#define botao 7




void setup()
{
  
  pinMode(carroVerde, OUTPUT);
  pinMode(carroAmarelo,OUTPUT);
  pinMode(carroVermelho, OUTPUT);	
  pinMode(botao, INPUT);
  pinMode(pedestreVerde,OUTPUT);
  pinMode(pedestreVermelho,OUTPUT);
}


void loop()
{
  int estadoB = digitalRead(botao); //ler meu botão e atribuir á varivel estado.

  if(estadoB==HIGH){// se botão for pressionado
  delay(15000);// aguardar 15 segundos
  digitalWrite(carroVerde, LOW); 
  // A luz verde é desligada
  digitalWrite(carroAmarelo, HIGH); // A luz amarela vai ligar por 2 segundos
  delay(2000); // acessa por 2 segundos
  digitalWrite(carroAmarelo, LOW); // A luz amarela vai desligar
  digitalWrite(carroVermelho, HIGH);// liga vermelho
  digitalWrite(pedestreVermelho, LOW);// vermelho para pedestre desligado
  digitalWrite(pedestreVerde, HIGH);// pedestre pode atravessar
  delay(15000);// 15 segundos para atravessar
  }
  else{ // se não tiver pressionado
  digitalWrite(carroVerde, HIGH); // ascende o verde
  digitalWrite(carroVermelho, LOW);// desliga o vermelho
  digitalWrite(carroAmarelo, LOW);// desliga o amarelo
  digitalWrite(pedestreVerde, LOW); // desliga p pedestre
  digitalWrite(pedestreVermelho, HIGH);// ascende vermelho p pedestre
  }
  
  


}


















