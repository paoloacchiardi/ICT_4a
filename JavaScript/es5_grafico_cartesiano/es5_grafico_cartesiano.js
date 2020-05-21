var canvas = document.getElementById("grafico")
var ctx = canvas.getContext("2d")
//asse x e y
ctx.moveTo(canvas.width/2,10)
ctx.lineTo(canvas.width/2,canvas.height)
ctx.moveTo(0,canvas.height/2)
ctx.lineTo(canvas.width-10,canvas.height/2)
//freccia dx
ctx.moveTo(canvas.width-10,canvas.height/2-5)
ctx.lineTo(canvas.width,canvas.height/2)
ctx.lineTo(canvas.width-10,canvas.height/2+5)
ctx.lineTo(canvas.width-10,canvas.height/2-5)
//freccia up
ctx.moveTo(canvas.width/2-5,10)
ctx.lineTo(canvas.width/2,0)
ctx.lineTo(canvas.width/2+5,10)
ctx.lineTo(canvas.width/2-5,10)
//scritte
ctx.font = "normal 30px Arial"
ctx.fillText("x",canvas.width-20,canvas.height/2+25)
ctx.fillText("y",canvas.width/2-25,20)
ctx.fillText("o",canvas.width/2+5,canvas.height/2+20)
ctx.stroke()