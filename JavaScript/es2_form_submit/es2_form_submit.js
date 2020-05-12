function controlloInput(){
    error = false;
    if(document.getElementById("name").value == "" || document.getElementById("name").value == "undefined"){
        alert("Nome non valido.");
        error = true;
    }
    if(document.getElementById("surname").value == "" || document.getElementById("surname").value == "undefined"){
        alert("Cognome non valido.");
        error = true;
    }
    if(document.getElementById("genderM").checked == false && document.getElementById("genderF").checked == false){
        alert("Uomo/Donna non valido.");
        error = true;
    }
    if(!error){
        var currentdate = new Date();
        saluto = "";
        if(currentdate.getHours() > 18){
            saluto = "Buonasera";
        }else{
            saluto = "Buongiorno";
        }
        if(document.getElementById("genderM").checked == true){
            saluto+= " signor ";
        }else{
            saluto+= " signora ";
        }
        saluto+= document.getElementById("name").value + " " + document.getElementById("surname").value;
        alert(saluto);
    }
}

function mostraSposata(){ //femmina
    document.getElementById("pSposata").style.display="block";
    document.getElementById("sposata").style.display="block";
    document.getElementById("genderM").checked = false;
}

function nascondiSposata(){ //maschio
    document.getElementById("genderF").checked = false;
    document.getElementById("pSposata").style.display="none";
    document.getElementById("sposata").checked = false;
    document.getElementById("sposata").style.display="none";
}