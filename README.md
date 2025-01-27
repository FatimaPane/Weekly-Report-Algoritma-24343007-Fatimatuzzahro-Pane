<h1>Nama: Fatimatuzzahro Pane</h1>
<h1>NIM: 24343007</h1>


---

Repository ini mengandung semua Pelajaran dari materi mata kuliah `Agloritma Pemrograman`
dengan Pak Randi Proska Sandra S.Pd, M.Sc

## Penjelasan Singkat Semua Modul

<p align="center">
  <img src="https://media.giphy.com/media/Y3dZXiOTzZYheWSacV/giphy.gif" alt="Animated GIF">
</p>

### Modul 1 - Algoritma dan Pemrograman IDE

#### **1. Tujuan Pembelajaran**
- Memahami, menjelaskan, dan mengaplikasikan algoritma melalui pemrograman.
- Mengenal cara instalasi, fungsi, dan penggunaan IDE.
- Mampu membuat, mengompilasi, dan menganalisis kesalahan dalam pemrograman menggunakan IDE.

#### **2. Pokok Materi**
1. **Algoritma & Pemrograman**:
   - Algoritma adalah langkah-langkah sistematis untuk menyelesaikan masalah, memiliki enam karakteristik:       terbatas, definitif, masukan, keluaran, efektif, dan terstruktur.
   - Pemrograman adalah proses menulis, menguji, dan memelihara kode yang dipahami oleh komputer.
2. **Perbedaan Coding dan Programming**:
   - Coding fokus pada penulisan kode sesuai sintaks.
   - Programming mencakup analisis, pembuatan konsep, implementasi algoritma, dan manajemen proyek.
3. **Bahasa Pemrograman C**:
   - Bahasa C adalah bahasa general-purpose yang mendukung pemrograman terstruktur.
   - Dibuat oleh Dennis Ritchie pada tahun 1969-1973 untuk mengembangkan sistem operasi Unix.
   - Cocok untuk pemula karena sintaks sederhana dan fleksibilitasnya.
4. **IDE (Integrated Development Environment)**:
   - Software untuk menulis, mengompilasi, dan menjalankan program dalam satu aplikasi.
   - Contoh IDE: DevC++, Visual Studio, Code::Blocks.

#### **3. Aktivitas dan Latihan**
- Membuat program untuk mencetak **"Hello World!"**.
- Menjalankan program menggunakan **CMD** dan **IDE**.
- Menjelaskan tiap baris kode dan memberikan kesimpulan dari proses.

#### **4. Bahasa Pemrograman C**
- C adalah bahasa tingkat menengah yang menjadi dasar banyak bahasa pemrograman modern.
- Mendukung pengembangan aplikasi yang portable dan fleksibel.
- Memiliki beberapa versi: ANSI C (C89/C90), C99, C11, dan C18.

#### **5. Persiapan Pemrograman**
- Memerlukan teks editor dan compiler.
- Compiler yang digunakan: GCC (GNU Compiler Collection).

<p align="center">
  <img src="https://mbaknoor.home.blog/wp-content/uploads/2020/05/9ac89-4c9192c2f1a1c17c9aae6d42b68342732b252812529.gif" alt="GIF 1" width="300">
  <img src="https://modemom.wordpress.com/wp-content/uploads/2017/06/gambar-animasi-bergerak-5.gif?w=300" alt="GIF 2" width="300">
</p>



### Modul 2 - Pemrograman Dasar C

#### **Tujuan Pembelajaran**
1. Memahami struktur dasar penulisan program dalam bahasa C.
2. Mengimplementasikan sintaks dasar, proses input, dan output menggunakan IDE.

#### **Pokok Materi**
1. **Struktur Dasar Program C**
   - **Include:** Digunakan untuk mengimpor file header (seperti `stdio.h`) yang menyediakan fungsi tambahan seperti `printf`.
   - **Main Function:** Fungsi utama yang wajib ada dalam program, tempat eksekusi dimulai.
   - **Statements:** Perintah dalam program yang harus diakhiri dengan semikolon `;`.
   - **Comments:** Digunakan untuk menambahkan catatan dalam kode tanpa memengaruhi eksekusi.
   - **Whitespace:** Spasi, tab, atau baris baru yang membantu keterbacaan kode.

