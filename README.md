# Shared Memory and Love between C++ and Python

A simple example showcasing how you can share memory pages directly
from Python and read the contents directly in C++.

### Build and Run

First, build the C++ project by running:

```sh
cmake .
cmake --build .
```

Run the Python script:

```sh
python ./py/partner.py
```

Run the C++ executable:

```sh
./Debug/SharedMemoryLove.exe
```
