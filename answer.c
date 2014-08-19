n,s,i;
int main(){
scanf("%d",&n);
for(;n>0;i++){
if(i%2!=0&&i%3!=0){
s+=i;
n--;
}
}
printf("%d\n",s);
}
