
// let country="India";
// let continent="Asia";
// let population="1.417B";
// console.log(country);
// console.log(continent);
// console.log(population);
// let isIsland=true;
// let language;
// console.log(isIsland)
// console.log(language)
// let myNullVariable = null;
// console.log(typeof myNullVariable);

// var myObject = {
//     firstname : "vishwas",
//     lastname : "mishra",
//     state : "uttar-pradesh",
//     country : "india",
//     city : "gorakhpur",
// }
// console.log(myObject);

// cons myConstantVariable = "hey bro, what's up...";
// console.log(myConstantVariable);


// 
// let myName = "Vishwas mishra";
// console.log(myName);
// myName = "Mishra";
// console.log(myName);
// let mass = 75;
// let height = 6;
// let BMI = mass / height**2;
// // console.log(BMI);
// let markweight=78;
// let markheight=1.69;
// let Johnweight=92;
// let Johnheight=1.95;
// let johnbmi=Johnweight/(Johnheight**2);

// console.log("John BMI according to first data",johnbmi);
// let markbmi=markweight/(markheight*markheight);
// console.log("Mark BMI according to first data",markbmi);

//  markweight=95;
//  markheight=1.88;
//  Johnweight=85;
//  Johnheight=1.76;
//  johnbmi=Johnweight/(Johnheight**2);
// console.log("John BMI according to second data",johnbmi);

//  markbmi=markweight/(markheight*markheight);
// console.log("Mark BMI according to second data",markbmi);
// let myFirstName = "Vishwas";
// let myLastName = "Mishra";
// let myName = `Hey, I am ${myFirstName}, ${myLastName}!`;
// console.log(myName);
// const myNumber = 1;
// switch(myNumber){
//     case 1:
//     console.log("the no is 1");
//     break;
//     case 2:
//         console.log("the no is 2");
// }
// int day = sunday;
// switch(myDay){
//     case sunday:
//         console.log("The day is Sunday");
//         break;
//         case monday:
//         console.log("The day is monday");
//         break;
//         case tuesday:
//         console.log("The day is tuesday");
//         break;
//         case wednesday:
//         console.log("The day is wednesday");
//         default:
//             console.log("my day case is not there");

// }
// let language ="spanish";
// switch(language){
//     case "chinese":
//         console.log("Most number of native speakers!")
//         break;
//     case  "spanish":
//         console.log("2nd place in number of native speakers")
//         break;
//     case  "english":
//         console.log("3rd place")
//         break;
//     case  "hindi":
//         console.log("Number 4")
//         break;
//     case  "arabic":
//         console.log("5th most spoken language")
//         break;
//     default:
//         console.log("Great language too:D")
                
// }



// const num1 = 5;
// const num2 = 3;

// add two numbers
// const sum = num1 + num2;

// display the sum
// console.log('The sum of ' + num1 + ' and ' + num2 + ' is: ' + sum);


// function add(a,b){
//     console.log(a+b);
// }
// add(10,15);





// function grading(Sub1,Sub2,Sub3,Sub4,Sub5){
//     let percentage=(Sub1+Sub2+Sub3+Sub4+Sub5)/5*100;
// if(percentage>=90){
//     console.log("Grade A")
// }
// else if(percentage>=80){
//     console.log("Grade B")
// } 
// else if(percentage>=70){
//     console.log("Grade C")
// } 
// else if(percentage>=60){
//     console.log("Grade D")
// } 

// else if(percentage>=40){
//     console.log("Grade E")
// } 
// else console.log("Grade F")
// }

// grading(90,97,95,95,92);


// function add(num1,num2){
//     console.log(num1+num2);
// }
// add(2,4);

// function largest(a,b,c){
//     if(a==b && a>c){
//          console.log(a+" is the largest" )
//         }
//         else if(a==b && a==c){
//          console.log(a+" is the largest")
//         }
//         else if( a>b &&a>c){
//             console.log("Largest number is "+ a)
//         }
//         else if ( b>c && b>a) console.log("Largest number is "+b)
//         else console.log("Largest number is "+c)
// }
// largest(2,5,6);
// largest(2,2,2);
// largest(1,2,2);



// function square(num){
//     return num*num;
// }
// console.log(square(5));

// function isInRange(upbound,lowbound,num){
//     if(num>=lowbound && num<=upbound)return true;
// }
//  let ans=isInRange(2,20,25);
//  console.log("The given number is out of range");

//  function evenOrOdd(num){
//     if(num%2===0){
//             console.log("The given number "+num+" is Even")
//         }
//         else  console.log("The given number "+num+" is Odd")
//  }
//  evenOrOdd(27);


// function cToF(celsius) 
// {
//   var cTemp = celsius;
//   var cToFahr = cTemp * 9 / 5 + 32;
//   var message = cTemp+'\xB0C is' + cToFahr + '\xB0F.';
//     console.log(message);
// }

// function fToC(fahrenheit) 
// {
//   var fTemp = fahrenheit;
//   var fToCel = (fTemp - 32) * 5 / 9;
//   var message = fTemp+'\xB0F is' + fToCel + '\xB0C.';
//     console.log(message);
    
// }
// cToF(60);
// fToC(45);