2. **Proses Input dan Output**
   - **Output:**
     - **`printf`:** Fungsi utama untuk mencetak teks atau variabel ke layar.
     - **`puts`:** Alternatif fungsi untuk mencetak string (otomatis menambahkan baris baru).
   - **Input:**
     - **`scanf`:** Digunakan untuk menerima input dengan format tertentu (memerlukan simbol `&` untuk variabel).
     - **`gets` dan `fgets`:** Untuk menerima input string, namun `gets` tidak direkomendasikan karena rawan error.



### Modul 3 - Variabel, Konsanta, dan Tipe Data

#### **Tujuan Pembelajaran**
1. Memahami dan mengimplementasikan variabel, konstanta, tipe data, konversi tipe data, dan kata kunci dalam pemrograman menggunakan IDE.

#### **Pokok Materi**

1. **Variabel**
   - Tempat penyimpanan sementara untuk data yang digunakan dalam program.
   - Aturan:
     - Nama tidak boleh diawali angka atau simbol.
     - Tidak boleh menggunakan kata kunci seperti `if`, `int`, `void`.
     - Bersifat *case-sensitive* (misalnya, `Nama` dan `nama` dianggap berbeda).
   - Penulisan: 
     ```c
     int tinggi;
     int berat = 49;
     ```
2. **Konstanta**
   - Nilai tetap yang tidak bisa diubah selama program berjalan.
   - Deklarasi:
     - **`#define`** (tidak perlu tipe data, tanpa titik koma).
     - **`const`** (memerlukan tipe data, dengan titik koma).

3. **Tipe Data**
   - **Tipe Data Dasar:**
     - `char`: Menyimpan satu karakter.
     - `int`: Menyimpan bilangan bulat.
     - `float` dan `double`: Menyimpan bilangan desimal (double lebih presisi).
   - **Tipe Data Khusus:**
     - `void`: Menunjukkan tidak ada data.
     - `pointer`, `array`, `structure`, `enum`: Digunakan untuk struktur data yang lebih kompleks.
   - Format specifier untuk output/input:
     - `%d` untuk bilangan bulat.
     - `%f` untuk bilangan desimal.
     - `%c` untuk karakter.

4. **Type Casting (Konversi Tipe Data)**
   - Proses mengubah tipe data variabel ke tipe lain.
   - Contoh:
     ```c
     float hasil = (float)10 / 4; // Output: 2.50
     ```
   - Dibutuhkan untuk mengatasi masalah seperti pembulatan pada pembagian bilangan bulat.

5. **Keywords**
   - Kata kunci bawaan bahasa C yang memiliki fungsi khusus, seperti `int`, `return`, `void`, dll.
   - Tidak dapat digunakan sebagai nama variabel.

<p align="center">
  <img src="https://i.pinimg.com/originals/c7/fb/7f/c7fb7fc37db22da56efd5eb369fe1e2b.gif" alt="Animated GIF" width="300">
</p>


### Modul 4 - Operator

### **Tujuan Pembelajaran:**
Mahasiswa diharapkan mampu memahami, menjelaskan, dan mengimplementasikan berbagai jenis operator dalam pemrograman menggunakan IDE.

### **Pokok Materi:**

1. **Operator Aritmatika:**
   Digunakan untuk operasi matematika dasar:
   - Penjumlahan (+)
   - Pengurangan (-)
   - Perkalian (*)
   - Pembagian (/)
   - Sisa bagi (%)

2. **Operator Penugasan (Assignment Operator):**
   Memberikan nilai atau tugas kepada variabel, dengan beberapa kombinasi operasi:
   - Pengisian nilai: `=`
   - Pengisian dan penambahan: `+=`
   - Pengisian dan pengurangan: `-=`
   - Pengisian dan perkalian: `*=`
   - Pengisian dan pembagian: `/=`
   - Pengisian bitwise: `&=`, `|=`, `^=`, dll.

   **Contoh:** `b += a` artinya nilai `b` ditambah `a` lalu hasilnya diisikan ke `b`.

3. **Operator Pembanding (Relasi):**
   Membandingkan dua nilai dan menghasilkan **true** atau **false**:
   - Lebih besar: `>`
   - Lebih kecil: `<`
   - Sama dengan: `==`
   - Tidak sama dengan: `!=`
   - Lebih besar atau sama dengan: `>=`
   - Lebih kecil atau sama dengan: `<=`

   **Catatan:** Dalam bahasa C, `true` bernilai 1 dan `false` bernilai 0.

