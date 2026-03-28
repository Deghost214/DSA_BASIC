class Stack:
    def __init__(self,size):
        self.top = -1
        self.size = size
        self.arr=[None]*size
        
    def PUSH(self,data):
        if self.top == self.size-1:
            print("Stackis overflow")
        else:
            self.top+=1
            self.arr[self.top]=data
    def POP(self):
        if self.top == -1:
            print("Stack is underflow")
        else:
            self.arr.pop(self.top)
            self.top -= 1
         
    def PEEK(self):
        if self.top == -1:
            print("Stack is underflow")
        else:
            return self.arr[self.top]
    
    def SHOW(self):
        if self.top == -1:
            print("Stack is underflow")
        else:
            for i in range(self.top,-1,-1):
                print(self.arr[i])
                
st  = Stack(6)
st.POP()