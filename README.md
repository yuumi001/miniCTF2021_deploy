# miniCTF2021_deploy

# WU miniCTF2021
```
C:\Users\ACER>ncat 192.168.1.6 10001
            .       .
            \`-"'"-'/
             } 6 6 {
            ==. Y ,==
              /^^^\  .
             /     \  )
            (  )-(  )/
            -""---""---   /
           /   Ncat    \_/
          (     ____
           \_.=|____E

Here your flag:
ISPCLUB{SO_WEIRD_CAT}
```
# Overview
Tricky or honest và Honest or tricky là 2 bài từ cùng 1 mã nguồn nên cách giải sẽ y hệt nhau <br>
Khi kết nối đến server thì ta nhận được 
```
iluvinn in ~/miniCTF2021 λ nc 134.209.97.157 10002
                                                                                
                                                                                
                                                                                
                                         I                                      
                                      II   II                                   
                                   II         II                                
                                ,I               II                             
                              I,       IIIIII       II                          
                           II       IIIIIIIIIIII       II                       
                        II       IIIIIIIIIIIIIIIIII#      II                    
                     II        IIIIIIIIIIIIIIIIIIIIIII       II                 
                  II        IIIIIIIIIII       IIIIIIII  II      II              
           IIIIII            IIIIIII            IIIIII  IIIII      II           
           IIIII        II    IIIIIII           IIIIII  IIIIIIII      II.       
            #I      I   IIII    IIIIIII         IIIIII  IIIIIIIIIII     I       
                 IIIII  IIIII    IIIIIIIII     .IIIIII  IIII   IIIII    I       
        IIIII  IIIIIII   IIIIII    IIIIIIIII     IIIII  IIII    IIII    I       
        IIIII  #IIIIII   IIIIII       IIIIIIIII      I  IIII   IIII    I        
           I    IIIIIII   IIIIII  I     IIIIIIIIIII     IIIII# IIII    I        
           I     IIIIII   IIIIIII  II      IIIIIIIIII  IIIIIIIIIII    II        
            I    IIIIIII   IIIIIII  III#     IIIIIII   IIIIIIIIIII    I         
            I     IIIIIII   IIIIIII  IIIII  IIIIIIII  IIIIIIIIIII    I          
             I     IIIIIII   IIIIIII  IIII IIIIIIII   IIIIIIIIII    II          
              I     IIIIIII   IIIIIII  II IIIIIIII#  IIIIIIIIII     I           
               I     IIIIIII   IIIIIIII  IIIIIIIII  *IIIIII II     I            
                I     IIIIIII   IIIIIIIIIIIIIIIII   IIIIII II     I             
                 I     IIIIIII   IIIIIIIIIIIIIII   IIIII* II    #I              
                  I      IIIIII    IIIIIIIIIIII   IIIII  I     II               
                   I.     IIIIIII    IIIIIIIII   IIIII II     I                 
                     I      IIIIIII   IIIIII   IIIIII I      I                  
                      II      IIIIII    III   IIIII        I                    
                        II      IIIIII      IIIIII       II                     
                          II      IIIIII   IIIII       II                       
                            II      IIIIIIIIII       II                         
                               II                  I                            
                                 III            II                              
                                    #II     III                                 
                                        III                                     
                                                                                
                                                                                
Too ez for you, right?
Flag? pass my 100 question pls!!!
Remember, you have 60s
quest: 1
15973591 * 62179688 = Too slow!!!No flag for you bae ¯\_(ツ)_/¯
```
# Solve
Đối với honest or tricky sẽ là 15 câu hỏi trong 100s và tricky or honest là 100 câu hỏi trong 60s <br>
Qua vài lần thử thì có thể thấy server chỉ yêu cầu các phép toán cộng, trừ, nhân, chia vậy nên phương pháp làm đơn giản sẽ là đọc dữ liệu trả về từ server sau đó thực hiện tính toán và gửi trả lại kết quả
```
from pwn import *
p = remote("134.209.97.157", 10002)
for i in range(100):
	p.recvuntil("quest:")
	p.recvuntil("\n")
	r = p.recvuntil("=")
	r = r.replace(" =","")
	r = int(eval(r))
	p.sendline(str(r))
p.interactive()
```
Khi chạy file python ta sẽ có được flag <br>
Honest or tricky

```
[+] Opening connection to 134.209.97.157 on port 10001: Done
[*] Switching to interactive mode
 yes!
ISPCLUB{m4th_f0R_dUmm13S!!!!!!!}
[*] Got EOF while reading in interactive
$  
```

<br>
Flag: ISPCLUB{m4th_f0R_dUmm13S!!!!!!!}
<br><br>

Tricky or honest <br>

```
iluvinn in ~/miniCTF2021 λ python solve.py    
[+] Opening connection to 134.209.97.157 on port 10002: Done
[*] Switching to interactive mode
 yes!
ISPCLUB{F45T_a5_71ghtN1n9!!!!}
[*] Got EOF while reading in interactive
$  
```
<br>
Flag: ISPCLUB{F45T_a5_71ghtN1n9!!!!}


