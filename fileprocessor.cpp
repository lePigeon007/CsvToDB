#include "fileprocessor.h"

class FileProcessorPrivate : public QObject
{
    Q_OBJECT
public:
    FileProcessorPrivate(FileProcessor *q);

protected:
    FileProcessor *q_ptr;

private:
    Q_DECLARE_PUBLIC(FileProcessor)
};

FileProcessorPrivate::FileProcessorPrivate(FileProcessor *q) :
    q_ptr(q)
{

}

FileProcessor::FileProcessor(QObject *parent)
    : QObject{parent}, d_ptr(new FileProcessorPrivate(this))
{
    Q_D(FileProcessor)
}
