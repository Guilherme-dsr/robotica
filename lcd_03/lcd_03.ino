/*
Projeto Arduino com LCD. 
Por Jota
----------------------------------------
--=<| www.ComoFazerAsCoisas.com.br |>=--
----------------------------------------
*/
 
//Define a utilização da biblioteca para controle de telas LDCs.
 #include <LiquidCrystal.h>
 
//Criando um objeto da classe LiquidCrystal e 
//inicializando com os pinos da interface.
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);
 
void setup() {
  //Inicializando o LCD e informando o tamanho de 16 colunas e 2 linhas
  //que é o tamanho do LCD JHD 162A usado neste projeto.
  lcd.begin(16, 2); 
}
 
void loop() { 
 // lcd.clear();          //limpa o display do LCD.     
  //lcd.print("INFORMATICA");  //imprime a string no display do LCD.
  //delay(2000);                 
   
  //lcd.setCursor(0,1);   //posiciona cursor na coluna 0 linha 1 do LCD
  //lcd.print("ROBOTICA"); //imprime a string no display do LCD.
  //delay(2000);    
   
  //lcd.clear();
  //lcd.print("52");
  //lcd.setCursor(0,1);
  //lcd.print("ANOS");
  //delay(4000); 
  lcd.clear();
  lcd.print("---> #JN52 <---");
  delay(100);
  
    for (int i = 0; i < 15; i++) {
    lcd.scrollDisplayLeft();
    delay(370);
  }
  delay(100);
  
  lcd.clear();
  lcd.print("---> INFORMATICA <---");
  delay(100);
    for (int i = 0; i < 21; i++) {
    lcd.scrollDisplayLeft();
    delay(370);
  }
  delay(100);
  
  lcd.clear();
  lcd.print("---> ROBOTICA <---");
  delay(100);
   
  //Rolando o display para a esquerda 12 vezes
  for (int i = 0; i < 18; i++) {
    lcd.scrollDisplayLeft();
    delay(370);
  }
   
  delay(100);
}
