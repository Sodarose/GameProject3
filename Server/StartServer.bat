:start
@echo off
color 0A
echo. �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[
echo. �U  ��ѡ��Ҫ���еĲ�����Ȼ�󰴻س�  �U
echo. �U�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�U
echo. �U                                  �U
echo. �U     1.����ȫ��������(DEBUG)      �U
echo. �U                                  �U
echo. �U     2.����ȫ��������(RELEASE)    �U
echo. �U                                  �U
echo. �U     3.�ر�ȫ��������             �U
echo. �U                                  �U
echo. �U     4.�������Կͻ���             �U
echo. �U                                  �U
echo. �U     5.�����Ļ                   �U
echo. �U                                  �U
echo. �U     6.����ѹ�����Թ���           �U
echo. �U                                  �U
echo. �U     7.�˳������               �U
echo. �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a
echo.             
set DebugDir=%cd%\Src\Debug\
set ReleaseDir=%cd%\Src\Release\
set ClientDir=%cd%\Client\TestClient\Debug\
set PressDir=%cd%\Client\\PressureTest\Debug\
:cho
set choice=
set /p choice=          ��ѡ��:
IF NOT "%choice%"=="" SET choice=%choice:~0,1%
if /i "%choice%"=="1" start /D %DebugDir% /MIN %DebugDir%LoginServer.exe & start /D %DebugDir% /MIN %DebugDir%ProxyServer.exe &  start /D %DebugDir% /MIN %DebugDir%DBServer.exe &  start /D %DebugDir% /MIN %DebugDir%GameServer.exe &  start /D %DebugDir% /MIN%DebugDir%LogServer.exe &  start /D %DebugDir% /MIN %DebugDir%LogicServer.exe & start /D %DebugDir% /MIN %DebugDir%AccountServer.exe
if /i "%choice%"=="2" start /D %ReleaseDir% /MIN %ReleaseDir%LoginServer.exe & start /D %ReleaseDir% /MIN %ReleaseDir%ProxyServer.exe & start /D %ReleaseDir% /MIN %ReleaseDir%DBServer.exe & start /D %ReleaseDir% /MIN %ReleaseDir%GameServer.exe & start /D %ReleaseDir% /MIN %ReleaseDir%LogServer.exe & start /D %ReleaseDir% /MIN %ReleaseDir%LogicServer.exe & start /D %ReleaseDir% /MIN %ReleaseDir%AccountServer.exe
if /i "%choice%"=="3" taskkill /im LoginServer.exe & taskkill /im ProxyServer.exe & taskkill /im DBServer.exe & taskkill /im GameServer.exe & taskkill /im LogServer.exe & taskkill /im LogicServer.exe & taskkill /im TestClient.exe & taskkill /im PressureTest.exe & taskkill /im AccountServer.exe
if /i "%choice%"=="4" start /D %ClientDir% %ClientDir%TestClient.exe
if /i "%choice%"=="5" cls & goto start
if /i "%choice%"=="6" start /D %PressDir% %PressDir%PressureTest.exe
if /i "%choice%"=="7" exit
if /i "%choice%"=="8" type %DebugDir%ServerCfg.ini
echo.
goto cho

