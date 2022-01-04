/* enigma2_config.h.  Generated from enigma2_config.h.in by configure.  */
/* enigma2_config.h.in.  Generated from configure.ac by autoheader.  */

/* Defines which alsa card to use */
/* #undef ALSA_CARD */

/* Defines which alsa mixer to use for volume control */
/* #undef ALSA_VOLUME_MIXER */

/* define Australia to enable country config */
/* #undef AUSTRALIA */

/* Azbox hardware */
/* #undef AZBOX */

/* define lcd characters for azboxhd family */
/* #undef AZBOXHD_LCD_CHARACTERS */

/* box brand */
#define BOXBRAND "xtrend"

/* box type */
#define BOXTYPE "et1x000"

/* define add HISILICON framebuffer blit */
/* #undef CONFIG_HISILICON_FB */

/* define when we need to use ION allocator */
/* #undef CONFIG_ION */

/* crash log email address */
#define CRASH_EMAILADDR "the OpenPLi forum"

/* Define to 1 to enable debugging code */
#define DEBUG 1

/* Dreambox Amlogic hardware */
/* #undef DMAMLOGIC */

/* Dreambox hardware */
/* #undef DREAMBOX */

/* define dreambox dual tuner */
/* #undef DREAMBOX_DUAL_TUNER */

/* define when we need to move lcd text a bit to the right */
/* #undef DREAMBOX_MOVE_LCD */

/* Defines which device to use for main framebuffer (e.g. /dev/fb0) */
/* #undef FB_DEV */

/* define to fixup the input device identification when the remote control is
   actually an 'advanced' remote (with play/forward/rewind keys) */
/* #undef FORCE_ADVANCED_REMOTE */

/* define when the framebuffer acceleration has alphablending support, but
   detection slow down all */
#define FORCE_ALPHABLENDING_ACCELERATION 1

/* force Inversion auto for vuplus mipsel boxes */
/* #undef FORCE_AUTO_INV */

/* define when the framebuffer acceleration auto not working correct */
/* #undef FORCE_NO_ACCELNEVER */

/* define when the framebuffer acceleration does not have alphablending
   support, though the autodetection might indicate that it does */
/* #undef FORCE_NO_BLENDING_ACCELERATION */

/* define when the framebuffer acceleration does not have fill support */
/* #undef FORCE_NO_FILL_ACCELERATION */

/* Configure threshold for accelerated surfaces (in bytes) */
#define GFX_SURFACE_ACCELERATION_THRESHOLD 48000

/* Configure threshold for accelerated blit operations (in bytes) */
#define GFX_SURFACE_BLIT_ACCELERATION_THRESHOLD 0

/* Configure threshold for accelerated fill operations (in bytes) */
#define GFX_SURFACE_FILL_ACCELERATION_THRESHOLD 80000

/* Define when using an ascii based lcd device */
#define HAVE_7SEGMENT 1

/* enable Alien5 and similar amlogic specific stuff */
/* #undef HAVE_ALIEN5 */

/* Enables ALSA support */
/* #undef HAVE_ALSA */

/* define when using a 128x32 black and white display device */
/* #undef HAVE_BWLCD128 */

/* define when using a 140x32 black and white display device */
/* #undef HAVE_BWLCD140 */

/* define when using a 255x64 black and white display device */
/* #undef HAVE_BWLCD255 */

/* define when using a 220x176 color display device */
/* #undef HAVE_COLORLCD220 */

/* Define when using a 390x240 color display device */
/* #undef HAVE_COLORLCD390 */

/* define when using a 400x176 color display device */
/* #undef HAVE_COLORLCD400 */

/* define when using a 480x320 color display device */
/* #undef HAVE_COLORLCD480 */

/* define when using a 720x576 color display device */
/* #undef HAVE_COLORLCD720 */

/* define when using a 800x480 color display device */
/* #undef HAVE_COLORLCD800 */

/* define if the compiler supports basic C++11 syntax */
/* #undef HAVE_CXX11 */

/* use the specific dinobot player */
/* #undef HAVE_DINOBOT_PLAYER */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* define it's a HISILICON chip */
/* #undef HAVE_HISILICON */

/* enable HyperCube specific stuff */
/* #undef HAVE_HYPERCUBE */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `klogctl' function. */
#define HAVE_KLOGCTL 1

/* Define to 1 if you have the `udfread' library (-ludfread). */
#define HAVE_LIBUDFREAD 1

