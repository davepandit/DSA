### What is the diff between the push_back and the emplace_back?
Both the methods are used to insert ele at the end of the vector but the approach in how they do so differ.

When we use the push_back method then first an object is created and then is pushed back to the vector(now dont take the literal meaning of the term object jaise ki javascript ke aandar more or less everything is an object something similar in this case).

When we use the emplace_back method the hum man sakte hai ki the object banne ka kaam and the insertion ka kaam are taking place at the same time so thoda fast to hai this emplace_back as compared to the push_back.

A very interesting thing about the vector is basically we can insert ele into this container even we have specified some sort of a size.

### What is an iterator and how does it function?

What is an iterator?

An iterator is an object that allows you to traverse through elements of a container (like an array, vector, list, etc.).
You can think of it as a smart pointer that knows how to move through a specific container.


Purpose of iterators:

To provide a uniform way to access elements in different types of containers.
To allow algorithms to work with different container types without knowing the specifics of the container.


How they work:

Iterators act like pointers to elements in the container.
They have operations like increment (++), dereference (*), and comparison (==, !=)


### A very beautiful keyword 'auto'=>

```c++
auto a = 'hi there dave here';//the a automatically becomes a string here
//so basically in iterators also we can do something very similar
for(auto it = v1.begin(); it!=v1.end(); it++){
    cout<<'This are some very holy words these are so much holy that u even cannot see them'<<endl;
}
```

### Now we can think of containers in STL as objects jo ki basically CRUD operations ko support karte hai