/*! ********************************************************************************
 * @file CsvToDB
 *
 *  @author: l.Pigeon
 *
 *   @date 2024-11-22 : Start
 *   @date XXXX-XX-XX : Finished
 *
 *   <@brief>
 *      <@line>-----------------------------------------------------------<\n>
 *      <@line> This application is constructed under the GNU open-source <\n>
 *      <@line> license. It is therefor publicly available for fair use   <\n>
 *      <@line> to public users.                                          <\n>
 *      <@line>                                                           <\n>
 *      <@line> For legal matters, please refer to the GNU legal framework<\n>
 *      <@line> or a legal team for clarification.                        <\n>
 *      <@line>-----------------------------------------------------------<\n>
 *      <@line> This application takes in random unsorted .csv files and  <\n>
 *      <@line> output the data in a sorted format to an SQL database in  <\n>
 *      <@line> .db format. The four catagories to be constructed are as  <\n>
 *      <@line> follows:                                                  <\n>
 *      <@line>   <@var> DateTime  (UTC.msSinceEpoch)                     <\n>
 *      <@line>   <@var> Lattitude (deg)                                  <\n>
 *      <@line>   <@var> Longitude (deg)                                  <\n>
 *      <@line>   <@var> id        (identifier)                           <\n>
 *      <@line    <@sql> output    (.db format)                           <\n>
 *      <@line>-----------------------------------------------------------<\n>
 *   <\@brief>
 *
 **********************************************************************************/

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return a.exec();
}
