function smile(m1,m2){
  if(m1==true && m2==true){
    return true
  }else{
    if((m1==false && m2==false)||(m1==true||m2==true)){
      return true
    }else{
      return false
    }
  }
}
console.log(smile(false,false))