4. **Operator Logika:**
   Digunakan untuk operasi berbasis logika, seperti:
   - Logika AND: `&&`
   - Logika OR: `||`
   - Negasi/kebalikan: `!`

   **Contoh:** Menggabungkan dua kondisi, misalnya:
   - Pernyataan 1: **A seorang programmer** (true)
   - Pernyataan 2: **A menggunakan Linux** (true)
   - **Logika AND:** Akan bernilai **true** jika kedua pernyataan benar.

5. **Operator Bitwise:**
   Operasi pada level bit (biner), meliputi:
   - AND (`&`): Bit 1 jika kedua operand bernilai 1.
   - OR (`|`): Bit 1 jika salah satu operand bernilai 1.
   - XOR (`^`): Bit 1 jika kedua operand berbeda.
   - NOT (`~`): Membalik setiap bit.
   - Left Shift (`<<`): Menggeser bit ke kiri.
   - Right Shift (`>>`): Menggeser bit ke kanan.

   **Contoh:** 
   - Nilai desimal 6 (0110) dan 3 (0011).
   - Operasi AND menghasilkan 2 (0010).

6. **Operator Lain-Lain:**
   Operator tambahan dalam pemrograman:
   - Alamat memori (`&`): Mengambil alamat suatu variabel.
   - Pointer (`*`): Digunakan untuk membuat pointer.
   - Ternary (`? :`): Percabangan sederhana seperti `if-else`.
   - Increment (`++`): Menambah nilai dengan 1.
   - Decrement (`--`): Mengurangi nilai dengan 1.

   **Catatan:** Operator increment dan decrement bisa ditaruh sebelum atau sesudah variabel (prefix/postfix).

**Kesimpulan:**
Operator adalah simbol yang digunakan untuk melakukan operasi tertentu dalam program. Dengan memahami jenis-jenis operator seperti aritmatika, penugasan, pembanding, logika, bitwise, dan lainnya, programmer dapat membuat logika program yang efisien dan terstruktur.



### Modul 5 - _Flow Control: Decision Making_

### **Tujuan Pembelajaran:**
Mahasiswa diharapkan mampu menjelaskan dan mengimplementasikan pengambilan keputusan (decision making) dalam pemrograman menggunakan IDE.

### **Pokok Materi:**

1. **If Statement:**
   - Struktur dasar pengambilan keputusan.
   - Mengeksekusi blok kode jika kondisi bernilai **true**.
   - Contoh: Menampilkan pesan diskon jika total belanja lebih dari Rp 100.000.

2. **If Else Statement:**
   - Memiliki dua blok pilihan: satu untuk kondisi **true** dan lainnya untuk **false**.
   - Contoh: Menampilkan pesan berbeda tergantung benar atau salahnya input password.

3. **If Else If Statement:**
   - Memiliki lebih dari dua blok pilihan.
   - Digunakan untuk beberapa kondisi secara berurutan.
   - Contoh: Memberikan nilai huruf berdasarkan rentang angka (A, B, C, dll.).

4. **Switch Case:**
   - Alternatif dari if/else/if untuk membandingkan nilai variabel dengan beberapa case.
   - Setiap **case** harus diakhiri dengan **break**, kecuali pada bagian default.
   - Contoh: Program untuk menentukan grade berdasarkan input nilai.

5. **Operator Ternary:**
   - Bentuk singkat dari **if/else**.
   - Sintaks: `kondisi ? nilai_untuk_true : nilai_untuk_false`.
   - Digunakan untuk keputusan sederhana dalam satu baris.

6. **Percabangan Bersarang (Nested If):**
   - Penggunaan blok **if** di dalam blok **if** lainnya.
   - Digunakan untuk keputusan kompleks dengan banyak kondisi.

<p align="center">
  <img src="https://rumahproduksiindonesia.com/wp-content/uploads/2024/07/ed0982111a6e04d288da2c3247d17053.gif" alt="Animated GIF" width="200">
</p>


### Modul 6 - _Flow Control: Looping_

### **Tujuan Pembelajaran:**
Mahasiswa diharapkan mampu memahami, menjelaskan, dan mengimplementasikan perulangan (looping) dalam pemrograman menggunakan IDE.

