void setup(){
  size(400, 200); 
  textSize(40);
}
void draw(){//畫圖 每秒60次
  background(41, 199, 207);
  int s=second();//秒
  //text(59-s, 100, 100);
  text(9-s%10, 100, 100);
}
//原   0,1,2,3,4...
//倒數 9,8,7,6,5...
