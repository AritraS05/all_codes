int dequeue(queue *q, int *data) {
    if (q->front == -1) {  
        *data = -1;     
        return 0;
    } else {
        *data = q->a[q->front]; 
        if (q->front == q->rear) {  
            q->front = -1;  
            q->rear = -1;
        } else {
            q->front = q->front + 1;  
        }
        return 1;  
    }
}
