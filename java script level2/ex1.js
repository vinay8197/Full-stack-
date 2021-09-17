function ls(a,b,c)
{
  if(a==13){
    return 0
  }else{
    if(b==13){
      return a
    }if(c==13){
      return a+b

    }else{
      return a+b+c
    }
  }

}
console.log(ls(5,2,3))
