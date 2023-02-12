.MODEL SMALL
.STACK 100H
.CODE

 MOV cl,03
 MOV AX,0001h
 LABEL1: MUL cl
        MOV BL,cl
        dec cl
        jnz LABEL1

        MOV AH,4CH
        INT 21H
    END