/* Define to 1 if you have the <linux/dvb/version.h> header file. */
#define HAVE_LINUX_DVB_VERSION_H 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* enable no RTC stuff */
/* #undef HAVE_NO_RTC */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* If available, contains the Python version number currently in use. */
#define HAVE_PYTHON "3.9"

/* Define to 1 if you have the <shadow.h> header file. */
#define HAVE_SHADOW_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/klog.h> header file. */
#define HAVE_SYS_KLOG_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define when using an ascii based lcd device */
#define HAVE_TEXTLCD 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* define when rc sends a KEY_MEDIA event for its KEY_BOOKMARKS key */
/* #undef KEY_ARCHIVE_TO_KEY_DIRECTORY */

/* define when rc sends a KEY_BACK event for its KEY_EXIT */
/* #undef KEY_BACK_TO_KEY_EXIT */

/* define when rc sends a KEY_BOOKMARKS but other box use this key for
   different mapping we remap to KEY_DIRECTORY */
/* #undef KEY_BOOKMARKS_IS_KEY_DIRECTORY */

/* define when rc sends a KEY_BOOKMARKS event for its KEY_DIRECTORY key */
/* #undef KEY_BOOKMARKS_TO_KEY_DIRECTORY */

/* define when rc Playlist sends a KEY_BOOKMARKS event for its KEY_MEDIA key
   */
/* #undef KEY_BOOKMARKS_TO_KEY_MEDIA */

/* define when rc sends a KEY_CONTEXT_MENU event for its KEY_AUX key */
/* #undef KEY_CONTEXT_MENU_TO_KEY_AUX */

/* define when rc MOUSE key sends a KEY_CONTEXT_MENU event for its KEY_BACK
   key */
/* #undef KEY_CONTEXT_MENU_TO_KEY_BACK */

/* define when rc sends a KEY_DIRECTORY event for its KEY_FILE key */
/* #undef KEY_DIRECTORY_TO_KEY_FILE */

/* define when rc sends a KEY_ENTER event for its KEY_OK */
/* #undef KEY_ENTER_TO_KEY_OK */

/* define when rc sends a KEY_F1 event for its KEY_F2 key */
#define KEY_F1_TO_KEY_F2 1

/* define when rc sends a KEY_F1 event for its KEY_MEDIA */
/* #undef KEY_F1_TO_KEY_MEDIA */

/* define when rc sends a KEY_F2 event for its KEY_EPG */
/* #undef KEY_F2_TO_KEY_EPG */

/* define when rc sends a KEY_F2 event for its KEY_F6 key */
/* #undef KEY_F2_TO_KEY_F6 */

/* define when rc sends a KEY_F3 event for its KEY_LIST key */
/* #undef KEY_F3_TO_KEY_LIST */

/* define when rc FAV key sends a KEY_F6 event for its KEY_FAVORITES key */
/* #undef KEY_F6_TO_KEY_FAVORITES */

/* define when rc sends a KEY_F7 event for its KEY_MENU */
/* #undef KEY_F7_TO_KEY_MENU */

/* define when rc sends a KEY_HELP event for its KEY_EPG key */
/* #undef KEY_GUIDE_TO_KEY_EPG */

/* define when rc SETTINGS key sends a KEY_HELP event for its KEY_AUDIO key */
/* #undef KEY_HELP_TO_KEY_AUDIO */

/* define when rc sends a KEY_HELP event we need KEY_INFO */
/* #undef KEY_HELP_TO_KEY_INFO */

/* define when rc sends a KEY_HOME event for its KEY_INFO */
/* #undef KEY_HOME_TO_KEY_INFO */

/* define when rc sends a KEY_HOME event for its KEY_OPEN */
/* #undef KEY_HOME_TO_KEY_OPEN */

/* define when rc sends a KEY_INFO event for its KEY_EPG key */
/* #undef KEY_INFO_TO_KEY_EPG */

/* define when rc sends a KEY_LAST event for its KEY_BACK key */
/* #undef KEY_LAST_TO_KEY_BACK */

/* define when rc sends a KEY_LAST event for its KEY_PVR key */
/* #undef KEY_LAST_TO_KEY_PVR */

/* define when rc sends a KEY_LIST event for its KEY_PVR key */
/* #undef KEY_LIST_TO_KEY_PVR */

/* define when rc sends a KEY_MEDIA event for its KEY_BOOKMARKS key */
/* #undef KEY_MEDIA_TO_KEY_BOOKMARKS */

/* define when rc sends a MEDIA event for its LIST */
/* #undef KEY_MEDIA_TO_KEY_LIST */

