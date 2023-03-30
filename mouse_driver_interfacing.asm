.MODEL SMALL
.STACK
.DATA
    M1 DB 10,13,"MOUSE DRIVER PRESENT$"
    
.CODE
    DISP MACRO XX
        MOV AH,09
        LEA DX,XX
        INT 21H
    ENDM
    
.STARTUP
    MOV AX,0000 
    INT 33H
    CMP AX,0
    JE LAST
    
    DISP M1
    MOV AX,0004H
    MOV CX,0000H 
    MOV DX,0000H 
    INT 33H
    
    MOV AX,0007H 
    MOV CX,0000 
    MOV DX,00FFH 
    INT 33H
    
    MOV AX,0008H 
    MOV CX,0000 
    MOV DX,00FFH
    INT 33H
    
    P:
        MOV AX,0001H
        INT 33H
        
        MOV AX,0003H
        INT 33H
        
        CMP BX,01
        JE LEFT
        JMP RIGHT

    LEFT:
        MOV AX,0011H 
        INT 10H
        
        MOV AH,0CH 
        INT 10H
   
    RIGHT:
        MOV AX,0001H
        INT 33H
        
        CMP BX,02
        JE LAST
        JMP P

    LAST:
        MOV AX,0000 
        INT 10H
.EXIT 
END
