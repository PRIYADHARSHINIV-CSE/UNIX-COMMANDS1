# UNIX-COMMANDS1# Experiment 2: Installation of Kali Linux

## Aim

To install Kali Linux operating system on a laptop and verify its successful installation and operation.

## Requirements

* Laptop/Desktop Computer
* Minimum 4 GB RAM
* Minimum 20 GB free disk space
* USB Flash Drive (8 GB or higher)
* Kali Linux ISO Image
* Rufus/Balena Etcher

## Procedure

1. Download the Kali Linux ISO image.
2. Create a bootable USB using Rufus or another bootable USB tool.
3. Enter BIOS/UEFI and set the USB as the first boot device.
4. Boot from the USB and select **Graphical Install**.
5. Configure language, location, keyboard, hostname, and user account.
6. Partition the disk and allocate space for Kali Linux.
7. Install the base system and GRUB bootloader.
8. Complete the installation, remove the USB, and restart.
9. Log in and verify the installation using Linux commands.

## Commands Used

```bash
uname -a
cat /etc/os-release
whoami
hostname
lscpu
df -h
```

## Verification

The installation was verified using:

* Kernel information
* Operating system details
* Current username
* Hostname
* CPU/system information
* Disk usage

## Result

Kali Linux was successfully installed and configured on the laptop. The installation was verified using system information commands and the operating system was found to be functioning correctly.

## Screenshots

Add the installation and command-output screenshots to the `screenshots` folder.
