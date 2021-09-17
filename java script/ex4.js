var n=Number(prompt("enter number"))
var rev=0
while(n!=0){
  var rem=n%10;
  var rev=rev*10+rem;
  n=n/10;
}
console.log(rev)
