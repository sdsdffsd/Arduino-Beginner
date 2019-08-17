bool A;
char B;
int C;
long D;
float E;

void setup()
{
  Serial.begin(9600);
  A = true;
  B = 'b';
  C = 1;
  D = 1234567890;
  E = 3.14;
}

void loop()
{ 
  Serial.print("bool A + char B :");
  Serial.println(a+b);
  Serial.print("char B + int C :");
  Serial.println(b-c);
  Serial.print("int C + long D :");
  Serial.println(c+d);
  Serial.print("long D + float E :");
  Serial.println(d-e);
  delay(100000);
}
