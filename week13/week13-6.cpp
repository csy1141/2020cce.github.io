 textFont(createFont("�з���",50));
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
 int total2=12*60*60+0*60+0;
 text("�`���:"+total,100,200);
 int ans=total2-total;
 int hh=ans/60/60%60, mm=ans/60%60, ss=ans%60;
 text("�ٳѤU:"+hh+":"+mm+":"+ss,100,300);
}
