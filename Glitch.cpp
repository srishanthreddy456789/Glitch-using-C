#include <iostream>
#include <cstring>
#include <windows.h>
#include <ctime>
#include <conio.h>
#include <cstdlib>

#define ESC 27
std::string user_input;

int main()
{
    time_t currentTime;
    time(&currentTime);
    struct tm *localTime = localtime(&currentTime);
    int currentHour = localTime->tm_hour;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    std::cout << "\n\t\t\t\t\tHello Kratak! ";
    if(currentHour >= 5 && currentHour < 12)
        std::cout << "Good Morning";
    else if(currentHour >= 12 && currentHour <= 16)
        std::cout << "Good Afternoon";
    else if(currentHour > 16 && currentHour <= 22)
        std::cout << "Good Evening";
    else
        std::cout << "Good Night";
    std::cout << "\n\t\t\tI am Your Personal Assistant. Good to see you here.\n\n";
    
    while(true)
    {
        user_input.clear();
        SetConsoleTextAttribute(hConsole, 14);
        std::cout << "\nUser: ";
        SetConsoleTextAttribute(hConsole, 7);
        std::getline(std::cin, user_input);
        SetConsoleTextAttribute(hConsole, 2);
        std::cout << "Bot :";
        SetConsoleTextAttribute(hConsole, 7);
        
        if(user_input == "exit" || user_input == "bye")
        {
            std::cout << " Bye ^_^\n      See You Soon ";
            break;
        }
        else if(user_input == "  " || user_input.empty() || user_input == " ")
        {
            std::cout << " Please enter something\n";
        }
        else if(user_input == "hi" || user_input == "hii" || user_input == "hey" || user_input == "hello" || user_input == "hy")
        {
            std::cout << " Hello I am your Personal Assistant\n      What brought you here today? :)\n";
        }
        else if(user_input == "c" || user_input == "C")
        {
            std::cout << " Opening C Directory\n";
            system("start C: directory");
        }
        else if(user_input == "doc" || user_input == "document")
        {
            std::cout << " Opening Documents\n";
            system("start C:\\Users\\LENOVO\\Documents");
        }
        else if(user_input == "download" || user_input == "dwnld" || user_input == "down")
        {
            std::cout << " Opening Download\n";
            system("start C:\\Users\\LENOVO\\Downloads");
        }
        else if(user_input == "file")
        {
            std::cout << " Opening Program File\n";
            system("start E:\\Coding\\Projects\\Assistant\\Assistant.c");
        }
        else if(user_input == "codeblocks" || user_input == "code")
        {
            std::cout << " Opening CodeBlocks\n";
            system("start E:\\Coding\\C++\\Hello.cpp");
        }
        else if(user_input == "d" || user_input == "D")
        {
            std::cout << " Opening D Directory\n";
            system("start D: directory");
        }
        else if(user_input == "e" || user_input == "E")
        {
            std::cout << " Opening E Directory\n";
            system("start E: directory");
        }
        else if(user_input == "bin")
        {
            std::cout << " Opening Recycle Bin\n";
            system("start shell:RecycleBinFolder");
        }
        else if(user_input == "sleep")
        {
            std::cout << " Sleeping, Press any key to wake.\n";
            Sleep(500);
            system("start RUNDLL32.EXE powrprof.dll,SetSuspendState 0,1,0");
        }
        else if(user_input == "ctrl" || user_input == "control panel")
        {
            std::cout << " Opening Control Panel\n";
            system("start control panel");
        }
        else if(user_input == "math" || user_input == "calculator" || user_input == "calc")
        {
            std::cout << " Opening Calculator\n";
            system("start calc");
        }
        else if(user_input == "notepad")
        {
            std::cout << " Opening Notepad Editor \n";
            system("start notepad");
        }
        else if(user_input == "whtsap")
        {
            std::cout << " Opening WhatsApp \n";
            system("start whatsapp:");
        }
        else if(user_input == "cam" || user_input == "camera")
        {
            std::cout << " Opening Camera\n";
            system("start microsoft.windows.camera:");
        }
        else if(user_input == "linkedin")
        {
            std::cout << " Opening LinkedIn\n";
            system("start https://www.linkedin.com/feed/");
        }
        else if(user_input == "play music" || user_input == "music")
        {
            std::cout << " Opening Music\n";
            system("start https://gaana.com/");
        }
        else if(user_input == "ms paint" || user_input == "paint")
        {
            std::cout << " Opening MS Paint\n";
            system("start mspaint");
        }
        else if(user_input == "ms word" || user_input == "word")
        {
            std::cout << " Opening MS Word\n";
            system("start winword");
        }
        else if(user_input == "ms powerpoint" || user_input == "powerpoint" || user_input == "powerpnt")
        {
            std::cout << " Opening MS Powerpoint\n";
            system("start powerpnt");
        }
        else if(user_input == "ms excel" || user_input == "excel")
        {
            std::cout << " Opening MS Excel\n";
            system("start excel");
        }
        else if(user_input == "ms store" || user_input == "store")
        {
            std::cout << " Opening MS Store\n";
            system("start ms-windows-store:");
        }
        else if(user_input == "google")
        {
            std::cout << " Opening Google \n";
            system("start http://google.com");
        }
        else if(user_input == "youtube" || user_input == "utube" || user_input == "yt" || user_input == "ytb")
        {
            std::cout << " Opening Youtube \n";
            system("start http://youtube.com");
        }
        else if(user_input == "mail" || user_input == "gmail")
        {
            std::cout << " Opening Gmail\n";
            system("start https://mail.google.com/mail");
        }
        else if(user_input == "climate" || user_input == "weather")
        {
            std::cout << " Launching Weather Guide: \n";
            system("start https://weather.com/en-IN/weather/today/l/28.46,77.50?par=google");
        }
        else if(user_input == "news")
        {
            std::cout << " Today's News:\n";
            system("start https://news.google.com/home");
        }
        else if(user_input == "leetcode")
        {
            std::cout << " Opening Leetcode's Problem Set\n";
            system("start https://leetcode.com/problemset/all/");
        }
        else if(user_input == "gfg")
        {
            std::cout << " Opening Geeks for Geeks's Problem Set\n";
            system("start https://practice.geeksforgeeks.org/");
        }
        else if(user_input == "codechef")
        {
            std::cout << " Opening Codechef's Problem Set\n";
            system("start https://www.codechef.com/practice/");
        }
        else if(user_input == "wifi")
        {
            std::cout << " WiFi Details : \n";
            SetConsoleTextAttribute(hConsole, 2);
            system("C:\\Windows\\System32\\ipconfig");
        }
        else if(user_input == "restart")
        {
            std::cout << " Restarting PC in 5 seconds\n";
            system("C:\\Windows\\System32\\shutdown /r /t 5");
        }
        else if(user_input == "time" || user_input == "date")
        {
            time_t t;
            time(&t);
            std::cout << " It's " << ctime(&t);
        }
        else if(user_input == "shutdown" || user_input == "switch off" || user_input == "power off" || 
                user_input == "off" || user_input == "turn off" || user_input == "shut down" || user_input == "shut")
        {
            std::string s;
            char t;
            std::cout << " Press ESCAPE KEY to Cancel.\n      Time less than 10 Seconds : ";
            t = _getch();
            if(t != ESC)
            {
                s = "C:\\Windows\\System32\\shutdown /s /t " + std::to_string(t-'0');
                system(s.c_str());
                break;
            }
            else
            {
                std::cout << "\n      Process Aborted.\n";
            }
        }
        else if(user_input == "wait" || user_input == "abort")
        {
            std::cout << " Shut Down Aborted...\n";
            system("C:\\Windows\\System32\\shutdown /a");
        }
        else if(user_input == "functions")
        {
            std::cout << "\nCommand                               - Function";
            std::cout << "\nc | C                                 - Open C Directory";
            std::cout << "\nd | D                                 - Open D Directory";
            std::cout << "\ne | E                                 - Open E Directory";
            std::cout << "\nhi | hii | hey | hello|hy             - Wishes Hello";
            std::cout << "\ndoc | document                        - Open Document Folder";
            std::cout << "\ndown | download                       - Open Download Folder";
            std::cout << "\nfile                                  - Open the file containing the code for the program (location needs to be set in line 68";
            std::cout << "\nbin                                   - Open Recycle Bin";
            std::cout << "\nctrl | control panel                  - Open Control Panel";
            std::cout << "\nmath | calculator | calc              - Open Calculator";
            std::cout << "\ncamera | cam                          - Open Camera";
            std::cout << "\nnotepad                               - Open Notepad";
            std::cout << "\nwhtsap                                - Open WhatsApp";
            std::cout << "\nlinkedin                              - Open Linkedin";
            std::cout << "\nplay music | music                    - Open ganna.com to play song";
            std::cout << "\nms paint | paint                      - Open MS Paint";
            std::cout << "\nms word | word                        - Open MS Word";
            std::cout << "\nms excel | excel                      - Open MS Excel";
            std::cout << "\nms powerpoint | powerpoint | powerpnt - Open MS PowerPoint";
            std::cout << "\nms store | store                      - Open MS Store";
            std::cout << "\ngoogle                                - Open Google's Homepage";
            std::cout << "\nyoutube | utube | yt | ytb            - Open Youtube's Homepage";
            std::cout << "\nmail | gmail                          - Open Gmail";
            std::cout << "\nclimate | weather                     - Open Weather Guide";
            std::cout << "\nnews                                  - Open Today's News";
            std::cout << "\nleetcode                              - Open Leetcode's Problemset";
            std::cout << "\ngfg                                   - Open GeeksForGeeks's Problemset";
            std::cout << "\ncodechef                              - Open CodeChef's Problemset";
            std::cout << "\nwifi                                  - Open connected Wifi Details";
            std::cout << "\nerp                                   - Open LIET's Student ERP";
            std::cout << "\nportal | prtl                         - Open LIET's Captive Portal for Common WIFI";
            std::cout << "\ntime | date                           - Current System Time & Date";
            std::cout << "\nrestart                               - Restart PC in 5 Seconds";
            std::cout << "\noff | power off | switch off | shutdown - ShutDown PC";
            std::cout << "\nwait | abort                          - Abort System Shut Down";
            std::cout << "\nbye | exit                            - Turn off the current session on Terminal";
        }
        else
        {
            std::string site;
            std::cout << " This is what I found on Web.\n";
            site = "https://www.google.com/search?q=" + user_input;
            ShellExecuteA(NULL, "open", site.c_str(), NULL, NULL, SW_SHOW);
        }
    }
    return 0;
}
