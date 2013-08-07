void setup()
{
  Mouse.begin();
  delay(1000);
  Mouse.move(500,500,0);
   
  Mouse.click();
  Mouse.click(MOUSE_RIGHT);
  Mouse.release();
}
void loop()
{
  delay(10);
}
