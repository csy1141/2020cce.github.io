void setup(){
 size(400,200); 
 fill(255,0,0);
 textSize(40);
}
float shift=0, v=0;
void mousePressed(){
 v=random(10)+5; 
}
void draw(){
 background(57,255,127);
 for(int i=0; i<24; i++){
   if(i%3==0) fill(0);
   if(i%3==1) fill(255);
   if(i%3==2) fill(200,180,0);
   float start=radians(0+shift+i*360/24);
   float stop=radians(360/24+shift+i*360/24);
  arc(100,100,180,180,start,stop);
 }
 if(v>0.1){//還有速度時就轉動
   shift+=v;//轉動速度
   v=v*0.99;//慢慢減速
 }
 text(shift,200,100);//印shift
 text(v,200,150);//印轉動速度
}
