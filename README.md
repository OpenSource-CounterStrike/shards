![CI](https://github.com/OpenSource-CounterStrike/shards/workflows/CI/badge.svg)<br>
# shards
The thing that goes vroom-vroom in OSCS, i.e. Game Engine.

# Usage

Currently, the engine is a library with no tools. To compile ```shards``` with your project add:
```cmake
add_subdirectory(/path/to/shards/)
```

In future, you would be able to write ```./shards```.

# Compilation

If you want to compile from source it is recommended to use docker, since it auto sets the environment for you:
```shell
$ ./buildDocker.sh (For debbuggable binary)
$ ./buildDockerRelease.sh (For releasable binary)
```

# Built With

- [C](https://en.wikipedia.org/wiki/C_programming_language) - Language used.
- [GLFW](https://www.glfw.org/) - Cross-platform window And input library.
- [GLAD](https://glad.dav1d.de/) - OpenGL Extension Loader

## Authors

* **altffour** - *Initial work* - [realaltffour](https://github.com/realaltffour)

## License
This project is licensed under the GPLv3 License - see the [LICENSE.md](LICENSE.md) file for details.
