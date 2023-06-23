# Tugas Akhir Fisika 1

Tugas Akhir Fisika 1 | Kelompok A11.4222 | Semester 2 | 2023

Tugas membuat penerapan materi mata kuliah Fisika 1 dalam bentuk coding.
Bahasa pemrograman yang digunakan yaitu C++

Program yang tersedia:
1. Hukum Newton 1
2. Hukum Newton 2
3. Hukum Newton 3
4. Kinematika
5. Kalkulator Kecepatan
6. Energi Mekanik
7. Momentum dan Energi Kinetik

## Instal

### Menggunakan compile_all.sh
1. Hapus semua file .o dan .exe di dalam folder bin jika ada
2. Jalankan shell file **compile_all.sh**
3. Tunggu proses hingga cmd tertutup
4. File exe akan tersimpan pada folder bin

### Compile manual
1. Buka command prompt. Masuk ke directory project ini
```
g++ .\src\*.cpp .\src\energiMekanik\*.cpp .\src\kecepatan\*.cpp .\src\kinematika\*.cpp .\src\momentum\*.cpp .\src\newton1\*.cpp .\src\newton2\*.cpp .\src\newton3\*.cpp -o .\bin\main.exe
```
