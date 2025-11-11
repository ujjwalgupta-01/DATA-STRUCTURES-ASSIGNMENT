#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next, *prev;
    Node(int v) { data = v; next = prev = NULL; }
};

class Circular {
    Node *head;
public:
    Circular() { head = NULL; }

    void insFirst(int v) {
        Node *n = new Node(v);
        if (!head) { head = n; head->next = head; return; }
        Node *t = head;
        while (t->next != head) t = t->next;
        n->next = head;
        t->next = n;
        head = n;
    }

    void insLast(int v) {
        Node *n = new Node(v);
        if (!head) { head = n; head->next = head; return; }
        Node *t = head;
        while (t->next != head) t = t->next;
        t->next = n;
        n->next = head;
    }

    void insAfter(int k, int v) {
        if (!head) return;
        Node *t = head;
        do {
            if (t->data == k) {
                Node *n = new Node(v);
                n->next = t->next;
                t->next = n;
                return;
            }
            t = t->next;
        } while (t != head);
    }

    void insBefore(int k, int v) {
        if (!head) return;
        Node *t = head, *p = NULL;
        do {
            if (t->data == k) {
                Node *n = new Node(v);
                n->next = t;
                if (p) p->next = n;
                else {
                    Node *end = head;
                    while (end->next != head) end = end->next;
                    end->next = n;
                    head = n;
                }
                return;
            }
            p = t; t = t->next;
        } while (t != head);
    }

    void del(int k) {
        if (!head) return;
        Node *t = head, *p = NULL;
        do {
            if (t->data == k) {
                if (t == head) {
                    Node *end = head;
                    while (end->next != head) end = end->next;
                    if (head->next == head) head = NULL;
                    else { end->next = head->next; head = head->next; }
                } else p->next = t->next;
                delete t; return;
            }
            p = t; t = t->next;
        } while (t != head);
    }

    void find(int k) {
        if (!head) return;
        Node *t = head;
        do {
            if (t->data == k) { cout << "Found\n"; return; }
            t = t->next;
        } while (t != head);
        cout << "Not found\n";
    }

    void show() {
        if (!head) { cout << "Empty\n"; return; }
        Node *t = head;
        do {
            cout << t->data << " ";
            t = t->next;
        } while (t != head);
        cout << endl;
    }
};

class Doubly {
    Node *head;
public:
    Doubly() { head = NULL; }

    void insFirst(int v) {
        Node *n = new Node(v);
        if (head) { n->next = head; head->prev = n; }
        head = n;
    }

    void insLast(int v) {
        Node *n = new Node(v);
        if (!head) { head = n; return; }
        Node *t = head;
        while (t->next) t = t->next;
        t->next = n; n->prev = t;
    }

    void insAfter(int k, int v) {
        Node *t = head;
        while (t) {
            if (t->data == k) {
                Node *n = new Node(v);
                n->next = t->next;
                if (t->next) t->next->prev = n;
                n->prev = t; t->next = n;
                return;
            }
            t = t->next;
        }
    }

    void insBefore(int k, int v) {
        Node *t = head;
        while (t) {
            if (t->data == k) {
                Node *n = new Node(v);
                n->next = t;
                n->prev = t->prev;
                if (t->prev) t->prev->next = n;
                else head = n;
                t->prev = n;
                return;
            }
            t = t->next;
        }
    }

    void del(int k) {
        Node *t = head;
        while (t) {
            if (t->data == k) {
                if (t->prev) t->prev->next = t->next;
                else head = t->next;
                if (t->next) t->next->prev = t->prev;
                delete t; return;
            }
            t = t->next;
        }
    }

    void find(int k) {
        Node *t = head;
        while (t) {
            if (t->data == k) { cout << "Found\n"; return; }
            t = t->next;
        }
        cout << "Not found\n";
    }

    void show() {
        if (!head) { cout << "Empty\n"; return; }
        Node *t = head;
        while (t) {
            cout << t->data << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main() {
    Circular c;
    Doubly d;
    int ch, t, v, k;

    while (true) {
        cout << "\n1.Circular  2.Doubly  3.Exit: ";
        cin >> t;
        if (t == 3) break;
        cout << "1.IF 2.IL 3.IA 4.IB 5.D 6.F 7.S: ";
        cin >> ch;

        if (t == 1) {
            if (ch == 1) { cin >> v; c.insFirst(v); }
            else if (ch == 2) { cin >> v; c.insLast(v); }
            else if (ch == 3) { cin >> k >> v; c.insAfter(k, v); }
            else if (ch == 4) { cin >> k >> v; c.insBefore(k, v); }
            else if (ch == 5) { cin >> k; c.del(k); }
            else if (ch == 6) { cin >> k; c.find(k); }
            else if (ch == 7) c.show();
        } 
        else if (t == 2) {
            if (ch == 1) { cin >> v; d.insFirst(v); }
            else if (ch == 2) { cin >> v; d.insLast(v); }
            else if (ch == 3) { cin >> k >> v; d.insAfter(k, v); }
            else if (ch == 4) { cin >> k >> v; d.insBefore(k, v); }
            else if (ch == 5) { cin >> k; d.del(k); }
            else if (ch == 6) { cin >> k; d.find(k); }
            else if (ch == 7) d.show();
        }
    }
}
