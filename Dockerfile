FROM ubuntu:22.04 AS builder

RUN apt-get update && \
    apt-get install -y cmake g++ git && \
    rm -rf /var/lib/apt/lists/*

WORKDIR /home/alexandra/my-project/rpn_calculator/

COPY . .

RUN cmake -B build -DCMAKE_BUILD_TYPE=Release && \
    cmake --build build --target rpn_calculator --parallel 2

FROM ubuntu:22.04

WORKDIR /home/alexandra/my-project/rpn_calculator/

COPY --from=builder /home/alexandra/my-project/rpn_calculator/build/rpn_calculator .

CMD ["./rpn_calculator"]