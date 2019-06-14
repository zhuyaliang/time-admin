# Example Graphs

![MainWindow:](https://github.com/zhuyaliang/images/blob/master/main-time.png)
![Switching time zone:](https://github.com/zhuyaliang/images/blob/master/time-zone.png)

# Explain
Manage user's time and date, such as setting NTP synchronization, modifying time zone, modifying time and date

# Compile

```
meson build -Dprefix=/usr
ninja -C build
sudo ninja -C build install
```
