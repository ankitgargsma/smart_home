#define RELAY_ON 0
#define RELAY_OFF 1
#define RELAY_1 4
char data =0;

void setup() {
  // put your setup code here, to run once:
pinMode(RELAY_1,RELAY_OFF);
Serial.begin(9600);
Serial.print("Type :1 to turn on the bulb and 0 to turn it off");
}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0){
  data=Serial.read();
  Serial.print(data);
  Serial.print("\n");
  if(data=='1'){
    digitalWrite(RELAY_1,RELAY_ON);
    Serial.println("Bulb is now turned ON");
  }
  else if(data=='0'){
    digitalWrite(RELAY_1,RELAY_OFF);
    Serial.println("Bulb is now turned OFF");
  }
 }
}
