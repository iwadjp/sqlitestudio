#include "dbsqlite2instance.h"

const QString DbSqlite2Instance::ENCODING_OPT = "encoding";

DbSqlite2Instance::DbSqlite2Instance(const QString& name, const QString& path, const QHash<QString, QVariant>& connOptions) :
    AbstractDb2<Sqlite2>(name, path, connOptions)
{
}

QString DbSqlite2Instance::getEncoding() const
{
    return connOptions.value(ENCODING_OPT, "UTF-8").toString();
}
