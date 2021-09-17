var ham=Number(prompt("enter ham value"))
var cheese=Number(prompt("enetr cheese value"))
var report="blannk"
if(ham==10 && cheese==10)
{
  report="good sales"
}
else {
  if(ham==0 && cheese==0){
    report="no sales"
  }
  else {
    report="some sales"
  }
}
console.log(report)
