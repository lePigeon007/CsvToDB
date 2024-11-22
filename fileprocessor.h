#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <QObject>
#include <QDebug>
#include <QList>
#include <QDate>
#include <QDateTime>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>

class FileProcessor : public QObject
{
    Q_OBJECT
public:
    explicit FileProcessor(QObject *parent = nullptr);

    void fileInput(const QString &filePath);
    void processLine(const QString & fileLine);

protected:

signals:

private:

    void timeProcessor(const QString &timeStamp, int timeStampFormat);

    QList<QString> m_timeStamp;
    QList<QString> m_latitude;
    QList<QString> m_longitude;
    QList<QString> m_identity;
};

#endif // FILEPROCESSOR_H
