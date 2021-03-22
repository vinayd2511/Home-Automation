#define f1 2
#define f2 3
#define f3 4
#define f4 5

int inByte = 0;
char BYTE;
 void establishContact()
 {
  while (Serial.available() <= 0)
  {
    Serial.print('.', BYTE);                   
    delay(500);
  }
}

  int count = 0;   

void setup() 
{
 Serial.begin(9600);
  establishContact();

  
  pinMode(f1, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(f3, OUTPUT);
  pinMode(f4, OUTPUT);



  digitalWrite(f1, HIGH); 
  digitalWrite(f2, HIGH); 
  digitalWrite(f3, HIGH); 
  digitalWrite(f4, HIGH); 

}

void loop() 
{

if (Serial.available() > 0)
  {   
       
    inByte = Serial.read();

    if(inByte == 'F')
    {    
      if( count == 0)
      {
        digitalWrite(f1, LOW);    
        count = 1;    
      }
      else
      {
        digitalWrite(f1, HIGH);  
        count = 0;
      }
  

    }



     if(inByte == 'S')
    {    
 

      if( count == 0)
      {
        digitalWrite(f2, LOW);    
        count = 1;    
      }
      else
      {
        digitalWrite(f2, HIGH);  
        count = 0;
      }
      
    }

     if(inByte == 'R')
   {    
 

      if( count == 0)
      {
        digitalWrite(f3, LOW);    
        count = 1;    
      }
      else
      {
        digitalWrite(f3, HIGH);  
        count = 0;
      }
      
   }
     if(inByte == 'L')
   {    
 

      if( count == 0)
      {
        digitalWrite(f4, LOW);    
        count = 1;    
      }
      else
      {
        digitalWrite(f4, HIGH);  
        count = 0;
      }
      
   }
 }
