#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// Pin untuk ILI9341
#define TFT_CS     15
#define TFT_RST    2
#define TFT_DC     4

// Pin untuk tombol pushbutton
#define BUTTON_UP     18
#define BUTTON_DOWN   19
#define BUTTON_OK     21

// Variabel untuk debouncing
unsigned long lastDebounceTimeUP = 0;    // Waktu debounce khusus untuk tombol UP
unsigned long lastDebounceTime = 0;      // Waktu debounce umum
unsigned long debounceDelayUP = 30;      // Debounce lebih kecil untuk tombol UP
unsigned long debounceDelay = 50;        // Debounce umum

// Variabel untuk status tombol
bool buttonUpPressed = false;
bool buttonDownPressed = false;
bool buttonOkPressed = false;

// Inisialisasi objek TFT
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

// Variabel untuk menyimpan status menu
int currentMenu = 0;
const int totalMenuItems = 3;

// Fungsi untuk menampilkan menu
void displayMenu() {
  tft.fillScreen(ILI9341_BLACK); // Membersihkan layar
  tft.setTextSize(2);            // Ukuran teks
  tft.setTextColor(ILI9341_WHITE);

  // Menampilkan menu berdasarkan currentMenu
  if (currentMenu == 0) {
    // tft.setCursor(40, 40);
    tft.println("> Option 1"); // Tanda '>' menunjukkan menu yang dipilih
    // tft.setCursor(40, 60);
    tft.println("  Option 2");
    // tft.setCursor(40, 80);
    tft.println("  Option 3");
  } else if (currentMenu == 1) {
    // tft.setCursor(40, 40);
    tft.println("  Option 1");
    // tft.setCursor(40, 60);
    tft.println("> Option 2");
    // tft.setCursor(40, 80);
    tft.println("  Option 3");
  } else if (currentMenu == 2) {
    // tft.setCursor(40, 40);
    tft.println("  Option 1");
    // tft.setCursor(40, 60);
    tft.println("  Option 2");
    // tft.setCursor(40, 80);
    tft.println("> Option 3");
  }
}

// Fungsi untuk mengeksekusi pilihan
void selectOption() {
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextSize(2);
  tft.setTextColor(ILI9341_WHITE);
  tft.setCursor(40, 60);

  if (currentMenu == 0) {
    tft.println("Option 1 Selected");
  } else if (currentMenu == 1) {
    tft.println("Option 2 Selected");
  } else if (currentMenu == 2) {
    tft.println("Option 3 Selected");
  }
}

// Fungsi untuk membaca tombol dengan debounce
bool readButtonStable(int pin) {
  return (digitalRead(pin) == LOW);  // Kembalikan true jika tombol ditekan
}

void setup() {
  // Inisialisasi layar TFT
  tft.begin();
  displayMenu();  // Menampilkan menu awal

  // Inisialisasi pin untuk tombol
  pinMode(BUTTON_UP, INPUT_PULLUP);     // Menggunakan pull-up internal
  pinMode(BUTTON_DOWN, INPUT_PULLUP);
  pinMode(BUTTON_OK, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  // Debounce khusus untuk tombol UP
  if ((millis() - lastDebounceTimeUP) > debounceDelayUP) {
    // Mengecek apakah tombol atas ditekan
    if (readButtonStable(BUTTON_UP)) {
      if (!buttonUpPressed) {  // Cek apakah tombol belum ditekan sebelumnya
        Serial.println("TOMBOL UP DITEKAN");
        currentMenu--;
        if (currentMenu < 0) {
          currentMenu = totalMenuItems - 1; // Mengulang ke menu terakhir
        }
        displayMenu();  // Menampilkan menu terbaru di layar OLED
        buttonUpPressed = true;  // Set flag tombol ditekan
        lastDebounceTimeUP = millis(); // Mengupdate waktu debounce untuk UP
      }
    } else {
      buttonUpPressed = false; // Reset flag saat tombol tidak ditekan
    }
  }

  // Debounce umum untuk tombol DOWN dan OK
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // Mengecek apakah tombol bawah ditekan
    if (readButtonStable(BUTTON_DOWN)) {
      if (!buttonDownPressed) {  // Cek apakah tombol belum ditekan sebelumnya
        Serial.println("TOMBOL DOWN DITEKAN");
        currentMenu++;
        if (currentMenu >= totalMenuItems) {
          currentMenu = 0; // Mengulang ke menu pertama
        }
        displayMenu();  // Menampilkan menu terbaru di layar OLED
        buttonDownPressed = true;  // Set flag tombol ditekan
      }
    } else {
      buttonDownPressed = false;  // Reset flag saat tombol tidak ditekan
    }

    // Mengecek apakah tombol OK ditekan
    if (readButtonStable(BUTTON_OK)) {
      if (!buttonOkPressed) {  // Cek apakah tombol belum ditekan sebelumnya
        Serial.println("TOMBOL OK DITEKAN");
        selectOption(); // Menampilkan pilihan yang dipilih
        buttonOkPressed = true;  // Set flag tombol ditekan
      }
    } else {
      buttonOkPressed = false;  // Reset flag saat tombol tidak ditekan
    }

    lastDebounceTime = millis(); // Mengupdate waktu debounce umum
  }
}

