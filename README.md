# 📡 ft_irc - Building Your Own IRC Server

![C++](https://img.shields.io/badge/Language-C++-blue) ![Sockets](https://img.shields.io/badge/Network-Sockets-red) ![Threads](https://img.shields.io/badge/Concurrency-Threads-purple) ![Makefile](https://img.shields.io/badge/Build-Makefile-yellow)

The **ft_irc** project challenges you to implement a fully functional IRC (Internet Relay Chat) server following the RFC 2812 specification. The goal is to gain a deeper understanding of **network programming**, **concurrent systems**, and **protocol implementation**, all while working in C++.

---

## 📋 Project Goal

Develop an IRC server that can:
- Accept multiple client connections via TCP sockets.  
- Handle user registration and channel management.  
- Support basic IRC commands such as `JOIN`, `PART`, `PRIVMSG`, `NICK`, `USER`, `QUIT`, etc.  
- Respect the constraints of the RFC 2812 protocol.  
- Manage concurrent connections through **multi-threading** or **event loops**.

This project is a deep dive into the world of real-time communication and server-client architecture.

---

## 📚 Core Concepts

- **Socket Programming**: using `socket()`, `bind()`, `listen()`, `accept()` and `recv()/send()` to handle TCP connections.  
- **RFC Protocols**: implementing the behavior expected from an IRC server according to [RFC 2812](https://datatracker.ietf.org/doc/html/rfc2812).  
- **Concurrency**: managing multiple clients at once using threads, `select()`, or `poll()`.  
- **C++ OOP**: using classes and encapsulation for clean design and maintainability.  
- **Stateful Connections**: maintaining user, channel, and server state consistently.  

---

## ✨ Key Features

### 👥 User Management
- Nickname and username registration.  
- Connection password handling.  
- Disconnection handling (`QUIT`).

### 📺 Channels
- Creation and management of public and private channels.  
- Commands: `JOIN`, `PART`, `TOPIC`, `NAMES`, `LIST`, etc.  
- Topic management and member tracking.

### 💬 Messaging
- Private messages (`PRIVMSG`) between users and channels.  
- Broadcasts within channels.  
- Notices and server responses.

---

## 🛠️ Tools & Standards

| Tool / Standard      | Description                                              |
|----------------------|----------------------------------------------------------|
| **C++**              | Used to implement modular and object-oriented server logic. |
| **POSIX Sockets**    | Enables TCP communication between clients and the server. |
| **Makefile**         | Automates compilation of the project.                   |
| **Threads / select()** | Handles multiple client connections concurrently.        |

