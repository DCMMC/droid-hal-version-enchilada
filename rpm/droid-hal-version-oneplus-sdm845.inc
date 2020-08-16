%define vendor oneplus
%define vendor_pretty OnePlus

# See ../droid-hal-version/droid-hal-device.inc for similar macros:
%define have_vibrator_native 1
%define have_led 1

BuildRequires: droid-config-%{device}
BuildRequires: droid-config-%{device}-bluez5
BuildRequires: droid-config-%{device}-flashing
BuildRequires: droid-config-%{device}-preinit-plugin
BuildRequires: droid-config-%{device}-pulseaudio-settings
BuildRequires: droid-config-%{device}-sailfish

BuildRequires: droid-hal-%{device}
BuildRequires: droid-hal-%{device}-img-boot
BuildRequires: droid-hal-%{device}-img-recovery
BuildRequires: droid-hal-%{device}-kernel
BuildRequires: droid-hal-%{device}-tools