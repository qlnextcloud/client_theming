/*
 * Copyright (C) by Roeland Jago Douma <roeland@famdouma.nl>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#ifndef NEXTCLOUD_THEME_H
#define NEXTCLOUD_THEME_H

#include "theme.h"

#include <QString>
#include <QPixmap>
#include <QIcon>
#include <QApplication>

#include "version.h"
#include "config.h"


namespace OCC {

/**
 * @brief The NextcloudTheme class
 * @ingroup libsync
 */
//class NextcloudTheme : public Theme
class MicrocloudTheme : public Theme
{

public:
    //NextcloudTheme() {};
    MicrocloudTheme() {};

    QString configFileName() const  {
        //return QLatin1String("nextcloud.cfg");
        return QLatin1String("microcloud.cfg");
    }

    QIcon trayFolderIcon( const QString& ) const  {
        //return themeIcon( QLatin1String("Nextcloud-icon") );
        return themeIcon( QLatin1String("Microcloud-icon") );
    }
    QIcon applicationIcon() const  {
        //return themeIcon( QLatin1String("Nextcloud-icon") );
        return themeIcon( QLatin1String("Microcloud-icon") );
    }

    QString updateCheckUrl() const {
        //return QLatin1String("https://updates.nextcloud.org/client/");
        return QLatin1String("https://github.com/qlnextcloud");
    }

    QString helpUrl() const {
        //return QString::fromLatin1("https://docs.nextcloud.com/desktop/2.2/").arg(MIRALL_VERSION_MAJOR).arg(MIRALL_VERSION_MINOR);
        return QString::fromLatin1("https://github.com/qlnextcloud").arg(MIRALL_VERSION_MAJOR).arg(MIRALL_VERSION_MINOR);
    }

#ifndef TOKEN_AUTH_ONLY
    QColor wizardHeaderBackgroundColor() const {
        return QColor("#0082c9");
    }

    QColor wizardHeaderTitleColor() const {
        return QColor("#ffffff");
    }

    QPixmap wizardHeaderLogo() const {
        return QPixmap(hidpiFileName(":/client/theme/colored/wizard_logo.png"));
    }
#endif

    QString about() const {
        QString re;

		re = tr("<p>版本 %1.</p>")
			.arg(MIRALL_VERSION_STRING);

        re += tr("<p>版权归属 深圳市启仑智能科技有限公司</p>");

        return re;
}

};

}
#endif // NEXTCLOUD_THEME_H
