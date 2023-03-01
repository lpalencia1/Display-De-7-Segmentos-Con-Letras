int Display;

int E = 5;
int D = 4;
int C = 3;
int P = 2;

int G = 8;
int F = 9;
int A = 10;
int B = 11;

void setup() {
  Serial.begin(9600);
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(P, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    Display = Serial.parseInt();
    if (Display == 0) {
      Cero();
      delay(2000);
    } else if (Display == 1) {
      Uno();
      delay(2000);
    } else if (Display == 2) {
      Dos();
      delay(2000);
    } else if (Display == 3) {
      Tres();
      delay(2000);
    } else if (Display == 4) {
      Cuatro();
      delay(2000);
    } else if (Display == 5) {
      Cinco();
      delay(2000);
    } else if (Display == 6) {
      Seis();
      delay(2000);
    } else if (Display == 7) {
      Siete();
      delay(2000);
    } else if (Display == 8) {
      Ocho();
      delay(2000);
    } else if (Display == 9) {
      Nueve();
      delay(2000);
    } else if (Display == 10) {
      LetraA();
      delay(2000);
    } else if (Display == 11) {
      LetraB();
      delay(2000);
    } else if (Display == 12) {
      LetraC();
      delay(2000);
    } else if (Display == 13) {
      LetraD();
      delay(2000);
    } else if (Display == 14) {
      LetraE();
      delay(2000);
    } else if (Display == 15) {
      LetraF();
      delay(2000);
    } else if ((Display < 0) || (Display > 15)) {
      Ocho();
      delay(200);
      Apagado();
      delay(200);
      Ocho();
      delay(200);
      Apagado();
      Ocho();
      delay(200);
      Apagado();
    }
  }
}

void Cero() {
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Uno() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Dos() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void Tres() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Cuatro() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Cinco() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Seis() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Siete() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Ocho() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Nueve() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraA() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraB() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraC() {
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void LetraD() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraE() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void LetraF() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void Apagado() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}