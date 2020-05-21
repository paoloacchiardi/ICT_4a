var canvas = document.getElementById("grafico")
var ctx = canvas.getContext("2d")
//asse x
ctx.moveTo(0,canvas.height/2)
ctx.lineTo(canvas.width-10,canvas.height/2)
//freccia dx
ctx.moveTo(canvas.width-10,canvas.height/2-5)
ctx.lineTo(canvas.width,canvas.height/2)
ctx.lineTo(canvas.width-10,canvas.height/2+5)
ctx.lineTo(canvas.width-10,canvas.height/2-5)
ctx.stroke()
//vettore
const N_MAX = 10
const N_MIN = -10
let t = new Array()
let rnd

for(let i = 0; i < 10; i++){
    rnd = Math.floor(N_MIN + (Math.random() * ((N_MAX - (N_MIN)) + 1))) //floor genera solo numeri int
    t.push(rnd)
}

let max = Math.abs(t[0]) //valore assoluto del numero passato come parametro
for(let i = 0; i < 10; i++){
    if(Math.abs(t[i]) > max){
        max = Math.abs(t[i]) //salvo in max il valore assoluto massimo contenuto nell'array
    }
}
let step = 50
const screen = (canvas.height/2 - 10) / max
ctx.moveTo(0,canvas.height/2 - t[0] * screen)
ctx.fillText(t[0], 5, canvas.height/2 - t[0] * screen)
for(let i = 1; i < 10; i++){
    ctx.lineTo(step, canvas.height/2 - t[i] * screen)
    ctx.fillText(t[i], step - 10, canvas.height/2 - t[i] * screen)
    step = step + 50
    ctx.stroke()
}