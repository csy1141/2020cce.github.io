void setup(){
  size(1024,400);
}
void draw(){
  if(mousePressed)background(255,215,130);
  else background(248,254,131);
  textSize(50);
  text(a,100,100);
}
int a=0;
void mousePressed(){
  a++;
}
