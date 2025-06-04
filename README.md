# Caesar Cipher

A simple and effective Caesar Cipher implementation in Python for encoding and decoding messages by shifting characters by a fixed number of positions. This project demonstrates classic cryptography concepts and is ideal for learning, practicing, or as a base for more advanced encryption techniques.

## 🚀 Features

- **Encode messages:** Shift letters by a fixed number to encrypt.
- **Decode messages:** Reverse-shift to decrypt messages.
- **Custom shift value:** Choose how many positions to shift.
- **Handles uppercase and lowercase letters**
- **Ignores non-alphabetic characters** (punctuation, spaces, numbers remain unchanged)
- **Simple, clean, and well-documented code**

## 🛠️ Usage

1. **Clone the repository:**
   ```bash
   git clone https://github.com/Iresh-Nimantha/caesarCipher.git
   cd caesarCipher
   ```

2. **Run the script:**
   ```bash
   python caesar_cipher.py
   ```
   *(Replace `caesar_cipher.py` with your actual script name if different)*

3. **Example Code:**
   ```python
   from caesar_cipher import encode, decode

   secret = encode("Hello, World!", shift=3)
   print(secret)  # Khoor, Zruog!

   original = decode(secret, shift=3)
   print(original)  # Hello, World!
   ```

## 📂 Project Structure

```
caesarCipher/
├── caesar_cipher.py
├── README.md
└── ...
```

## 🧑‍💻 API Reference

| Function             | Description                                                        |
|----------------------|--------------------------------------------------------------------|
| `encode(text, shift)`| Returns an encoded string with letters shifted by the given amount. |
| `decode(text, shift)`| Returns the original string by reverse-shifting letters.           |

## ⚡ Example

```python
from caesar_cipher import encode, decode

cipher_text = encode("Attack at dawn!", shift=5)
print(cipher_text)  # Fyyfhp fy ifbs!

plain_text = decode(cipher_text, shift=5)
print(plain_text)   # Attack at dawn!
```

## 🎓 How It Works

The Caesar Cipher is a substitution cipher where each letter in the plaintext is 'shifted' a certain number of places down the alphabet.

- **A shift of 3:**  
  Plain:  A B C D E  
  Cipher: D E F G H

- **Example:**  
  "ABC" with shift 3 → "DEF"

## 📝 License

This project is licensed under the [MIT License](LICENSE).

## 🤝 Contributing

1. Fork the repo  
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)  
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)  
4. Push to the branch (`git push origin feature/AmazingFeature`)  
5. Open a Pull Request  


⭐️ **Give this repo a star if you found it useful!**
