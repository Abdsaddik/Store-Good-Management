# Store-Good-Management
- This framework can be used to create store management applications. Suppose one has a store with a lot of goods with different mounts. All these items can be stored in one Object of the class proStore (Product Store) as illustrated in main.cpp. One can reduce/increase number of every single item of the good, change the price and report what still in there in the store.  
- Ofcourse, one can manage several store items with several objects of the class proStore.  
Please have a look on main.cpp where I gave several examples how to deal with the code ( for example: insert, remove and report date)

## Code Compilation and Running
The code is compiled with cmake. All you need is to clone the repository, cmake the code and run the binary file. In details the steps are: 
- Clone the project: 
```
git clone https://github.com/Abdsaddik/Store-Good-Management.git
``` 
- Go inside the folder **Store-Good-Management** where you cloned it
- Cmake the project and generate the binary file as follows:
```
cmake -Bbuild -H.
cd build
```
- Finally, run the binary file:
```
./store
```


