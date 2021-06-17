void setup(){
 size(400,200); 
 fill(255,0,0);
 textSize(40);
}
float shift=0, v=10;
void draw(){
 background(57,255,127);
 float start=radians(90+shift);
 float stop=radians(180+shift);
 arc(100,100,180,180,start,stop);
 if(v>0.0001){//還有速度時就轉動
  shift+=v;//轉動速度
  v=v*0.99;//慢慢減速
 }
 text(shift,200,100);//印shift
 text(v,200,150);//印轉動速度
}
