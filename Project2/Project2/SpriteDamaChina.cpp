#include <iostream>;
#include<windows.h>;


using namespace std;

void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwpos;
	dwpos.X = x;
	dwpos.Y = y;
	SetConsoleCursorPosition(hcon, dwpos);
}

int main() {
	
	system("color 03");
	
	cout <<"                                                :                                     "<<endl                                                                                                               
	 <<"                                               :.:                                    "<<endl                                                                                                               
	 <<"                                              :  .:                                   "<<endl                                                                                                               
	 <<"                                             :.   .:                                  "<<endl                                                                                                               
	 <<"                                            :.     .:                                 "<<endl                                                                                                               
	 <<"                                           :.       .:                                "<<endl                                                                                                               
	 <<"                                          :.         .:                               "<<endl                                                                                                               
	 <<"                                         :.            :                              "<<endl                                                                                                               
	 <<"                                        :.              :                             "<<endl                                                                                                               
	 <<"                                       :.                :                            "<<endl                                                                                                               
	 <<"                  ....................-...................-....................       "<<endl                                                                                                               
	 <<"                  :.                 :.                   .:                 .:       "<<endl                                                                                                               
	 <<"                   :.               :.                      :               .:        "<<endl                                                                                                               
	 <<"                    :.             :.                        :             .:         "<<endl                                                                                                               
	 <<"                     :.           :.                          :           .:          "<<endl                                                                                                               
	 <<"                      :.         ..                            :         .:           "<<endl                                                                                                               
	 <<"                       :.       ..                              :       .:            "<<endl                                                                                                               
	 <<"                        :.     .:                                :     .:             "<<endl                                                                                                               
	 <<"                         :.   .:                                  :   .:              "<<endl                                                                                                               
	 <<"                          :. .:                                    : .:               "<<endl                                                                                                               
	 <<"                           :::                                      -:                "<<endl
	 <<"                           .=.                                      -:                "<<endl                                                                                                               
	 <<"                          .: :.                                    :  :               "<<endl                                                                                                               
	 <<"                         .:   :.                                  :    :              "<<endl                                                                                                               
	 <<"                        .:     :.                                :      :             "<<endl                                                                                                               
	 <<"                       .:       :.                              :        :            "<<endl                                                                                                               
	 <<"                      .:         :.                            :.         :           "<<endl                                                                                                               
	 <<"                     .:           :.                          :.           :          "<<endl                                                                                                               
	 <<"                     :             :.                        :.             :         "<<endl                                                                                                               
	 <<"                    :               :.                      :.               -        "<<endl                                                                                                               
	 <<"                   :                 :.                    :.                .-       "<<endl                                                                                                               
	 <<"                  ::.................:-::.................-:..................:       "<<endl                                                                                                               
	 <<"                                       :.                :.                           "<<endl                                                                                                               
	 <<"                                        :.              :.                            "<<endl                                                                                                               
	 <<"                                         :.            :.                             "<<endl                                                                                                               
	 <<"                                          :.          :.                              "<<endl                                                                                                               
	 <<"                                           :.        :.                               "<<endl                                                                                                               
	 <<"                                            :.      :.                                "<<endl                                                                                                               
	 <<"                                             :.    :.                                 "<<endl                                                                                                               
	 <<"                                              :.  :.                                  "<<endl                                                                                                               
	 <<"                                               :.::                                   "<<endl                                                                                                               
	 <<"                                                ::                                    "<<endl;                                                                                                               
	
	
	

	cin.get();
	cin.get();
	return 0;
}
