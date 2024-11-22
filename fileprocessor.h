#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <QObject>

class FileProcessorPrivate;

class FileProcessor : public QObject
{
    Q_OBJECT
public:
    explicit FileProcessor(QObject *parent = nullptr);

protected:
    QScopedPointer<privateclass> d_ptr;

private:
    Q_DECLARE_PRIVATE(FileProcessor)
};

#endif // FILEPROCESSOR_H