// function CalculateArea() {
//     var radius = document.getElementById('txtRadius').value;
//     alert("The area of the circle is " + (radius * radius * Math.PI));
// }




// function areaRectangle(width, length)
// {
// 	let area = width * length;
// 	return area;
// }
// let width = 5;
// let length = 6;
// document.write("Area = " + areaRectangle(width, length) + "<br>");





 
// areaAndPerimeter(2);
//  function isBothEqual(num1,num2){
//     if(num1==num2){
//         return "Both number are equal";
//     }
//     else{
//         return "Both number are not equal";
//     }
//  }
//  console.log(isBothEqual(7,7));



// let isBothEqual=function(num1,num2){
//   if(num1==num2){
//     return "true"
//   }
//   else{
//     return "false"
//   }
// };
// console.log(isBothEqual(7,7));

// let areaOfRectangle=function(l,b){
//   return l*b;
// }
// console.log(areaOfRectangle(5,5));

// let perimeter=function(radius){
//   return 2*3.14*radius;
// }
// console.log(perimeter(9,2));

// arrow function......

// let helloArrow = (l,b) => l*b;
// console.log(helloArrow(5,10));

// let helloMyWorld = (radius) => 2*3.14*radius;
// console.log(helloMyWorld(3));
// let greet=()=>{
//     console.log("Hello world")
// }
//  counterFunc = (counter)=>{ 
//    if(counter>100)
//         counter = 0;
//     else
//         counter++;
//        return counter;

//     }
    
//     let ans=counterFunc(101);
//     console.log(ans)
//     let counterFunction=function(counter){
//     if(counter>100)counter=0;
//     else counter++;
//     return counter;
//     }
//     ans=counterFunction(23)
//     console.log(ans)


    // let gret = (name) => {
    //     return `Hey ${name}!`;
    //   };
       
    //   console.log(greet("Vishwas")); 
    //   console.log(greet("Mishra"));
    



// let calcAverage = (a,b,c) => a+b+c;
// console.log(5,6,7)


// 1st
// const calcAverage = (a, b, c) => (a + b + c) / 3;
// console.log(calcAverage(3, 4, 5));

// 2nd
// let scoreDolphins = calcAverage(44, 23, 71);
// let scoreKoalas = calcAverage(65, 54, 49);
// console.log(scoreDolphins, scoreKoalas);

// 3rd
// const checkWinner = function (avgDolphins, avgKoalas) {
//     if (avgDolphins >= 2 * avgKoalas) {
//       console.log(`Dolphins win (${avgDolphins} vs. ${avgKoalas})`);
//     } else if (avgKoalas >= 2 * avgDolphins) {
//       console.log(`Koalas win (${avgKoalas} vs. ${avgDolphins})`);
//     } else {
//  



// let greetByFullName=(firstName,lastName)=>{
//     console.log`Hello ${firstName}${lastName}`
// }
// greetByFullName("Vishwas","Mishra");

// let kgToLbs=(kgWeight)=>{
//     return kgWeight*2.2;
// }
// let lbs=kgToLbs(65);
// console.log(kgToLbs(65));

// let weightCondition=(lbs)=>{
//     if(lbs>150)return "obese";
//     else if(lbs>=100)return "you are ok"
//     else return "underweight"
// }
// console.log(weightCondition(lbs));




// const numbers = [3,4,6,7];
// console.log(number);



// const data = [
//     {'myName' : 'Vishwas'},
//     [1,2,3,4,5],
//     function helloWorld(){
//         console.log("helloWorld");
//         }
// ]
// console.log(data);


// const myArray = [1,2,3,4,5,'hello','i','am','vishwas',true];
// console.log(myArray[0]);
// console.log(myArray[3]);



// let words = ['hello','I','am'];
// words.push('vishwas');
// console.log(words);
// words.unshift('Good Morning');
// console.log(words);

// words.pop();
// console.log(words);
// words.shift();
// console.log(words);
// let remove = words.pop();
// console.log(remove);
// console.log(words.lenghth);
// console.log(words);



// function areaOfRectangle(l,b){
//     console.log(l*b);
//  }
//  areaOfRectangle(2,5);

//  function areaAndPerimeter(radius){
//    let perimeter=2*3.14*radius;
//     console.log("perimeter is "+perimeter);
//     let area=3.14*radius*radius;
//     console.log("area is "+area);
//  }



const bill = 275;

const tip = bill * (15 / 100);
const tip2 = bill * (20 / 100);

bill >= 50 && bill <= 300
  ? console.log(`tip is ${tip}`)
  : console.log(`tip is ${tip2}`);


// function billValue(){
//     let tip = 50 <= billValue <=300 && billValue*(15/100) : billValue*(20/100);
// }

let billArray = [];
let tipArray = [];
let total = [];

let calTip = (bill) => {
  
    if (bill >= 50 && bill <= 300) {
        billArray.push(bill)
        let tip = (bill * (15 / 100));
        tipArray.push(tip);
        total.push(tip + bill) ;
    } else {
        billArray.push(bill)
        let tip = (bill * (20 / 100));
        tipArray.push(tip);
        total.push(tip + bill) ;
    }
};

calTip(125);
calTip(555);
calTip(44);

console.log(billArray);
console.log(tipArray);
console.log(total);
