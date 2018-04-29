

void sweep()                          // Can be used to simulate Metal Detecting or to rotate Ping Sensor
{ 
  myservo.attach(9); 
  StopCar();
  Forward_Meter();
  StopCar();
    
  for(pos = 60; pos <= 120; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                   // in steps of 1 degree 
    myservo.write(pos);               // tell servo to go to position in variable 'pos' 
    delay(15);                        // waits 15ms for the servo to reach the position 
  } 
  for(pos = 120; pos>=60; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);               // tell servo to go to position in variable 'pos' 
    delay(15);                        // waits 15ms for the servo to reach the position 
  } 

    myservo.write(90);                // tell servo to go to position in variable 'pos' 
    delay(15);                        // waits 15ms for the servo to reach the position 

   myservo.detach();                  // Disengage Servo Motor
} 