### **Pokok Materi:**

1. **Perulangan For**  
   - Termasuk dalam **counted loop** karena jumlah pengulangan telah ditentukan.
   - Struktur: 
     ```c
     for (init; condition; increment/decrement) {
         // Blok kode
     }
     ```
   - Dapat digunakan untuk menghitung maju atau mundur sesuai kebutuhan.

2. **Perulangan While**  
   - Termasuk **uncounted loop**, jumlah pengulangan bergantung pada kondisi.
   - Struktur:
     ```c
     while (condition) {
         // Blok kode
     }
     ```
   - Pengulangan terus berjalan selama kondisi bernilai **true**.

3. **Perulangan Do While**  
   - Sama seperti **while**, tetapi **blok kode dijalankan setidaknya satu kali** sebelum kondisi diperiksa.
   - Struktur:
     ```c
     do {
         // Blok kode
     } while (condition);
     ```
   - Cocok untuk kondisi yang memerlukan eksekusi awal sebelum validasi.

4. **Perulangan Bersarang (Nested Loop)**  
   - Pengulangan di dalam pengulangan.
   - Contoh: Menggunakan dua perulangan **for** untuk mencetak pola berbasis matriks.

### **Catatan Penting:**

- **Counted Loop**:  
  Jenis perulangan dengan jumlah iterasi yang sudah ditentukan sejak awal, seperti pada **for** loop.

- **Uncounted Loop**:  
  Jenis perulangan yang bergantung pada kondisi tertentu, seperti pada **while** dan **do while** loop.

- **Efisiensi Perulangan**:  
  Perulangan menghemat waktu dan kode, memungkinkan program mencetak ribuan keluaran tanpa menulis kode secara manual.



### Modul 7 - _Array_

**Tujuan Pembelajaran:**
1. Memahami dan mengimplementasikan struktur data Array dalam pemrograman menggunakan IDE.

**Pokok Materi:**

**A. Array**
Array adalah struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Setiap elemen dalam array memiliki indeks yang dimulai dari nol (0), yang memudahkan dalam mengakses atau mengganti datanya.

**Cara Membuat Variabel Array:**
- Membuat array mirip dengan membuat variabel biasa, tetapi perlu menentukan panjang array dengan kurung siku [ ].

**Cara Mengakses Data Array:**
- Data dalam array diakses menggunakan indeks, mulai dari nol. Misalnya, `huruf[2]` mengakses elemen ketiga dari array `huruf`.

**Merubah Data pada Array:**
- Data dalam array dapat diubah dengan mengakses elemen menggunakan indeks dan memberikan nilai baru.

**Menggunakan Perulangan dengan Array:**
- Untuk menghemat waktu dan usaha, terutama jika jumlah data besar, perulangan (loop) digunakan untuk mengakses atau memproses elemen array.

**Mengambil Panjang Array:**
- Fungsi `sizeof()` digunakan untuk mendapatkan panjang array dengan membagi ukuran total array dengan ukuran satu elemen.

**Contoh Program Menghitung Rata-Rata:**
```c
#include <stdio.h>

void main() {
    int tinggi_badan[10] = {175, 165, 166, 157, 184, 156, 163, 176, 171, 169};
    int length = sizeof(tinggi_badan) / sizeof(*tinggi_badan);
    int sum = 0;

    for(int i = 0; i < length; i++) {
        sum += tinggi_badan[i];
    }

    float rata_rata = (float)sum / (float)length;
    printf("Rata-rata tinggi badan: %.2f\n", rata_rata);
}
```

**Array Multidimensi:**
- Array juga bisa dibuat dalam dua dimensi atau lebih, sering digunakan untuk membuat matriks. Misalnya, array dua dimensi untuk matriks.

**String:**
- String adalah array karakter. Beberapa fungsi penting dalam penanganan string adalah:
  - `strcpy()`: Mengkopi string.
  - `strcat()`: Menambahkan string di belakang string lain.
  - `strlen()`: Menghitung panjang string.
  - `strcmp()`: Membandingkan dua string.

<p align="center">
  <img src="https://i.pinimg.com/originals/77/82/6a/77826aad9b08df884ee6e293a3e44318.gif" alt="Bunga Kiri" width="200" style="margin-right: 10px;">
  <img src="https://i.pinimg.com/originals/77/82/6a/77826aad9b08df884ee6e293a3e44318.gif" alt="Bunga Kanan" width="200" style="margin-left: 10px;">
