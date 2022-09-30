#include<simplecpp>

main_program{
double n,i,term,sum;
cin >> n;
i=1,term=1,sum=1;   //impliment plan for iteration 1
repeat (n) {        //plan of iteration i=1...n

    term=term/i;    //term =1/(i-1)! or [new term = previous term/i]   sum=1/0!+1/1!+1/3!+1/4!........1/(i-1)!
    sum=sum+term;
    i=i+1;


}
cout << sum << endl;

}
