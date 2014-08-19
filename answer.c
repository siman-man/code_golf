n,s;
main(i){
scanf("%d",&n);
for(;n--;i+=i%3>1?2:4)
s+=i;
printf("%d\n",s);
}