</p>

### Modul 8 - Fungsi dan Prosedur

**Rangkuman Job Sheet 8 - Fungsi & Prosedur**

**Tujuan Pembelajaran:**
1. Memahami dan mengimplementasikan Function & Procedure dalam pemrograman menggunakan IDE.

**Pokok Materi:**

**A. Pengertian Fungsi:**
Fungsi adalah sub-program yang bisa digunakan kembali di dalam program itu sendiri maupun di program lain. Fungsi utama dalam C adalah `main()`, yang wajib ada di setiap program karena akan dieksekusi pertama kali.

**Contoh Membuat Fungsi:**
Fungsi biasanya mengembalikan sebuah nilai, kecuali jika menggunakan tipe `void` yang berarti tidak mengembalikan nilai apapun.
```c
#include <stdio.h>
void say_hello() {
    printf("Hello, World!\n");
}

int main() {
    say_hello();
    return 0;
}
```

**Fungsi dengan Parameter:**
Parameter adalah variabel yang menyimpan nilai untuk diproses dalam fungsi.
```c
#include <stdio.h>
void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greet("Petani Kode");
    return 0;
}
```

**Fungsi yang Mengembalikan Nilai:**
Fungsi dapat mengembalikan nilai dengan menggunakan kata kunci `return`.
```c
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    printf("Hasil: %d\n", result);
    return 0;
}
```

**Fungsi Rekursif:**
Fungsi yang memanggil dirinya sendiri.
```c
#include <stdio.h>
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("6! = %d\n", factorial(6));
    return 0;
}
```

**Variabel Lokal & Global:**
Variabel global bisa diakses dari semua fungsi, sedangkan variabel lokal hanya bisa diakses dari dalam fungsi itu sendiri.
```c
#include <stdio.h>
int global_var = 9;

int main() {
    int local_var = 7;
    printf("Global: %d, Lokal: %d\n", global_var, local_var);
    return 0;
}
```

**Pass by Value & Pass by Reference:**
- **Pass by Value:** Mengirimkan nilai ke parameter.
- **Pass by Reference:** Mengirimkan alamat memori ke parameter.
```c
#include <stdio.h>
void kali_dua(int *angka) {
    *angka *= 2;
}

int main() {
    int nilai = 4;
    kali_dua(&nilai);
    printf("Hasil: %d\n", nilai);
    return 0;
}
```


### Modul 9 - _Pointer_

**Rangkuman Job Sheet 9 - Pointer**

**Tujuan Pembelajaran:**
1. Mampu menjelaskan dan mengimplementasikan Pointer dalam pemrograman menggunakan IDE.

**Pokok Materi:**
1. Pengertian Pointer
2. Penggunaan Pointer
3. Pointer untuk pass by reference
4. Pointer untuk mengakses array

**Penjelasan Materi:**

**A. Pengertian Pointer:**
Setiap variabel dalam program memiliki alamat memori yang digunakan untuk menyimpan data. Alamat memori ini sering disebut reference atau referensi. Pointer adalah variabel yang berisi alamat memori dari variabel lain, memungkinkan akses data pada alamat tersebut.

**Contoh:**
```c
#include <stdio.h>
int main() {
    int a = 5;
    int *pointerA = &a;
    printf("Alamat memori a: %p\n", (void*)&a);
    printf("Nilai dari pointerA: %d\n", *pointerA);
    return 0;
}
```

**Penggunaan Pointer:**
Pointer dibuat dengan menambahkan simbol `*` di depan nama variabel, kemudian diisi dengan alamat memori variabel lain menggunakan simbol `&`.

**Mengakses Data dengan Pointer:**
Pointer dapat digunakan untuk mengubah data pada alamat memori yang direferensikan.
```c
#include <stdio.h>
int main() {
    int score = 10;
    int *p = &score;
    *p = 20;
    printf("Nilai score: %d\n", score);
    return 0;
}
```

**Pass by Reference Menggunakan Pointer:**
Menggunakan pointer untuk mengirimkan alamat memori variabel sebagai parameter fungsi, sehingga memungkinkan fungsi mengubah nilai variabel tersebut.
```c
#include <stdio.h>
void add_five(int *num) {
    *num += 5;
}

int main() {
    int score = 0;
    add_five(&score);
    printf("Nilai score: %d\n", score);
    return 0;
}
```

