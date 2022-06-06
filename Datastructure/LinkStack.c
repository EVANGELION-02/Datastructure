/* 스택 초기화 */
void init_stack(LinkStack *LS) {
	return LS->top = NULL;
}

/* 공백 스택 확인 */
int is_stack_empty(LinkStack *LS) {
	return LS->top == NULL;
}

/* 포화 스택 확인 */
int is_stack_full(Snode *node) {
	return node == NULL;
}

/* 스택에 값 삽입 */
void push(LinkStack *LS, Datatype data) {
	Snode *new = (char *)malloc(sizeof(Snode));
	if(is_stack_full) {
		...
	}
	else {
		new->data = data;
		new->link = LS->top;
		LS->top = new;
	}
}

/*스택에 값 삭제 */
int pop(LinkStack *LS) {
	if(is_stack_empty) {
		...
	}
	else {
		Snode *deleted = LS->top;
		Datatype data = deleted->data;
		LS->top = LS->top->link;
		free(deleted);
		return data;
	}
}
