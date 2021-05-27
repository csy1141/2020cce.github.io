void setup(){
 size(1024,400);
 textFont(createFont("標楷體",50));
}
void draw(){
 background(56,77,254);
 textSize(50);
 int h=hour();
 int m=minute();
 int s=second();
 fill(251,255,223);
 text("Now:"+h+":"+m+":"+s,100,100);
 int total=h*60*60+m*60+s;
 text("總秒數:"+total,100,200);
}
