#include "fileprocessor.h"
#include "fileprocessor.moc"

#include <QRegularExpression>
#include <QFile>
#include <QTextStream>

//Place static regex here.
static QRegularExpression timeStampA("^-?(\\d{4})-(\\d{2})-(\\d{2}) (\\d{2}):(\\d{2}):(\\d{2})?$");    //Regex timestamp.
static QRegularExpression timeStampB("^-?(\\d{4})(\\d{2})(\\d{2})(\\d{2})(\\d{2})(\\d{2})?$");
static QRegularExpression latPos("^-?[0-9]\\d*(\\.\\d+)?$"); //Add word       //Regex latitude position.
static QRegularExpression lonPos("^-?[0-9]\\d*(\\.\\d+)?$"); //Add word       //Regex longtitude position.
static QRegularExpression id("^-?([^\\s]+)?$"); //Change if id is number.           //Regex identifier.


FileProcessor::FileProcessor(QObject *parent)
    : QObject{parent}
{

}

void FileProcessor::fileInput(const QString &filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly))
    {
        qCritical() << "Error: Could not open " << filePath;
        return;
    }

    QTextStream in(&file);
    while(!file.atEnd())
    {
        QString line = in.readLine();
        //processLine(line);
    }
}

void FileProcessor::processLine(const QString &fileLine)
{
    //Regex implimenentation.
    //QRegularExpressionMatch timeMatchA = timeStampA.globalMatch(0);
    //QRegularExpressionMatch timeMatchB = timeStampB.globalMatch(0);
    //QRegularExpressionMatch latMatch = latPos.globalMatch(0);
    //QRegularExpressionMatch lonMatch = lonPos.globalMatch(0);
    //QRegularExpressionMatch idMatch = id.globalMatch(0);

    //if(timeMatchA.hasMatch())
    //{
    //    QString timeMatchedA = timeMatchA.captured(0);
    //    QString year = timeMatchA.captured(1);
    //    QString month = timeMatchA.captured(2);
    //    QString day = timeMatchA.captured(3);
    //    QString hours = timeMatchA.captured(4);
    //    QString minutes = timeMatchA.captured(5);
    //    QString sec = timeMatchA.captured(6);

    //    //Add in QDateTime stuff here.
    //}

    //if(timeMatchB.hasMatch())
    //{
    //    QString timeMatchedB = timeMatchB.captured(1);
    //}

    //if(latMatch.hasMatch())
    //{
    //    QString latMatched = latMatch.captured(1);
    //}

    //if(lonMatch.hasMatch())
    //{
    //    QString lonMatched = lonMatch.captured(1);
    //}

    //if(idMatch.hasMatch())
    //{
    //    QString idMatched = idMatch.captured(1);
    //}

}

void FileProcessor::timeProcessor(const QString &timeStamp, int timeStampFormat)
{
    //QDateTime handling class.
}
