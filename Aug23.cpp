/*class Solution {
public:

int getDiv(int a, int b){
    int ans = min(a,b);
    while(ans > 0){
        if(a%ans == 0 && b%ans == 0){
           break;
        }
        ans--;
    }
    return ans;
}

    string fractionAddition(string expression) {
        int n = expression.length();

        int deno = 1;

        for(int i = 0; i < n-1; i++){
            if(expression[i] == '/'){
                if(i+2 < n && (expression[i+1] == '1' && expression[i+2] == '0')){
                    deno *= 10;
                }
                else{
                    deno *= int(expression[i+1] - '0');
                }
            }
        }

        int num = 0;
        int sign = 1;
        for(int i = 0; i < n-2; i++){

        if(expression[i] == '-') sign = -1;
        if(expression[i] == '+') sign = +1;

        if(expression[i+1] == '/'){
           int fact = 0;            
          if(i+3 < n && (expression[i+2] == '1' && expression[i+3] == '0')){
              fact = deno/10;
          }
          else{
            int d = int(expression[i+2] - '0');
            fact = deno/d;
          }
            int e = 0;
            if(i-1 >=0 && (expression[i] == '0' && expression[i-1] == '1')){
               e = 10;
            }
            else{
                e = int(expression[i] - '0');
            }

            num += sign*e*fact;
        }
        }

        if(num == 0){
            return "0/1";
        }

        string ans = "";
        if(num < 0){
           ans.push_back('-');
           num = -num;
        }
       int gcd = getDiv(num, deno);

        num = num/gcd; 
        deno = deno/gcd;

        ans += to_string(num) + '/' + to_string(deno);
       return ans;  
    }
};*/