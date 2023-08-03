Summary: Universal Boot Loader for embedded devices
Name: u-boot-fslc
Version: 2022.10+git0+cbd7eb17ac
Release: r0
License: GPL-2.0-or-later
Group: base
Packager: Poky <poky@lists.yoctoproject.org>
BuildRequires: bc-native
BuildRequires: bison-native
BuildRequires: dtc-native
BuildRequires: flex-native
BuildRequires: kern-tools-native
BuildRequires: openssl-native
BuildRequires: python3-native
BuildRequires: python3-setuptools-native
BuildRequires: swig-native
BuildRequires: virtual/arm-poky-linux-gnueabi-compilerlibs
BuildRequires: virtual/arm-poky-linux-gnueabi-gcc
BuildRequires: virtual/libc
Requires: u-boot-fslc-env

%description
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.

%package -n u-boot-fslc-src
Summary: Universal Boot Loader for embedded devices - Source files
License: GPL-2.0-or-later
Group: devel

%description -n u-boot-fslc-src
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.  This package
contains sources for debugging purposes.

%package -n u-boot-fslc-dbg
Summary: Universal Boot Loader for embedded devices - Debugging files
License: GPL-2.0-or-later
Group: devel

%description -n u-boot-fslc-dbg
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.  This package
contains ELF symbols and related sources for debugging purposes.

%package -n u-boot-fslc-staticdev
Summary: Universal Boot Loader for embedded devices - Development files (Static Libraries)
License: GPL-2.0-or-later
Group: devel
Requires: u-boot-fslc-dev = 2022.10+git0+cbd7eb17ac-r0

%description -n u-boot-fslc-staticdev
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.  This package
contains static libraries for software development.

%package -n u-boot-fslc-dev
Summary: Universal Boot Loader for embedded devices - Development files
License: GPL-2.0-or-later
Group: devel
Requires: u-boot-fslc = 2022.10+git0+cbd7eb17ac-r0
Recommends: u-boot-fslc-env-dev

%description -n u-boot-fslc-dev
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.  This package
contains symbolic links, header files, and related items necessary for
software development.

%package -n u-boot-fslc-doc
Summary: Universal Boot Loader for embedded devices - Documentation files
License: GPL-2.0-or-later
Group: doc

%description -n u-boot-fslc-doc
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.  This package
contains documentation.

%package -n u-boot-fslc-locale
Summary: Universal Boot Loader for embedded devices
License: GPL-2.0-or-later
Group: base

%description -n u-boot-fslc-locale
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.

%package -n u-boot-fslc-env
Summary: Universal Boot Loader for embedded devices
License: GPL-2.0-or-later
Group: base
Provides: u-boot-default-env

%description -n u-boot-fslc-env
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.

%package -n u-boot-fslc-extlinux
Summary: Universal Boot Loader for embedded devices
License: GPL-2.0-or-later
Group: base

%description -n u-boot-fslc-extlinux
U-Boot based on mainline U-Boot used by FSL Community BSP in order to
provide support for some backported features and fixes, or because it was
submitted for revision and it takes some time to become part of a stable
version, or because it is not applicable for upstreaming.

%files
%defattr(-,-,-,-)
%dir "/boot"
"/boot/u-boot.img"
"/boot/SPL-sd-2022.10+gitAUTOINC+cbd7eb17ac-r0"
"/boot/SPL"
"/boot/u-boot.img-sd"
"/boot/SPL-sd"
"/boot/u-boot-sd-2022.10+gitAUTOINC+cbd7eb17ac-r0.img"

%files -n u-boot-fslc-dbg
%defattr(-,-,-,-)

%files -n u-boot-fslc-dev
%defattr(-,-,-,-)

%files -n u-boot-fslc-env
%defattr(-,-,-,-)
%dir "/etc"
"/etc/u-boot-fslc-initial-env-imx6qdlsabresd-sd-2022.10+gitAUTOINC+cbd7eb17ac-r0"
"/etc/u-boot-fslc-initial-env"
"/etc/u-boot-fslc-initial-env-sd"
"/etc/u-boot-fslc-initial-env-imx6qdlsabresd-sd"

