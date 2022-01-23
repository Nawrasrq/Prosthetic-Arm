#include <Servo.h>
//Digital

//pin 10 connects Wrist servo
int const S_WRIST_PIN = 10;
int sWristPos = 0;
Servo sWrist;

//pin 9 connects thumb servo
int const S_THUMB_PIN = 9;
int sThumbPos = 0;
Servo sThumb;

//pin 6,5 connect actuators
int const A1_SIG_PIN = 6;
int const A2_SIG_PIN = 5;
int A1Pos = 0;
int A2Pos = 0;
Servo A1;
Servo A2;

//pin A0 connects EMG sensor
int const EMG_SIG = A0;


void setup() {
  sThumb.attach(S_THUMB_PIN);
  sWrist.attach(S_WRIST_PIN);
  A1.attach(A1_SIG_PIN);
  A2.attach(A2_SIG_PIN);
  
  //EMG
  pinMode(EMG_SIG, INPUT);
  Serial.begin(9600);
}

void loop() {
  double emg = analogRead(A0);
  Serial.println(emg);

  /*
  //default hand postition should be closed, might need to initialize hand to close during setup //all joints move at once 
  //Fingers
  //Extends fingers
  if(EMG == extendCondition){
    //Actuator 1
    A1Pos = 0;
    A1.write(A1Pos);

    //Actuator 2
    A2Pos = 0;
    A2.write(A2Pos);

    //Thumb Servo
    sThumbPos = 0;
    sThumb.write(sThumbPos);
  }
  
  //Retracts fingers
  else{
    //Actuator 1
    A1Pos = 180;
    A1.write(A1Pos);
    
    //Actuator 2
    A2Pos = 180;
    A2.write(A2Pos);

    //Thumb Servo
    sThumbPos = 180;
    sThumb.write(sThumbPos);
  }

  //Wrist
  //either have wrist turn all the way or stop when emg no longer detects anything
  //need to study emg output for wrist turning motion (is there something that can be used to differentiate between turning wrist right and left)
  //turn right
  while(EMG == turnRightCondition && sWristPos != 180){
    sWristPos+=5;
    sWrist.write(sWristPos);
  }
  while(EMG == turnLeftCondition && sWristPos != 0){
    sWristPos+=5;
    sWrist.write(sWristPos);
  }
  */
}
