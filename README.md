# zz

[experimental] Modern web framework for C++17

```cpp
#include "zz.hpp"

int main() {
    auto app=zz("localhost", 5000);

    app.route("/", [=]{
        return "hi";
    });

    return app.run();
}
```

## Installing

```
$ git clone https://github.com/dosisod/zz
```

## Building

```
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
```

## Testing

After building, do:

```
$ ./test/Test
```
