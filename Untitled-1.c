#include <stdio.h>
#define MAX 50

int tree[MAX];

// Step 1: Initialize tree with -1
void initTree() {
    for (int i = 0; i < MAX; i++) {
        tree[i] = -1;
    }
}

// Step 2: Insert node into the tree
void insert(int value, int position) {
    if (position >= MAX) {
        printf("Position out of range!\n");
        return;
    }
    if (tree[position] != -1) {
        printf("Node already present at position %d\n", position);
        return;
    }
    tree[position] = value;
    printf("Node inserted at position %d\n", position);
}

// Step 3: Display tree elements (array form)
void display() {
    printf("\nTree elements (Array form):\n");
    for (int i = 0; i < MAX; i++) {
        if (tree[i] != -1) {
            printf("Index %d -> %d\n", i, tree[i]);
        }
    }
}

// Step 4: Main function
int main() {
    int choice, value, position;
    initTree();

    while (1) {
        printf("\n\n--- Tree Operations Using Array ---\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value and position: ");
                scanf("%d %d", &value, &position);
                insert(value, position);
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}