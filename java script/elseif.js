var a=Number(prompt("enter a value"))
var b=Number(prompt("enter b value"))
var c=Number(prompt("enter c value"))
if(a<b && a<c)
{
  console.log(a+" is small");
}
else
{
  if(b<c){
    console.log(b +"is small");

  }
  else
  {
    console.log( c+" is small");
  }
}
var temp=Number(prompt("enter temperature"))
if(temp>80)
{
  console.log("HOT")
}
if(80>temp && temp<80){
  console.log("Avg")
}
if(32>temp && temp<50){
    console.log("cold")
  }
if(temp<30){
  console.log("chill")
}
