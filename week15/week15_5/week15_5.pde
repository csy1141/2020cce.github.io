import processing.sound.*;
SoundFile player;
void setup(){
  size(400, 200);
  textSize(40);
  player=new SoundFile(this, "bell.mp3");
}
void draw(){//畫圖 每秒60次
  background(41, 199, 207);
}
void mousePressed(){
  if(player.isPlaying()){
    player.stop();
  }else{
    player.play();
  }
}
