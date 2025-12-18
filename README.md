LogX - Otomatik Log Analiz Aracı (C++)

LogX, büyük sunucu log (kayıt) dosyalarını okumak, analiz etmek ve kritik hataları tespit etmek için geliştirilmiş **C++ tabanlı bir komut satırı aracıdır.**

Bu proje, yapılandırılmamış metin verilerini işleyerek anlamlı raporlar oluşturmak amacıyla **Nesne Yönelimli Programlama (OOP)** prensipleri kullanılarak tasarlanmıştır.

##  Projenin Amacı
verinin işlenmesi, bellekte yönetilmesi ve filtrelenmesi süreçlerini otomatize eden bir araç geliştirmeyi hedefledim. Bu proje ile **C++**, **STL (Standard Template Library)** ve **Algoritma Kurma** becerilerimi pratiğe döktüm.

## Teknik Özellikler ve Kullanılan Yapılar

Projede aşağıdaki teknik yetkinlikler kullanılmıştır:

* **OOP (Nesne Yönelimli Programlama):**
* **STL Vectors (`std::vector`):** 
* **Dosya İşlemleri (File I/O):** 
* **String Parsing (Ayrıştırma):**  `find` ve `substr` fonksiyonları ile geliştirilmiştir.

## Nasıl Çalışır?

1.  Program kullanıcıdan analiz edilecek `.txt` dosyasının adını ister.
2.  Dosya varsa açılır ve satır satır okunmaya başlanır.
3.  Okunan her satır parçalanarak `Tarih`, `Log Tipi` (ERROR/INFO) ve `Mesaj` kısımlarına ayrılır.
4.  Ayrıştırılan veri bir **Nesneye** dönüştürülür.
5.  Eğer log tipi `[ERROR]` ise, bu nesne analiz listesine (`vector`) eklenir.
6.  İşlem sonunda toplam kritik hata sayısı ve detayları raporlanır.
