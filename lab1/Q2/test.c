int getint();
void putint(int x);
void putfloat(float a);

int mul(int n) {
    if (n < 2) {
        return 1; 
    }
    int i = 2;
    int f = 1;
    while (i <= n) {
        f = f * i;
        i = i + 1;
    }
    return f;
}

int main() {
    float arr[2];
    arr[0]=0.1;
    arr[1]=0.9;
   
    int input = getint();
    int result = mul(input);
    
    putint(result);

    if (result < 10) {
        putfloat(arr[0]);
    } else {
        putfloat(arr[1]);
    }

    return 0; 
}