/* define when rc sends a KEY_MEDIA event for its KEY_OPEN key */
/* #undef KEY_MEDIA_TO_KEY_OPEN */

/* define when rc sends a KEY_MODE event for its AV plus */
/* #undef KEY_MODE_TO_KEY_AUDIO */

/* define when rc sends a KEY_OPTION event for its KEY_PC key */
/* #undef KEY_OPTION_TO_KEY_PC */

/* define when rc sends a KEY_PLAY event for its KEY_PLAYPAUSE key */
/* #undef KEY_PLAY_ACTUALLY_IS_KEY_PLAYPAUSE */

/* define when rc sends a KEY_PLAY event for its KEY_PLAYPAUSE key */
/* #undef KEY_PLAY_IS_KEY_PLAYPAUSE */

/* define when rc sends a KEY_POWER2 event for its KEY_WWW key */
/* #undef KEY_POWER2_TO_KEY_WWW */

/* define when rc sends a KEY_RADIO event for its KEY_RECORD */
/* #undef KEY_RADIO_TO_KEY_RECORD */

/* define when rc sends a KEY_SCREEN event for its KEY_ANGLE key */
/* #undef KEY_SCREEN_TO_KEY_ANGLE */

/* define when rc sends a KEY_MODE event for its KEY_ASPECT key */
/* #undef KEY_SCREEN_TO_KEY_MODE */

/* define when rc sends a KEY_SEARCH event for its KEY_WWW key */
/* #undef KEY_SEARCH_TO_KEY_WWW */

/* define when rc sends a KEY_TEXT event for its KEY_AUDIO key */
/* #undef KEY_TEXT_TO_KEY_AUDIO */

/* define when rc sends a KEY_TIME event for its KEY_SLEEP */
/* #undef KEY_TIME_TO_KEY_SLEEP */

/* define when rc sends a KEY_TOME event for its KEY_SLOW key */
/* #undef KEY_TIME_TO_KEY_SLOW */

/* define when rc sends a KEY_TV event for its KEY_MODE key */
/* #undef KEY_TV_TO_KEY_MODE */

/* define when rc sends a KEY_TV event for its KEY_STOP */
/* #undef KEY_TV_TO_KEY_STOP */

/* define when rc sends a KEY_VIDEO event for its KEY_SCREEN key */
/* #undef KEY_VIDEO_IS_KEY_SCREEN */

/* define when rc sends a VIDEO event for its ANGLE */
/* #undef KEY_VIDEO_TO_KEY_ANGLE */

/* define when rc sends a KEY_VIDEO event for its KEY_BOOKMARKS */
/* #undef KEY_VIDEO_TO_KEY_BOOKMARKS */

/* define when rc sends a KEY_VIDEO event for its KEY_EPG */
/* #undef KEY_VIDEO_TO_KEY_EPG */

/* define when rc FAV key sends a KEY_VIDEO event for its KEY_FAVORITES key */
/* #undef KEY_VIDEO_TO_KEY_FAVORITES */

/* define when rc sends a KEY_VIDEO event for its KEY_MODE key */
/* #undef KEY_VIDEO_TO_KEY_MODE */

/* define when rc sends a KEY_VIDEO event for its KEY_SUBTITLE */
/* #undef KEY_VIDEO_TO_KEY_SUBTITLE */

/* define when rc HOME key sends a KEY_WWW event for its KEY_FILE key */
/* #undef KEY_WWW_TO_KEY_FILE */

/* define when rc sends a KEY_ZOOM event for its KEY_SCREEN key */
/* #undef KEY_ZOOM_TO_KEY_SCREEN */

/* Defines which device to use for lcd (e.g. /dev/fb1) */
/* #undef LCD_DEV */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to 1 to enable memory leak checks */
/* #undef MEMLEAK_CHECK */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "forum@openpli.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "enigma2"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "enigma2 4"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "enigma2"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* stb platform */
#define STBPLATFORM "et1x000"

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Accumulate blit/fill acceleration operations */
/* #undef SUPPORT_ACCUMULATED_ACCELERATION_OPERATIONS */

/* define use Tiviar RC keymap */
/* #undef TIVIARRC */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* define vtuner_message type 2 */
/* #undef VMSG_TYPE2 */

/* WeTek remote uses BACKSPACE to toggle extended functions on numeric buttons
   */
/* #undef WETEKRC */

/* Define to 1 if you have libxine */
/* #undef WITH_XINE */

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */
