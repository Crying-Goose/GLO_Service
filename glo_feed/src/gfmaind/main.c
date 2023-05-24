/**************************************************************************
* Filename : main.c
* Author : Chang Soo Kim <soochang0812@gmail.com>
* description : Process Monitoring System
**************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <memory.h>
#include <pwd.h>
#include <sys/errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <time.h>
#include <sys/wait.h>
#include <sys/time.h>
#include <sys/resource.h>
