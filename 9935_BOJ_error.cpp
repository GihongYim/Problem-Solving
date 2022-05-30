#include <iostream>
#include <string>
using namespace std;

typedef struct _NODE
{
    char c;
    struct _NODE *next;
} NODE;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    string target;

    cin >> str;
    cin >> target;

    NODE *head = new NODE;
    NODE *curr;
    NODE *prev;

    curr = head;

    for (int i = 0; i < str.size(); i++)
    {
        NODE *newNode = new NODE;
        
        newNode->next = NULL;
        newNode->c = str[i];
        
        curr->next = newNode;
        curr = newNode;
    }

    bool finished = false;
    NODE *temp;
    while(!finished)
    {
        finished = true;
        curr = head->next;
        prev = head;
        while (curr != NULL)
        {
           
            if (curr->c == target[0])
            {
                temp = curr;
                bool isvalid = true;
                for (int i = 0; i < target.size(); i++)
                {
                    if (temp == NULL || temp->c != target[i])
                    {
                        isvalid = false;
                        break;
                    }
                    temp = temp->next;
                }
                if (isvalid)
                {
                    finished = false;
                    prev->next = temp;
                    curr = temp;
                    continue;
                }
            }
            prev = curr;
            curr = curr->next;          
        }
    }
    if (head->next == NULL)
    {
        cout << "FRULA\n";
    }
    else
    {
        curr = head->next;
        while (curr != NULL)
        {
            cout << curr->c;
            curr = curr->next;
        }
        cout << '\n';
    }
    return 0;
}