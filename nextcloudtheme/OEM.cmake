set( APPLICATION_NAME       "Microcloud" )
set( APPLICATION_SHORTNAME  "Microcloud" )
set( APPLICATION_EXECUTABLE "microcloud" )
set( APPLICATION_DOMAIN     "github.com/isshe" )
set( APPLICATION_VENDOR     "Microcloud GmbH" )
set( APPLICATION_UPDATE_URL "https://updates.microcloud.org/client/" CACHE string "URL for updater" )
set( APPLICATION_ICON_NAME  "Microcloud" )

set( THEME_CLASS            "MicrocloudTheme" )
set( APPLICATION_REV_DOMAIN "com.microcloud.desktopclient" )
set( WIN_SETUP_BITMAP_PATH  "${OEM_THEME_DIR}/win" )

set( MAC_INSTALLER_BACKGROUND_FILE "${OEM_THEME_DIR}/osx/installer-background.png" CACHE STRING "The MacOSX installer background image")

set( THEME_INCLUDE          "${OEM_THEME_DIR}/nextcloudtheme.h" )
# set( APPLICATION_LICENSE    "${OEM_THEME_DIR}/license.txt )

option( WITH_CRASHREPORTER "Build crashreporter" OFF )
set( CRASHREPORTER_SUBMIT_URL "https://crash-reports.owncloud.com/submit" CACHE string "URL for crash reporter" )
set( CRASHREPORTER_ICON ":/owncloud-icon.png" )

if(CPACK_GENERATOR MATCHES "NSIS")
    SET( CPACK_PACKAGE_ICON  "{OEM_THEME_DIR}/win/installer.ico" ) # Set installer icon
endif(CPACK_GENERATOR MATCHES "NSIS")
