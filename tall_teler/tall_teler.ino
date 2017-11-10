int u1 = 12;
int u2 = 11;
int u3 = 10;
int u4 = 9;
int u5 = 8;
int u6 = 7;
int u7 = 6;
int ut8 = 5;

//seter antal ganger den skal skjøre
int ganger = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(u1, OUTPUT); // g
  pinMode(u2, OUTPUT); // f
  pinMode(u3, OUTPUT); // a
  pinMode(u4, OUTPUT); // b
  pinMode(u5, OUTPUT); // e
  pinMode(u6, OUTPUT); // d
  pinMode(u7, OUTPUT); // c
  pinMode(ut8, OUTPUT); // dp
}

void loop() {
  // put your main code here, to run repeatedly:
  while (ganger < 5) {
    ganger = ganger + 1;
    // printer 1
    digitalWrite(u4, HIGH);
    digitalWrite(u7, HIGH);
    delay(1000);
    digitalWrite(u4, LOW);
    digitalWrite(u7, LOW);
    
    // printer 2
    digitalWrite(u5, HIGH);
    digitalWrite(u4, HIGH);
    digitalWrite(u3, HIGH);
    digitalWrite(u1, HIGH);
    digitalWrite(u6, HIGH);
    delay(1000);
    digitalWrite(u5, LOW);
    digitalWrite(u4, LOW);
    digitalWrite(u3, LOW);
    digitalWrite(u1, LOW);
    digitalWrite(u6, LOW);
    // printer 3
    digitalWrite(u3, HIGH);
    digitalWrite(u4, HIGH);
    digitalWrite(u7, HIGH);
    digitalWrite(u1, HIGH);
    digitalWrite(u6, HIGH);
    delay(1000);
    digitalWrite(u3, LOW);
    digitalWrite(u6, LOW);
    // printer 4
    digitalWrite(u1, HIGH);
    digitalWrite(u2, HIGH);
    delay(1000);
    digitalWrite(u4, LOW);
    // printer 5
    digitalWrite(u3, HIGH);
    digitalWrite(u6, HIGH);
    delay(1000);
    
    // printer 6
    digitalWrite(ut8, HIGH);
    delay(1000);
    // reseter alle lysene
    digitalWrite(u1, LOW);
    digitalWrite(u2, LOW);
    digitalWrite(u3, LOW);
    digitalWrite(u4, LOW);
    digitalWrite(u5, LOW);
    digitalWrite(u6, LOW);
    digitalWrite(u7, LOW);
    digitalWrite(ut8, LOW);
  }
}
