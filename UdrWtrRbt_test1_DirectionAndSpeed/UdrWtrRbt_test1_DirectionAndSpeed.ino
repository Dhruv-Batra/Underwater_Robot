//Dhruv Batra 1/16/20
//test if motors can spin at both directions and at different speeds
/*Sources: 
L298N Motor Driver tutorial at https://surtrtech.com/2018/01/27/step-by-step-on-how-to-use-the-l298n-dual-h-bridge-driver-with-arduino/
*/
//connections to arduino for vertical and horizontal motors
int vLa = 12;
int vLb = 11;
int vLCon = 13;
int vRa = 10;
int vRb = 9;
int vRCon = 8;
int hLa = 6;
int hLb = 5;
int hLCon = 7;
int hRa = 4;
int hRb = 3;
int hRCon = 2;

void setup() {
  //declares pinmodes as outputs
  pinMode(vLa, OUTPUT);
  pinMode(vLb, OUTPUT);
  pinMode(vLCon, OUTPUT);
  pinMode(vRa, OUTPUT);
  pinMode(vRb, OUTPUT);
  pinMode(vRCon, OUTPUT);
  pinMode(hLa, OUTPUT);
  pinMode(hLb, OUTPUT);
  pinMode(hLCon, OUTPUT);
  pinMode(hRa, OUTPUT);
  pinMode(hRb, OUTPUT);
  pinMode(hRCon, OUTPUT);
}

//testing methods
//note speed range 0-255

void motorsLeftFast(){
  digitalWrite(vLa, LOW);
  digitalWrite(vLb, HIGH);
  analogWrite(vLCon,255);
  digitalWrite(hLa, LOW);
  digitalWrite(hLb, HIGH);
  analogWrite(hLCon,255);
  digitalWrite(vRa, LOW);
  digitalWrite(vRb, HIGH);
  analogWrite(vRCon,255);
  digitalWrite(hRa, LOW);
  digitalWrite(hRb, HIGH);
  analogWrite(hRCon,255);
}

void motorsRightSlow(){
  digitalWrite(vLa, HIGH);
  digitalWrite(vLb, LOW);
  analogWrite(vLCon,150);
  digitalWrite(hLa, HIGH);
  digitalWrite(hLb, LOW);
  analogWrite(hLCon,150);
  digitalWrite(vRa, HIGH);
  digitalWrite(vRb, LOW);
  analogWrite(vRCon,150);
  digitalWrite(hRa, HIGH);
  digitalWrite(hRb, LOW);
  analogWrite(hRCon,150);
}

void allStop(){
  digitalWrite(vLa, LOW);
  digitalWrite(vLb, LOW);
  analogWrite(vLCon,0);
  digitalWrite(hLa, LOW);
  digitalWrite(hLb, LOW);
  analogWrite(hLCon,0);
  digitalWrite(vRa, LOW);
  digitalWrite(vRb, LOW);
  analogWrite(vRCon,0);
  digitalWrite(hRa, LOW);
  digitalWrite(hRb, LOW);
  analogWrite(hRCon,0);
}

void loop() {
  motorsLeftFast();
  delay(2000);
  allStop();
  delay(2000);
  motorsRightSlow();
  delay(2000);
  allStop();
  delay(2000);
}
