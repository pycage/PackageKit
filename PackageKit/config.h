/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* default backend prefix */
#define DEFAULT_BACKEND "zypp"

/* Build test code */
/* #undef EGG_BUILD_TESTS */

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Name of default gettext domain */
#define GETTEXT_PACKAGE "PackageKit"

/* Define to 1 if you have the <archive.h> header file. */
#define HAVE_ARCHIVE_H 1

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the `clearenv' function. */
#define HAVE_CLEARENV 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Set to true if apt is DDTP-enabled */
/* #undef HAVE_DDTP */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `apt-inst' library (-lapt-inst). */
/* #undef HAVE_LIBAPT_INST */

/* Define to 1 if you have the `apt-pkg' library (-lapt-pkg). */
/* #undef HAVE_LIBAPT_PKG */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* "Meta release is available" */
/* #undef HAVE_PYTHON_META_RELEASE */

/* "Python software properties is available" */
/* #undef HAVE_PYTHON_SOFTWARE_PROPERTIES */

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* If Zif support should be enabled */
/* #undef HAVE_ZIF */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "PackageKit"

/* User for running the PackageKit daemon */
#define PACKAGEKIT_USER "root"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "richard@hughsie.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "PackageKit"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "PackageKit 0.8.9"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "PackageKit"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.packagekit.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.8.9"

/* define if Connection Manager is installed */
#define PK_BUILD_CONNMAN 1

/* Build local code */
/* #undef PK_BUILD_LOCAL */

/* Build mce code */
#define PK_BUILD_MCE 1

/* define if NetworkManager is installed */
/* #undef PK_BUILD_NETWORKMANAGER */

/* Build systemd code */
#define PK_BUILD_SYSTEMD 1

/* Define to 1 if GPGME is available to Slapt */
/* #undef SLAPT_HAS_GPGME */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* if we should use a dummy security framework */
/* #undef USE_SECURITY_DUMMY */

/* if we should use PolicyKit */
#define USE_SECURITY_POLKIT 1

/* Version number of package */
#define VERSION "0.8.9"

/* define if libzypp returns package size in bytes */
#define ZYPP_RETURN_BYTES 1

/* default security framework */
#define security_framework "polkit"