**Pointer untuk Mengakses Array:**
Pointer dapat digunakan untuk mengakses elemen array, memudahkan manipulasi data dalam array.
```c
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
```

<p align="center">
  <img src="https://blogger.googleusercontent.com/img/a/AVvXsEi9PoiWP_W7KznQFL9UbMqzxok3JJ6udt967J1rFw_ppLJtPwwBuOEATSteRNZdrOgK0IONS9T9IOfHNtPDE9XebEEfWKXAuhkcKagZ8T-qpLVr1W38W1uNeSoZJbyeQ_dcgVF4o0XAAlJmZgDpUgodjRZrYsP6ygj6hXMAc3_6IMK__8TNNkHuwGlA7A=w320-h320-rw" alt="Gambar" width="300">
</p>


### Modul 10 - Enumerasi dan Struktur

### **Tujuan Pembelajaran**
1. Memahami dan mengimplementasikan Enum dan Structure dalam pemrograman menggunakan IDE.

### **Pokok Materi**
1. **Enumerasi (Enum):**
   - Enum adalah tipe data bentukan yang berisi sekumpulan konstanta.
   - Contoh: 
     ```c
     enum hari {SENIN, SELASA, RABU};
     ```
   - Penggunaan enum membantu efisiensi dan fleksibilitas memori.
   - Bahasa C tidak memiliki boolean secara bawaan, tetapi dapat dibuat menggunakan enum.

2. **Structure (Struct):**
   - Struct adalah kumpulan variabel dengan tipe data berbeda dalam satu unit.
   - Contoh: 
     ```c
     struct mahasiswa {
         char nama[50];
         int usia;
     };
     ```
   - Struct dapat digunakan untuk membuat tipe data baru, mendefinisikan struct bersarang, atau mengirim struct sebagai parameter fungsi.

3. **Penggunaan Typedef:**
   - Untuk mendefinisikan tipe data baru dari struct agar lebih sederhana dalam penggunaannya.

4. **Struct Bersarang dan Passing Struct:**
   - Struct dapat mengandung struct lain sebagai elemen.
   - Struct juga dapat diteruskan sebagai parameter fungsi untuk mempermudah manipulasi data kompleks.



### Modul 11 - _File Handling in C_

### **Tujuan Pembelajaran**
1. Mampu menjelaskan konsep penulisan dan pembacaan file dalam bahasa pemrograman C.
2. Mampu mengimplementasikan operasi *write* dan *read* file menggunakan IDE.

### **Pokok Materi**

#### **1. Pengantar**
- Data yang disimpan di variabel akan hilang saat program ditutup.
- Untuk menyimpan data secara permanen, digunakan file sebagai media penyimpanan.
- File dapat berupa:
  - **File teks**: Mudah dibaca, seperti `.txt`, `.csv`, dan `.html`.
  - **File biner**: Tersimpan dalam bentuk biner (0 & 1), lebih sulit dibaca tetapi efisien.

#### **2. Membaca File**
- Fungsi utama untuk membuka file adalah `fopen()`.
  - Contoh mode yang digunakan:
    - `r`: Membaca file.
    - `w`: Menulis ke file (overwrite).
    - `a`: Menambahkan isi file.
- Contoh membaca file:
  ```c
  FILE *fptr = fopen("file.txt", "r");
  fgets(buff, 255, fptr);
  ```
  - `fgets()` membaca file per baris.

- Cara membaca semua baris dalam file:
  ```c
  while (fgets(buff, sizeof(buff), fptr) != NULL) {
      printf("%s", buff);
  }
  ```

#### **3. Menulis dalam File**
- Digunakan fungsi `fputs()` untuk menulis teks ke dalam file.
  - Contoh menulis ke file:
    ```c
    FILE *fptr = fopen("file.txt", "w");
    fputs("Ini baris pertama.\n", fptr);
    ```
- Menulis banyak baris:
  - Panggil `fputs()` berulang kali, atau gunakan perulangan.

<p align="center">
  <img src="https://media.tenor.com/5QOcWOXmrEkAAAAj/terima-kasih.gif" alt="Thank You GIF" width="400"> 
</p>
