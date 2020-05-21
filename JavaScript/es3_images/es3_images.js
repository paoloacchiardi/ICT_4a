function carica(){
    var ctx = CNV.getContext("2d");
    ctx.moveTo(0,0);
    ctx.lineTo(300,0);
    ctx.lineTo(300,200);
    ctx.lineTo(0,200);
    ctx.lineTo(0,0);
    ctx.fillStyle = "green";
    ctx.fill();
    ctx.strokeStyle = "blue";
    ctx.stroke();
    ctx.strokeStyle = "black";
    ctx.strokeText("Passa il mouse sopra l'immagine per vedere il nome in inglese", 10, 100);
}

function changeText(numberImage){
    var ctx = CNV.getContext("2d");
    ctx.moveTo(0,0);
    ctx.lineTo(300,0);
    ctx.lineTo(300,200);
    ctx.lineTo(0,200);
    ctx.lineTo(0,0);
    ctx.fillStyle = "green";
    ctx.fill();
    ctx.strokeStyle = "blue";
    ctx.stroke();
    ctx.strokeStyle = "black";
    switch(numberImage){
        case 1:  ctx.strokeText("big city", 10, 100);
        break;
        case 2:  ctx.strokeText("mountain", 20, 100);
        break;
        case 3:  ctx.strokeText("sea", 20, 100);
        break;
        case 4:  ctx.strokeText("pencil", 20, 100);
        break;
        case 5:  ctx.strokeText("rubber", 20, 100);
        break;
        case 6:  ctx.strokeText("ruler", 20, 100);
    }
}