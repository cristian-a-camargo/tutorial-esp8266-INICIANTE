int valor = 0;

void setup() {
  // put your setup code here, to run once:

     Serial.begin(115200); // Definição da velocidade de transmissão
}

void loop() {
  // put your main code here, to run repeatedly:


   Serial.println("Digite um numero ");
 valor = Serial.read(); // leitura de dados do monitor serial
 Serial.print("O numero digitado foi ");
 Serial.write(valor);
 Serial.println();
 delay(2000); // Aguarda por 10 segundos

}
