import processing.sound.*;
SoundFile player;//SoundFile型狀 player變名

void setup(){
  size(400, 200);
  player=new SoundFile(this, "tada.mp3");
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
