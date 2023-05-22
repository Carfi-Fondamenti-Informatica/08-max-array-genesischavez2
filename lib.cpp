
float funz(float a[],int d){
   float vmax=a[0];
  for(int i=0;i<d;i++){
    if(a[i]>=vmax){
      vmax=a[i];
    }
 }
  return vmax;
 } 
