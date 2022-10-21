cmake_minimum_required(VERSION 3.20)
project(minitalk C)

set(CMAKE_C_STANDARD 11)

add_executable(minitalk
		minitalk.c
		minitalk.h
		client.c
		server.c
		)
