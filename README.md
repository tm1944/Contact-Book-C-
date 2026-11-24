# Contacts CLI

A contact book written in C. Add contacts, list them, or find one by name.

Requires GCC, Make, and a Unix shell, such as WSL.

Build and run from the project directory:

```sh
make
make run
```

Choose a menu option:

- `1`: Add a name and phone number.
- `2`: List contacts.
- `3`: Find a contact by name.
- `4`: Save and exit.

Contacts load from `contacts.txt` at startup and save when you choose `4`. The file is created if it doesn't exist. Each line uses `name|phone number`.

To rebuild after changing a header:

```sh
make clean
make
```
