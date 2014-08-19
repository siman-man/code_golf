int main(){
int n=0;
int s=0;
scanf("%d",&n);
for(int i=1;n>0;i++){
if(i%2!=0&&i%3!=0){
s+=i;
n--;
}
}
printf("%d\n",s);
return 0;
}
