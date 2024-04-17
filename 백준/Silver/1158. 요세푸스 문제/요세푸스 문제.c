#include <stdio.h>

struct __node
{
	int data;
	struct __node * next;
};

int main(void)
{
//	freopen("sample_1558.txt", "r", stdin);
	int N, K;
	scanf("%d %d", &N, &K);
	if (K > N)
		return 0;
	struct __node *head;

	struct __node *prevNode = malloc(sizeof(struct __node));
	prevNode->data = 1;
	head = prevNode;
	for (int i = 2; i <=N ; i++)
	{
		struct __node *newNode = malloc(sizeof(struct __node));
		newNode->data = i;
		prevNode->next = newNode;
		prevNode = newNode;
	}
	prevNode->next = head;
	struct __node * cur = prevNode;
	struct __node * delNode;
	putchar('<');
	while (1)
	{
		if (cur == cur->next)
			break;
		for (int i = 0; i < K - 1; i++)
		{
			cur = cur->next;
		}
		delNode = cur->next;
		cur->next = delNode->next;
		printf("%d, ", delNode->data);
		free(delNode);
	}
	printf("%d>", cur->data);
	free(cur);


/*	for (int i = 1; i <=2* N; i++)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	*/
	return 0;
}