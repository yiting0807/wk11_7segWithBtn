

byte btn;
byte pins[7]={13,12,11,10,9,8,7};
byte show[16][7]={
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {1,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,0,1,0,0},
  {0,0,0,1,0,0,0}, 
  {1,1,0,0,0,0,0},
  {0,1,1,0,0,0,1},
  {1,0,0,0,0,1,0},
  {0,1,1,0,0,0,0},
  {0,1,1,1,0,0,0},
};


void setup()
{
  
  for(byte i=0;i<7;++i){
  pinMode(pins[i], OUTPUT);
  }
  pinMode(6, INPUT_PULLUP);
}

void loop()
{
  btn=digitalRead(6);
  
  for(byte i=0;i<16;i++){
    for(byte j=0;j<7;j++){
      btn=digitalRead(6);
      if(btn==HIGH){
        digitalWrite(pins[j],show[i][j]);
      }
      
  else{
         digitalWrite(pins[j],i);
      }
    }
  delay(1000);
  }
}