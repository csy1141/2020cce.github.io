import processing.sound.*;
SoundFile player;
void setup(){
  size(400, 200);
  textSize(40);
  player=new SoundFile(this, "tada.mp3");
}
void draw(){//畫圖 每秒60次
  background(41, 199, 207);
  int s=second();//秒
  //text(59-s, 100, 100);
  text(9-s%10, 100, 100);
  if(9-s%10==0)player.play();
}
