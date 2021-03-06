#ifndef __VSX_VERSION_H__
#define __VSX_VERSION_H__

#if defined(ARCH_mac_x86_64)
#define ARCH "x86_64"
#elif defined(ARCH_linux_x86_64)
#define ARCH "x86_64"
#elif defined(ARCH_linux_x86_32)
#define ARCH "x86_32"
#elif defined(WIN32)
#define ARCH "win32"
#elif defined(ANDROID)
#define ARCH "android_armeabi"
#elif defined(IPHONE)
#define ARCH "iphone"
#endif


#include "build_info_ver.h" // dynamically generated by make
#include "build_info_date.h" // dynamically generated by make

#define VSX_VERSION_MAJMIN "v1.8.1"

#if defined(LITE_VERSION)
#define VSX_VERSION_LITE " Lite"
#define VSX_APPNAME "OpenVSX Lite" 
#define VSX_APPNAME_MGR "OpenVSX Web Portal Lite" 
#define VSX_VERSION VSX_VERSION_MAJMIN".b%d-Lite"
#define VSX_BINARY "vsx"
#else
#define VSX_APPNAME "OpenVSX" 
#define VSX_APPNAME_MGR "OpenVSX Web Portal" 
#define VSX_VERSION VSX_VERSION_MAJMIN".b%d"
#define VSX_BINARY "vsx"
#undef VSX_VERSION_LITE
#endif //defined(LITE_VERSION)

#define VSX_APPTYPE_DEV " (Development Release)"
#define VSX_APPTYPE_RC ""
#define VSX_BANNER(rc) VSX_APPNAME " " VSX_VERSION rc " " ARCH
#define VSX_BANNER_MGR(rc) VSX_APPNAME_MGR " " VSX_VERSION rc " " ARCH
#define VSX_URL     "http://openvcx.com"
#define VSX_USER_AGENT VSX_APPNAME" "VSX_URL
#define VSX_BANNER3 "Visit the knowledge base at " VSX_URL " for help and examples."
#define VSX_BANNER4 "Please email bugs or feature requests to <openvcx@gmail.com>"
#define VSX_3GP_DAMR_VENDOR "VSX"

#define VSX_FEATURE_DISABLED_BANNER "Please visit "VSX_URL" to obtain a full featured version."
#define VSX_XCODE_DISABLED_BANNER VSX_APPNAME" does not support transcoding."
#define VSX_RECORDING_DISABLED_BANNER VSX_APPNAME" does not support recording."
#define VSX_SRTP_DISABLED_BANNER VSX_APPNAME" does not support SRTP."
#define VSX_DTLS_DISABLED_BANNER VSX_APPNAME" does not support DTLS."
#define VSX_SSL_DISABLED_BANNER VSX_APPNAME" does not support HTTPS/SSL."
#define VSX_CRYPTO_DISABLED_BANNER VSX_APPNAME" does not support crypto."



#define VCX_VERSION_BETA ""









#endif // __VSX_VERSION_H__
