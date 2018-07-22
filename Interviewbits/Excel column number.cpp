int Solution::titleToNumber(string A) {
    int colNo=0,num=0;
    string reversed(A);
    reverse(reversed.begin(),reversed.end());
    for(int i=0;i<A.length();i++){
        switch(A[i]){
            case 'A' : colNo=1;
            break;
             case 'B' : colNo=2;
            break;
             case 'C' : colNo=3;
            break;
             case 'D' : colNo=4;
            break;
             case 'E' : colNo=5;
            break;
             case 'F' : colNo=6;
            break;
             case 'G' : colNo=7;
            break;
             case 'H' : colNo=8;
            break;
             case 'I' : colNo=9;
            break;
             case 'J' : colNo=10;
            break;
             case 'K' : colNo=11;
            break;
             case 'L' : colNo=12;
            break;
             case 'M' : colNo=13;
            break;
             case 'N' : colNo=14;
            break;
             case 'O' : colNo=15;
            break;
             case 'P' : colNo=16;
            break;
             case 'Q' : colNo=17;
            break;
             case 'R' : colNo=18;
            break;
             case 'S' : colNo=19;
            break;
             case 'T' : colNo=20;
            break;
             case 'U' : colNo=21;
            break;
             case 'V' : colNo=22;
            break;
             case 'W' : colNo=23;
            break;
             case 'X' : colNo=24;
            break;
             case 'Y' : colNo=25;
            break;
             case 'Z' : colNo=26;
            break;
        }
    num+=colNo*pow(26,i);
    }
    return num;
}
