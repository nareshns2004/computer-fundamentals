# Distributed Transparent Memory

This is the implementation of Distributed transparent memory in C, based on socket programming project. A distributed memory - adding up the main memory of several connected machines together to create a one big unified chunk of storage for the user - the locality information of the data is completely hidden from the user. Data stored by the user is hashed to the memory of of one of the connected backend node and resides there. Memory appear as local memory to the end user, though memory is distributed across several machines in the backend. User specify the necessary keys to fetch the data, the backend automatically finds the machine which hosts the requested data and fetch it to user. This is how Hadoop HDFS is designed

<b>INSTRUCTIONS:</b>

Let us create 3 nodes token ring topology.
For three node Topo, in node0.c file , change the value '#define N 3' in line 16.

now copy the same node0.c file to node1.c node2.c

Open node0.c file, and change the value of 'int num=0;' in line 29.
Similarly, set the value of num variable in node1.c file to 1
set the value of num variable in node2.c file to 2

Now in different terminal windows, launch each node as follows :
gcc node0.c -o node0            << compile
./node0                         << run

Do the above compile and run steps for node1.c and node2.c as well.
Your three node topology shall be launched


