int variable = 0;

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  variable = random(0, 360 + 1);
  Serial.println(variable);
  delay(20);
}

//OTRA FORMA:

//int variable = 0;

//void setup()
//{
//  Serial.begin(9600);
//}

//void loop()
//{
//  for(int i =0;i<360; i++)
    
//  {
//    Serial.println(i);
//    delay(20);
//  }
//}
