# Fast Power
## Implementations
### Recursive version
```
int fastPower(int a, int b) {
  if(b==0) return 1;
  int temp = fastPower(a, b/2); 
  int result = temp * temp; // replace with a = (a*a) % MOD; where MOD = something like 1e9 + 7 {prime}
  if(b%2) result *= a;
  return result;
}
```
### Iterative version
```
int fastPower(int a, int b) {
  int result = 1;
  while(b) {
    if(b%2) result *= a;
    a *= a; // replace with a = (a*a) % MOD; where MOD = something like 1e9 + 7 {prime}
    b /= 2;
  }
}
```
## Notes
- Its important to take into account the overflows when using fastpower/ power, if needs be replace int with long long
- more info here: https://cp-algorithms.com/algebra/binary-exp.html
