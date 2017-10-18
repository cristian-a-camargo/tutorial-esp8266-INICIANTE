
const int led_vermelho = D5;
const int led_verde = D4;
const int led_amarelo = D3;
char led;
void setup()
{
 pinMode(led_vermelho, OUTPUT);
 pinMode(led_verde, OUTPUT);
 pinMode(led_amarelo, OUTPUT);
 Serial.begin(115200);
}
void loop()
{
 if (Serial.available()) {
 led = Serial.read();

 
         if (led == '1') { // Led amarelo - yellow
         digitalWrite(led_amarelo, HIGH); // Acende led
         }
          if (led == '2') { // Led amarelo - yellow
          digitalWrite(led_amarelo, LOW ); // Acende led
         }
    }
  }
