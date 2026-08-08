# Circular Linked List

Implementation of a **Circular Linked List in C**.

## Concepts

* Structures
* Pointers
* Dynamic memory allocation
* Circular linked list
* Linked list traversal
* String handling

## Implementation

Each node contains:

* Application name
* Pointer to the next node

The last node points back to the first node.

```text
Head
 ↓
[Chrome] → [VS Code] → [Spotify]
    ↑                       │
    └───────────────────────┘
```

## Input

The program accepts application names until `exit` is entered.

Example:

```text
Chrome
VS Code
Spotify
exit
```

## Output

```text
Circular Linked List - Running Applications
Running Applications
Chrome
VS Code
Spotify
```

## Language

**C**

## File

* `main.c` — Circular Linked List implementation
