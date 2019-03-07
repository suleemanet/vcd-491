void setup() {
 pinMode (2, OUTPUT);
 pinMode (6, OUTPUT);
 pinMode (10, OUTPUT);

}

void loop() {

digitalWrite (2, HIGH);
delay (1000);
digitalWrite (2, LOW);
delay (1000);
digitalWrite (6, HIGH);
delay (1000);
digitalWrite (6, LOW);
delay (1000);
digitalWrite (10, HIGH);
delay (1000);
digitalWrite (10, LOW);
delay (1000);
}
