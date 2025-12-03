@echo off
ECHO =========================================
ECHO GIT AUTOMATION SCRIPT
ECHO =========================================

:: 1. Ask the user for the commit message
set /p message="Enter your commit message (e.g., Feature: Added currency screen): "

:: 2. Add all tracked and new files (except those in .gitignore)
ECHO.
ECHO --- Staging files (git add .) ---
git add .

:: 3. Commit the changes using the user's message
ECHO.
ECHO --- Committing changes ---
git commit -m "%message%"

:: 4. Push the changes to the remote repository (GitHub)
ECHO.
ECHO --- Pushing to GitHub ---
git push

ECHO.
ECHO =========================================
ECHO DONE! Changes pushed to GitHub.
ECHO =========================================

pause