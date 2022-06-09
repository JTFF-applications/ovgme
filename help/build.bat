@echo off

if exist %1\ (
	pushd %1%
		CALL "C:\Program Files (x86)\HTML Help Workshop\hhc.exe" en\ovgme.hhp
		CALL "C:\Program Files (x86)\HTML Help Workshop\hhc.exe" fr\ovgme.hhp
	popd
) else (
	CALL "C:\Program Files (x86)\HTML Help Workshop\hhc.exe" en\ovgme.hhp
	CALL "C:\Program Files (x86)\HTML Help Workshop\hhc.exe" fr\ovgme.hhp
)
