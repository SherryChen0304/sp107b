@1   //f1 = 1
D=A
@f1
M=D

@0   //f2 = 0
D=A
@f2
M=D

@8   //n=8
D=A
@n
M=D

@2   //i=2
D=A
@i
M=D

@i   //if(i>n) goto wend;
D=M
@n
D=D-M
@wend
D;JGT

@f1   //f = f1 + f2
D=M
@f2
D=D+M
@f
M=D

@f1   //f2 = f1
D=M
@f2
M=D

@f    //f1=f
D=M
@f1
M=D

@i    //i = i + 1
D=M
@1
D=D+A
@i
M=D

@i
M=M+1

@wbegin
0;JMP
