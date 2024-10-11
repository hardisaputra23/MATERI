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
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 200; // 200 ms untuk debouncing

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
    tft.setCursor(40, 40);
    tft.println("> Option 1"); // Tanda '>' menunjukkan menu yang dipilih
    tft.setCursor(40, 60);
    tft.println("  Option 2");
    tft.setCursor(40, 80);
    tft.println("  Option 3");
  } else if (currentMenu == 1) {
    tft.setCursor(40, 40);
    tft.println("  Option 1");
    tft.setCursor(40, 60);
    tft.println("> Option 2");
    tft.setCursor(40, 80);
    tft.println("  Option 3");
  } else if (currentMenu == 2) {
    tft.setCursor(40, 40);
    tft.println("  Option 1");
    tft.setCursor(40, 60);
    tft.println("  Option 2");
    tft.setCursor(40, 80);
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

void setup() {
  // Inisialisasi layar TFT
  tft.begin();

  displayMenu();

  // Inisialisasi pin untuk tombol
  pinMode(BUTTON_UP, INPUT_PULLUP);     // Menggunakan pull-up internal
  pinMode(BUTTON_DOWN, INPUT_PULLUP);
  pinMode(BUTTON_OK, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  // Debouncing untuk tombol
  if ((millis() - lastDebounceTime) > debounceDelay) {
    // Mengecek apakah tombol atas ditekan
    if (digitalRead(BUTTON_UP) == LOW) {
      currentMenu--;
      if (currentMenu < 0) {
        currentMenu = totalMenuItems - 1; // Mengulang ke menu terakhir
      }
      displayMenu();
      lastDebounceTime = millis(); // Mengupdate waktu debounce
    }

    // Mengecek apakah tombol bawah ditekan
    if (digitalRead(BUTTON_DOWN) == LOW) {
      currentMenu++;
      if (currentMenu >= totalMenuItems) {
        currentMenu = 0; // Mengulang ke menu pertama
      }
      displayMenu();
      lastDebounceTime = millis(); // Mengupdate waktu debounce
    }

    // Mengecek apakah tombol OK ditekan
    if (digitalRead(BUTTON_OK) == LOW) {
      selectOption(); // Menampilkan pilihan yang dipilih
      lastDebounceTime = millis(); // Mengupdate waktu debounce
    }
  }
}

