N=0
def stack(st,num,out,ii,oo):
    if ii>oo:
        st1=st.copy()
        out1=out.copy()
        num1=num.copy()
        out1.append(st1.pop()) 
        if oo+1==N:
            print(out1)
            return
        else:
            stack(st1,num,out1,ii,oo+1)        
    if len(num)>0 :
        st1=st.copy()
        out1=out.copy()
        num1=num.copy()
        st1.append(num1.pop())
        stack(st1,num1,out1,ii+1,oo)
        
    
while True:
    k=0
    try:
        N=int(input('Input the sequence number:'))
    except:
        break
    num=[i+1 for i in range(N)]
    num.reverse()
    st=[]
    out=[]
    stack(st,num,out,0,0)
    
