// Road A LEDs
const int redA = 2;
const int yellowA = 3;
const int greenA = 4;

// Road B LEDs
const int redB = 5;
const int yellowB = 6;
const int greenB = 7;

// Ultrasonic A
const int trigA = 8;
const int echoA = 9;

// Ultrasonic B
const int trigB = 10;
const int echoB = 11;

long duration;
int distanceA;
int distanceB;

void setup()
{
  pinMode(redA, OUTPUT);
  pinMode(yellowA, OUTPUT);
  pinMode(greenA, OUTPUT);

  pinMode(redB, OUTPUT);
  pinMode(yellowB, OUTPUT);
  pinMode(greenB, OUTPUT);

  pinMode(trigA, OUTPUT);
  pinMode(echoA, INPUT);

  pinMode(trigB, OUTPUT);
  pinMode(echoB, INPUT);

  Serial.begin(9600);
}

int getDistance(int trigPin, int echoPin)
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  int distance = duration * 0.034 / 2;

  return distance;
}

void roadAGreen()
{
  digitalWrite(redA, LOW);
  digitalWrite(yellowA, LOW);
  digitalWrite(greenA, HIGH);

  digitalWrite(redB, HIGH);
  digitalWrite(yellowB, LOW);
  digitalWrite(greenB, LOW);
}

void roadBGreen()
{
  digitalWrite(redA, HIGH);
  digitalWrite(yellowA, LOW);
  digitalWrite(greenA, LOW);

  digitalWrite(redB, LOW);
  digitalWrite(yellowB, LOW);
  digitalWrite(greenB, HIGH);
}

void yellowAState()
{
  digitalWrite(greenA, LOW);
  digitalWrite(yellowA, HIGH);
  delay(2000);
  digitalWrite(yellowA, LOW);
}

void yellowBState()
{
  digitalWrite(greenB, LOW);
  digitalWrite(yellowB, HIGH);
  delay(2000);
  digitalWrite(yellowB, LOW);
}

void loop()
{
  distanceA = getDistance(trigA, echoA);
  distanceB = getDistance(trigB, echoB);

  Serial.print("Road A: ");
  Serial.print(distanceA);
  Serial.print(" cm   ");

  Serial.print("Road B: ");
  Serial.println(distanceB);

  // Smaller distance means vehicle is closer

  if(distanceA < distanceB)
  {
    roadAGreen();
    delay(5000);
    yellowAState();
  }
  else
  {
    roadBGreen();
    delay(5000);
    yellowBState();
  }
}