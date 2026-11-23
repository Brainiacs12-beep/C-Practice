@echo off
cd /d "D:\C-Practice"
git add .
git diff --cached --quiet || git commit -m "Daily practice update"
git push
auto-push.bat