int motLa=8;
int motLb=9;
int motRa=10;
int motRb=11;

void setup()
{
  Serial.begin(9600);


  pinMode (motLa,OUTPUT);
  pinMode (motLb,OUTPUT);
  pinMode (motRa,OUTPUT);
  pinMode (motRb,OUTPUT);
}

void forward()
{
  digitalWrite(motLa,0);
  digitalWrite(motLb,1);
  digitalWrite(motRa,0);
  digitalWrite(motRb,1); 
}

void LEFT()
{
  digitalWrite(motLa,0);
  digitalWrite(motLb,1);
  digitalWrite(motRa,1);
  digitalWrite(motRb,0);
}

void RIGHT()
{
  digitalWrite(motLa,1);
  digitalWrite(motLb,0);
  digitalWrite(motRa,0);
  digitalWrite(motRb,1);
}

void backward()
{
  digitalWrite(motLa,1);
  digitalWrite(motLb,0);
  digitalWrite(motRa,1);
  digitalWrite(motRb,0); 
}

void left()
{
  digitalWrite(motLa,0);
  digitalWrite(motLb, 1);
  digitalWrite(motRa,0);
  digitalWrite(motRb,0);
}

void right()
{
  digitalWrite(motLa,0);
  digitalWrite(motLb,0);
  digitalWrite(motRa,0);
  digitalWrite(motRb,1);
}

void Bleft()
{
  digitalWrite(motLa,1);
  digitalWrite(motLb,0);
  digitalWrite(motRa,0);
  digitalWrite(motRb,0);
}

void Bright()
{
  digitalWrite(motLa,0);
  digitalWrite(motLb,0);
  digitalWrite(motRa,1);
  digitalWrite(motRb,0);
}

void STOP()
{
  digitalWrite(motLa,0);
  digitalWrite(motLb,0);
  digitalWrite(motRa,0);
  digitalWrite(motRb,0); 
}

void loop()
{
  if (Serial.available()>=0)
  {
    char a=Serial.read();
    
    if (a=='F')
    {
      forward();
    }
    else if(a=='B')
    {
      backward();
    }
    else if(a=='R')
    {
      LEFT();
    }
    else if (a=='L')
    {
      RIGHT();
    }
    else if (a=='S')
    {
      STOP();
    }
    else if (a=='I')
    {
      left();
    }
    else if (a=='G')
    {
      right();
    }
    else if (a=='J')
    {
      Bleft();
    }
    else if (a=='H')
    {
      Bright();
    }
  }
}

     
   
  
