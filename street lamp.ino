int srdata;
int prdata;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  srdata=analogRead(A0);
  prdata= map(srdata,0,1023,100,0);
  Serial.print("Sensor Data:");
  Serial.println(prdata);
  delay(2000);
}
