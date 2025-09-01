#define Max 2
#define queuesize 3
#define MAX_SIZE 5
int stack_arr[MAX_SIZE];


int queue[Max],front=-1,rear=-1;
int cq[10],i,queueSize,element,choice,qFront=-1,qRear=-1;



int fact(int number)
{
    if(number==0 || number==1)
    {
        return 1;
    }
    else{
        return (number*fact(number-1));
    }
}

void functionB(int q);
void functionA(int q);

void functionA(int q)
 {
    if (q > 0)
    {
        printf("%d ", q);
        functionB(q - 1);
    }
}

void functionB(int q) {
    if (q > 0)
    {
        printf("%d ", q);
        functionA(q - 1);
    }
}

int sum_tail(int n, int result)
{
    if (n == 0)
        return result;
    return sum_tail(n - 1, result + n);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    int result = gcd(b, a % b);
    return result;
}
void treeRecursion(int n) {
    if (n > 0)
    {
        printf("%d ", n);
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}




void  Bubblesort()
{


    int a[20],limit,i,j,temp;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    printf("Enter the %d Elements\n",limit);
    for(i=0;i<limit;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<limit-1;i++)
    {
        for(j=0;j<limit-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    printf("After Bubble Sorting\n");
    for(i=0;i<limit;i++)
    {

        printf("%d\n",a[i]);
    }
}


void InsertionSort()
{
    {
    int a[30],limit,i,j,temp;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    printf("Enter the %d numbers\n",limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 & a[j]>=temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("After Insertion Sorting\n");
    for(i=0;i<limit;i++)
    {
        printf("%d\n",a[i]);
    }
}
}


void mergeSort(int [],int ,int );
void merge(int[],int ,int,int);
void reading()
{
    int a[50],n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int lb = 0,ub=n-1;

    mergeSort(a,lb,ub);
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void mergeSort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int b[50];
    int i = lb;
    int j = mid+1;
    int k = lb;
    while(i<= mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;

        }
        k++;
    }
    while(i<=mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while(j<=ub)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }

}
void quickSort(int [],int ,int );
int partition(int [],int ,int );
void readingArray()
{
    int a[50],limit,i;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    printf("Enter %d elements\n",limit);
    for(i=0;i<limit;i++)
    {
        scanf("%d",&a[i]);
    }

    quickSort(a, 0, limit - 1);

	printf("\nSorted array:\n");
	for (int i = 0; i < limit; i++)
    {
		printf("%d\n",a[i]);
    }

}

void quickSort(int a[],int lb,int ub)
{

    if(lb<ub)
    {
        int mid = partition(a,lb,ub);
        quickSort(a,lb,mid-1);
        quickSort(a,mid+1,ub);
    }
}

int partition(int a[],int lb,int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end   = ub;
    int temp;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp = a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    temp = a[lb];
    a[lb]=a[end];
    a[end]=temp;
    return end;
}

    void SelectionSort()
{

    int n;


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    int i,j,temp;


    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    for (int i = 0; i <n - 1; i++) {
        int b = i;
        for ( j = i + 1; j < n; j++) {
            if (a[j] < a[b]) {
                b = j;
            }
        }

         temp = a[b];
        a[b] = a[i];
        a[i] = temp;
    }


    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        {
        printf(" \n%d\n ", a[i]);
       }

}

void LinearSearch()
{
    int n;
    int arr[n];
    int i;
    int key;
    int found;
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("Enter the %d element\n",n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
          found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Element %d is present in the array at index %d.\n", key, i);
    } else {
        printf("Element %d is not present in the array.\n", key);
    }


}

int binarySearch(int arr[], int size, int target)

      {

    int low = 0;

    int high = size - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;


        if (arr[mid] == target) {

            return mid;

        }

        else if (arr[mid] < target) {

            low = mid + 1;

        }

        else {

            high = mid - 1;

        }

    }

    return -1;

}

void BinarySearch()

{

    int size;

    printf("Enter the array size\n");

    scanf("%d",&size);

    int arr[size] ;

    printf("Enter the element\n");

    for(int i=0;i<size;i++)

    {

        scanf("%d",&arr[i]);

    }

    int target;

    printf("Enter the search element\n");

    scanf("%d",&target);

    int result = binarySearch(arr, size, target);

    if (result == -1) {

        printf("Element %d is not found in array\n",target);

    } else {

        printf("Element %d is found at index %d\n",target, result);

    }


}



void insert()
{
    int ele;
    if(rear==Max-1)
    {
        printf("\nQueue is full\n");
    }
    else
    {
        printf("Enter the element to insert:\n");
        scanf("%d",&ele);
        if(rear==-1)
        {
            front=rear=0;
            queue[rear]=ele;
        }
        else
        {
            rear++;
            queue[rear]=ele;
        }
        printf("the %d is inserted",ele);
    }
}
void display()
{

    int i;
    if(rear==-1)
    {
        printf("\nQUEUE is Empty.");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d,",queue[i]);
        }
    }

}


void delete()
{
    int ele;
    if(front==-1)
    {
        printf("Queue is Empty\n");
        return;
    }
    else if(front==rear)
    {
        ele=queue[front];
        front=rear=-1;
    }
    else
    {
        ele=queue[front];
        front++;
    }
    printf("\nItem removed:%d\n",ele);
}

void cqInsert()
{
    if(qFront==(qRear+1)%queuesize)
    {
        printf("Queue is full,leads to overflow\n");
        return ;
    }
    printf("Enter the element to insert:\n");
    scanf("%d",&element);
    qRear=(qRear+1)%queuesize;
    cq[qRear]=element;
    if(qFront==-1)
    qFront++;
    printf("the %d is inserted",element);
}
void cqDelete()
{
   if(qFront==-1)
   {
       printf("Queue is empty\n");
       return;
   }
   printf("The deleted element:%d\n",cq[qFront]);
   if(qFront==qRear)
   {
       qFront=qRear=-1;
   }
   else
   {
       qFront=(qFront+1)%queuesize;
   }
}
void cqDisplay()
{
   if(qFront==-1)
   {
       printf("Queue is empty,nothing to display\n");
       return;
   }
   printf("Elements of queue:\n");
   for(i=qFront;i<=qRear;i++)
   {
       printf("%d\t",cq[i]);
   }
   if(qFront>qRear)
   {
       for(i=qFront;i<queuesize;i++)
       {
           printf("%d\t",cq[i]);
       }
       for(i=0;i<=qRear;i++)
       {
           printf("%d\t",cq[i]);
       }
   }
   return;
}


struct node
{
    int info;
    struct node *link;
}*start;

void insertData(int data)
{
    struct node *newnode,*ptr;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(start==0)
    {
        newnode->info=data;
        newnode->link=0;
        start=newnode;
    }
    else
    {
        ptr=start;
        while(ptr->link!=0)
        {
           ptr = ptr->link;
        }
        newnode->info=data;
        newnode->link=0;
        ptr->link=newnode;
    }
    printf("List is created\n");
}
void displayData()
{
    struct node *ptr;
    ptr=start;
    if(start==0)
    {
        printf("List is empty\n");
        return ;
    }
    printf("Linked list contents are\n");
    while(ptr!=0)
    {
        printf("Add :%d(",ptr);
        printf("%d-",ptr->info);
        printf("%d)\n",ptr->link);
        ptr=ptr->link;
    }
    printf("End of list\n");

}
void searchData(int data)
{
    struct node *ptr;
    ptr=start;
    if(ptr!=0)
    {
        while(ptr->link!=0)
        {
            if(ptr->info==data)
            {
                printf("Element %d is found\n",data);
                return;
            }
            else
            {
                ptr=ptr->link;
            }
        }
        if(ptr->info==data)
        {
            printf("Element %d is found\n",data);
        }
        else
        {
            printf("Element %d is not found\n",data);
        }
    }
    else
    {
        printf("List is empty,nothing to search\n");
    }
}





void towerOfHanoi(int n,char from ,char aux,char to);
void tower()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    towerOfHanoi(n,'a','b','c');
}
void towerOfHanoi(int n,char from ,char aux,char to)
{
    if(n==1)
    {
        printf("Move disk 1 from rod %c to rod %c\n",from,to);
        return;
    }
    towerOfHanoi(n-1,from,to,aux);
    printf("move disk %d from rod %c to rod %c\n",n,from,to);
    towerOfHanoi(n-1,aux,from,to);
}



int top=-1;

void push() {
    int item;
    if (top == MAX_SIZE - 1)

    {
        printf("Stack Overflow! Cannot push more elements.\n");
    }
    else

    {
        printf("Enter the element to push: ");
        scanf("%d", &item);
        top++;
        stack_arr[top] = item;
        printf("Pushed %d onto the stack.\n", item);
    }
}


void pop() {
    if (top == -1)
    {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
    }
    else
    {
        printf("Popped element: %d\n", stack_arr[top]);
        top--;
    }
}


void display_stack() {
    if (top == -1)
    {
        printf("Stack is empty.\n");

    }
    else
    {
        printf("Elements in the stack are:\n");
        for (int i = top; i >= 0; i--)

        {
            printf("%d\n", stack_arr[i]);
        }
    }
}

