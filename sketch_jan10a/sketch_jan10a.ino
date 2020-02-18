int motion_1=2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(motion_1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor_1 = digitalRead(motion_1);
if (sensor_1 == HIGH){
Serial.print("motion dect on");
delay(1000);}
else {
  Serial.print("motion  dect off");}
Serial.println();
delay(1000);
}
