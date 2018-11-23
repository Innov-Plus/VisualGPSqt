/*
* MIT License
*
*  Copyright (c) 2018 VisualGPS, LLC
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is
*  furnished to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in all
*  copies or substantial portions of the Software.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
*  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*  SOFTWARE.
*
*/
#ifndef GPSSTATUSWND_H
#define GPSSTATUSWND_H

#include <QWidget>
#include "SignalQuality.h"
#include "NMEAParser.h"
#include "AzimuthElevationWnd.h"
#include "PositionStatusWnd.h"

class CGPSStatusWnd : public QWidget
{
private:
    Q_OBJECT

    CNMEAParserQt *             m_pNMEAParser;              ///< The main parser
    CSignalQuality *            m_pSignalQualityWnd;        ///< Signal quality widget
    CAzimuthElevationWnd *      m_pAzimuthElevationWnd;     ///< Azimuth elevation widget
    CPositionStatusWnd *        m_pPositionStatusWnd;       ///< Position status widget

public:
    explicit CGPSStatusWnd(CNMEAParserQt *pNMEAParser, QWidget *parent = nullptr);

signals:

public slots:

protected:
    void CreateWidgets();
};

#endif // GPSSTATUSWND_H
