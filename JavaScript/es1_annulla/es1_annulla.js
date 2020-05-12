 /*<!DOCTYPE html>
<html>
<body>

<button onclick="nome()">Inserisci il tuo nome</button>

<script> */
function nome() {
var messaggio;
var nome = prompt("Inserisci il tuo nome:", "Nome");
if (nome == ""){
      messaggio = "Non hai inserito il nome";
      }
	 else if(nome == null){
     messaggio = "Hai premuto su annulla";
     }
     else{
     messaggio = "Ciao " + nome + "!";
     }
alert(messaggio);
}
/*</script>
</body>
</html> */