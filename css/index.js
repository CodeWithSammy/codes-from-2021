// var arr =[1,2,3,4,5,6,7,8,9,10,11];
// arr.forEach(function(element){
//     console.log(element);
    
// });

tn = document.getElementsByTagName('div');
console.log(tn);

createdElement = document.createElement('button');
createdElement.innerText = "Click me";
tn[0].appendChild(createdElement);
createdElement.style.border = '10px solid blue'  