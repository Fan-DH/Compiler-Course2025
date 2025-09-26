declare i32 @getint()
declare void @putint(i32)     
declare void @putfloat(float) 

define i32 @mul(i32 %n) {
entry:                                     
  %cmp = icmp slt i32 %n, 2                
  br i1 %cmp, label %return1, label %loop   

return1:
  ret i32 1               

loop:                     
  %i = alloca i32         
  %f = alloca i32         
  store i32 2, i32* %i    
  store i32 1, i32* %f    
  br label %while         

while:                                      
  %i_tmp = load i32, i32* %i                 
  %cmp2 = icmp sle i32 %i_tmp, %n            
  br i1 %cmp2, label %body, label %end_mul   

body:                               
  %f_tmp = load i32, i32* %f        
  %new_f = mul i32 %f_tmp, %i_tmp   
  store i32 %new_f, i32* %f         
  %new_i = add i32 %i_tmp, 1       
  store i32 %new_i, i32* %i         
  br label %while                   

end_mul:                            
  %f_final = load i32, i32* %f      
  ret i32 %f_final                  
}

define i32 @main() {
entry:                          
  %arr = alloca [2 x float]     
  %arr0_ptr = getelementptr [2 x float], [2 x float]* %arr, i32 0, i32 0       
  %arr1_ptr = getelementptr [2 x float], [2 x float]* %arr, i32 0, i32 1     
  store float 0.25, float* %arr0_ptr 
  store float 0.5, float* %arr1_ptr      

  %input = call i32 @getint()            
  %result = call i32 @mul(i32 %input)    
  call void @putint(i32 %result)         

  %cmp = icmp slt i32 %result, 10               
  br i1 %cmp, label %if_true, label %if_false   

if_true:
  %val0 = load float, float* %arr0_ptr   
  call void @putfloat(float %val0)       
  br label %main_end

if_false:
  %val1 = load float, float* %arr1_ptr   
  call void @putfloat(float %val1)
  br label %main_end

main_end:
  ret i32 0     
}

