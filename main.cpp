#include <QList>
#include <QVector>
#include <iostream>

int main() {
    QVector<int> list1;
    std::cout << "Task 1\n";
    for (int i = 0; i < 20; i++) {
        if (i%2 == 1)
            list1.insert(i, i);
        else
            list1.insert(i,(-1*i));
    }
    QVector<int> list1New;
    int q = 0;
    for (int i = 0; i < 20; i++) {
        if (list1[i] > 0) {
            list1New.insert(q, list1[i]);
            q++;
        }
    }
    for (int i = 0; i < 20; i++) {
        if (list1[i] <= 0) {
            list1New.insert(q, list1[i]);
            q++;
        }
    }
    for (int i = 0; i < 20; i++) {
        std::cout<<list1New[i]<<" ";
    }
    std::cout << "\n";
    std::cout << "Task 2\n";
    QList<int> list2;
    list2.insert(0, -111);
    for (int i = 1; i < 20; i++) {
        if (i%4 == 0)
            list2.insert(i, i);
        else
            list2.insert(i,(-1*i));
    }
    QListIterator<int> k(list2);
    QList<int> list2New;
    q = 0;
    int key;
    int counter = 0;
    while (k.hasNext()){
        key = k.next();
        if (counter == 1) {
            list2New.insert(q, key);
            q++;
        }
        if (key > 0) {
            counter++;
        }
    }
    int sum = 0;
    for (int i = 0; i < list2New.size() - 1; i++) {
        sum += list2New[i];
    }
    std::cout << sum << " ";
}
