int array[10];
int size=10;
int top = -1;
void push(){
    int pushValue;
    if(top >= size-1){
        printf("stack is full");
    }
    else{
        top++;
        printf("Enter the value to push \n");
        scanf("%d", &pushValue);
        array[top] = pushValue;
    }
};


void pop(){
    if(top <= -1){
        printf("Stack is empty \n");
    }
    else{
        printf("The poped element is %d", array[top]);
        top--;
    }
};
void printAll(){
    int i;
    if(top >= 0){
        for(i=top; i>=0; i--){
            printf("%d\n", array[i]);
        }
    }
    else{
        printf("Stack is empty\n");
    }
};

main(){
    while(1<2){
        printf("Choose any of the option \n");
        printf(" 1. Push \n 2. Pop \n 3. Print all\n");
        int choice;
        scanf("\n %d", &choice);
        switch(choice){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            printAll();
            break;
        default:
            printf("You didn't choose anything \n");
        }
    }

}
