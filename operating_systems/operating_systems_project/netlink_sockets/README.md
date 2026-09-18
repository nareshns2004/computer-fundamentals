# Netlink Sockets & Linux Kernel IPC
This repository contains hands-on implementations, kernel modules, and user-space applications covering Netlink Sockets, IPC (Inter-Process Communication), and Linux Kernel Programming (LKM)

## Overview
Netlink is a socket-based Linux kernel interface used for bidirectional IPC between user-space applications and kernel-space modules. This project demonstrates how to set up, build, and run Netlink-based communication channels, parse TLV (Type-Length-Value) structures, manage event-driven kernel notifications, and handle multicast group subscriptions

## Key Features
Linux Kernel Modules (LKM): Building, inserting, and managing lightweight kernel code (insmod, rmmod)

Bidirectional Kernel-User Communication: Exchanging custom messages between user processes and kernel modules via Netlink sockets

Data Parsing using TLVs: Implementing Type-Length-Value payload structures for structured message passing

CRUD Operations over Netlink: Executing CREATE, READ, UPDATE, and DELETE requests from user-space to kernel-space

Multicast & Event Notifications: Allowing multiple user-space processes to subscribe to selective kernel events

## Prerequisites & Requirements
Operating System: Linux distributions (Ubuntu/Debian recommended) running directly or via Virtual Machine

Core Language: C Programming (Pointers, Memory Allocation, Structures)

├── 01_environment_setup/       # Setting up Kernel Headers & Build Environment
├── 02_lkm_basics/              # Hello World Kernel Module
├── 03_netlink_fundamentals/    # Sockets as Unified Interfaces & IPC Use Cases
├── 04_netlink_theory/          # Message Formats, Flags, Sequence Numbers, & Port IDs
├── 05_first_netlink_program/   # User-to-Kernel Greet & Kernel-to-User Reply
├── 06_tlv_attributes/          # Type-Length-Value Concepts & Buffer Parsing
├── 07_netlink_crud_project/    # Implementations of CREATE, READ, UPDATE, DELETE Msg
├── 08_group_subscription/      # Multicast Group Subscriptions & Unsubscriptions
└── 09_event_notifications/     # Selective Event-based Kernel Notifications

## Environment Setup
Linux Kernel Headers, gcc, make, and build-essential packages

1. Install Kernel Headers & Build Tools

sudo apt-get update
sudo apt-get install build-essential linux-headers-$(uname -r)

2. Build & Insert a Kernel Module Example

### Navigate to a module directory
cd 02_lkm_basics

### Build the module
make

### Insert the module into the kernel
sudo insmod hello_lkm.ko

### Verify log output from the kernel
dmesg | tail -n 10

### Remove the module
sudo rmmod hello_lkm
