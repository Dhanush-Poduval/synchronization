# Concurrent Message Queue

A multithreaded C project demonstrating producer-consumer workflows, thread synchronization, message queues, and concurrent data processing using POSIX threads.

## Overview

This project implements a concurrent data-processing pipeline where multiple threads coordinate through shared buffers and message queues. Synchronization primitives are used to safely manage shared resources and coordinate producer and consumer workflows.

The project also includes modular components for message encoding/decoding, file input/output, and concurrent processing.

## Features

* Multithreaded data processing using POSIX threads
* Producer-consumer architecture
* Thread-safe message queues
* Shared-buffer synchronization
* Mutexes and condition variables
* Reader-writer locks
* COBS message encoding and decoding
* File-based input and output
* Modular C implementation
* CMake-based build system

## Technologies

* **Language:** C
* **Concurrency:** POSIX Threads (pthreads)
* **Synchronization:** Mutexes, condition variables, reader-writer locks
* **Encoding:** COBS
* **Build System:** CMake
* **Environment:** Linux

## Project Structure

```text
synchronization/
├── input/       # Input data
├── lib/         # Supporting libraries
├── result/      # Generated results
├── src/         # Source files
├── CMakeLists.txt
└── README.md
```

## Building

Clone the repository:

```bash
git clone https://github.com/Dhanush-Poduval/synchronization.git
cd synchronization
```

Create a build directory:

```bash
mkdir build
cd build
cmake ..
make
```

## Concurrency Model

The system follows a producer-consumer architecture:

```text
          ┌──────────────┐
          │   Producer   │
          └──────┬───────┘
                 │
                 ▼
        ┌──────────────────┐
        │   Shared Buffer  │
        │ / Message Queue  │
        └────────┬─────────┘
                 │
                 ▼
          ┌──────────────┐
          │   Consumers  │
          └──────────────┘
```

Synchronization primitives are used to prevent race conditions and coordinate access to shared resources between concurrent threads.

## Message Processing

Input data is processed through the concurrent pipeline and can be encoded using **COBS (Consistent Overhead Byte Stuffing)** before being passed between processing stages.

The project separates message processing, synchronization, file I/O, and concurrent processing into modular C components.

## Purpose

This project was built to gain practical experience with:

* Concurrent programming in C
* Thread synchronization
* Race-condition prevention
* Producer-consumer systems
* Inter-thread communication
* Low-level data processing
* Modular C project organization
* CMake-based builds

## Future Improvements

* Add performance benchmarks for different thread counts
* Add stress tests for synchronization primitives
* Improve queue capacity management
* Add automated concurrency testing
* Add detailed runtime statistics and profiling
