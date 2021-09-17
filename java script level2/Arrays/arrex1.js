console.log("simple for method")
var mystring="javascript"
for (var i = 0; i < mystring.length; i++) {
  console.log(mystring[i])
}
console.log("for-in method")

var arr=['A','B','C']
for (var letter in arr) {
  console.log(letter)
}
console.log("for-off method")
var arr=['A','B','C']
for (var letter of arr) {
  console.log(letter)
}
console.log("string push unshift  method")
var frouits=["orange","mango"]
console.log("before adding")
console.log(frouits)
console.log("after  adding by using push")
frouits.push("banana")
console.log(frouits)
console.log("after  adding by using unshift")
frouits.unshift("graps")
console.log(frouits)
console.log("removing elements from array methods")
console.log(frouits)
console.log("remove by using pop")
frouits.pop()
console.log(frouits)
console.log("remove by using shift")
frouits.shift()
console.log(frouits)


var numbers=[1,2,4,5,6,7,8,9,10]
console.log(numbers)
console.log("remove by using splice")

numbers.splice(2,6)
console.log(numbers)
console.log("copying an array elemnets by using slice()")
var cop=numbers.slice(1,2)
console.log(cop)
