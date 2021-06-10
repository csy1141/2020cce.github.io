function setup(){
  createCanvas(400, 200); 
  textSize(40);
}
function draw(){//畫圖 每秒60次
  background(41, 199, 207);
  let s=second();//秒
  text(s, 100, 100);
}
