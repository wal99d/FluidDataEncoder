const int switchPin =2;
int switchState =0;
#define waterPump 9
#define interval 1
 
void setup() {
  pinMode(waterPump, OUTPUT);
}

void loop() {
  switchState = digitalRead(switchPin);
  if (switchState == HIGH){
      //We are going to send letter A in binray format as below:
      //01000001
      //generateBitEncoding(0);
      generateBitEncoding(1);
      /*generateBitEncoding(0);
      generateBitEncoding(0);
      generateBitEncoding(0);
      generateBitEncoding(0);
      generateBitEncoding(0);
      generateBitEncoding(1);*/
      
  }else{
    digitalWrite(waterPump, LOW);
    }
}

void generateBitEncoding(int state){
    if(state==0){
        //then we need to create a ZERO bit repersentation
        digitalWrite(waterPump, HIGH);
        delay(interval * 1000); //ms
        digitalWrite(waterPump, LOW);
        delay(interval * 2000); //ms
      }else if(state==1){
        //we create ONE bit represntation
        digitalWrite(waterPump, HIGH);
        delay(interval * 2000); //ms
        digitalWrite(waterPump, LOW);
        delay(interval * 3000); //ms
        }
  }

