void setup(){
  size(400, 200); 
  textSize(40);
}
void draw(){//畫圖 每秒60次
  background(41, 199, 207);
  int s=second();//秒
  text(s, 100, 100);
}
