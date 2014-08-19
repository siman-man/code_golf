n,s;
main(i){
scanf("%d",&n);
for(;n;i+=2)
if(i%3)s+=i,n--;
printf("%d\n",s);
}
