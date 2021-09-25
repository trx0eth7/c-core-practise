This is a small program that shows pid of the current process and pid of the parent process.
In my case parent process is the java CLion app (using for running).

```
linux get process info:
ps -q ppid -eo euser,ruser,suser,fuser,f,comm,label
```