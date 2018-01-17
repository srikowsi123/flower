    int main()
    {
    int a[100],i,n,k,s=0;
    printf("Enter size of the array:");
    scanf("%d", &n);
    printf("Enter %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the no.of values to be added:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
    s=s+a[i];
    }
    printf("Sum of all elements of array = %d",s);
    return 0;
    }
