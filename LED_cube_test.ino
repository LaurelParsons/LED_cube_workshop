
//Edit here first -- what values did you plug in each column and level to? Refer to the diagram!
#define back_left ?
#define back_right ?
#define front_left ?
#define front_right ?

#define top ?
#define bottom ?

void setup() {
  // put your setup code here, to run once:
  pinMode(back_left, OUTPUT);
  pinMode(back_right, OUTPUT);
  pinMode(front_left, OUTPUT);
  pinMode(front_right, OUTPUT);

  pinMode(top, OUTPUT);
  pinMode(bottom, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(top, LOW);
  digitalWrite(back_left, HIGH);

  //Light up the rest of the cube on your own!  
}
