FROM trzeci/emscripten:latest

RUN mkdir /out
COPY ./hello.cpp .
RUN emcc hello.cpp -o /out/hello.js -s FORCE_FILESYSTEM=1

CMD [ "bash" ]
