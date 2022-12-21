# Babel

The project consists of a voice over IP application of client/server architecture, similar to Skype or TeamSpeak.
The project is OS independent. It compiles and runs in a similar manner on Unix systems and
Windows systems.  

The Babel project aims to create a SIP-like Voice Over IP (VOIP) protocol. It MUST be usable over the Internet (no multicast or anything LAN specific).

The protocol is a client/server protocol but voice transport is client to client (UDP)

We use Asio, QT, Portaudio and Opus as libraries.


## build

```
./build.sh
```
```
export ALSA_CONFIG_DIR=/usr/share/alsa
export ALSA_CONFIGDIR=~/.conan/data/libalsa/1.1.9//_/package/d48130e0dd76369b1338deb3b2372c5a649f9f2d/res/alsa
```
```
ln -s /usr/lib64/alsa-lib/ ~/.conan/data/libalsa/1.1.9/_/_/package/d48130e0dd76369b1338deb3b2372c5a649f9f2d/lib/
ln -s /usr/lib64/pkgconfig/ ~/.conan/data/libalsa/1.1.9/_/_/package/d48130e0dd76369b1338deb3b2372c5a649f9f2d/lib/
```

## Documentation

A code documentation can be built with the Doxyfile by a single doxygen command.
