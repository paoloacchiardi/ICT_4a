var valori = [3, 10, 1, 7, 12]

function disegno() {
  var canvas = document.getElementById("canvas")
  var ctx = canvas.getContext("2d")
  var pos = 25
  for (var v in valori) {
    ctx.fillStyle=getRandomColor()
    ctx.fillRect(pos, 145, 25, -(valori[v]*10))
    pos+=50
  }
  ctx.moveTo(0, 145)
  ctx.lineTo(300, 145)
  ctx.strokeStyle = getRandomColor()
  ctx.stroke()
}

function getRandomColor(){
  var letters = '0123456789ABCDEF'
  var color = '#'
  for (var i = 0; i < 6; i+=1){
    color += letters[Math.floor(Math.random() * 16)]
  }
  return color
}