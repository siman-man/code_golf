n,s;
main(i){
scanf("%d",&n);
for(;n--;i+=4/(i%3))
s+=i;
printf("%d\n",s);
}
