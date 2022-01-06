# CPP WEB BASED APPLICATION DEPLOZMENT TO DOCKER

Here, It is a minimal application which uses [Cinatra](https://github.com/qicosmos/cinatra). Here, I used docker to deployment.

## File description

### Include

This `include` folder from cinatra which contains headers which requires to run web application.

### src

This `src` file contains  `CMakeLists.txt` which I used to compile this code with cmake on an Ubuntu Docker container with this cmake build file. ALso, `cpp-web-app.cpp` contains minimal running server to show status as "Hello World!".

### Dockerfile.dev

This is the Dockerfile for a multi-stage build. 

### Dockerfile.build

The `cpp-web-dev:build` Docker image is built from a basic Ubuntu image with everything needed for the code to compile

### Dockerfile.lean

The `cpp-web-dev:lean` Docker image, on the other hand, is meant to be light with only the bare requirements to run the server.

Putting it all together, we can build and run our ‘Hello World’ server by running these commands from root project:

```bash
$ docker build -t cpp-web-dev:build-1.0.0 -f Dockerfile.build .
$ docker build -t cpp-web-dev:lean-1.0.0 -f Dockerfile.lean .
$ docker build -t cpp-web-app:latest -f Dockerfile.dev .
$ docker run -p 3000:3000 cpp-web-app:latest
```

Now, open browser and type `http://localhost:3000` to see the `GET` response as `Hello World!`.

This concludes the minimal cpp web application deployment to docker.

*NOTE: This is minimal, using render one can run HTTP Templating engine*

