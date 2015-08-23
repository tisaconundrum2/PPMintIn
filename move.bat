:top
del /f/s/q "C:\Program Files\Arduino\libraries\PPMintIn"
del /f/s/q C:\Users\User\Documents\UECIDE\libraries\PPMintIn"
xcopy /e/c/h/y "C:\Users\User\Documents\QTprograms\PPMintIn" "C:\Program Files\Arduino\libraries\PPMintIn"

xcopy /e/c/h/y "C:\Users\User\Documents\QTprograms\PPMintIn" "C:\Users\User\Documents\UECIDE\libraries\PPMintIn"
timeout /t 5
goto top