#ifndef __LLOG_INTERNAL_H__
#define __LLOG_INTERNAL_H__

int llog_put_cat_list(struct obd_device *obd, struct obd_device *disk_obd,
                      char *name, int count, struct llog_catid *idarray);
int llog_cat_id2handle(struct llog_handle *cathandle, struct llog_handle **res,
                       struct llog_logid *logid);
#endif
