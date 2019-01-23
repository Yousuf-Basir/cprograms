#define size 10
int array[size];
int front = 0;
int rear = 0;

void enqueue(){
    if(rear < size-1){
        int value;
        printf("Enter the value to enqueue\n");
        scanf("%d", &value);
        array[rear] = value;
        rear++;
    }
    else{
        printf("Array is full \n");
    }
}

void dequeue(){
    if(front==rear){
        printf("Array is empty \n");
    }
    else{
        printf("Dequeued item is %d \n", array[front]);
        front++;
    }
}

void printAll(){
    int i;
    for(i=0; i<rear; i++){
        printf("%d \n", array[i]);
    }
}

main(){
    while(1<2){
        printf("Enter a value to choose an option \n1. enqueue \n2. dequeue \n3. print all\n");
        int choice;
        scanf("%d", &choice);
        switch(choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printAll();
            break;
        default:
            printf("You didn't choose anything \n");
        }
    }

}
