

#include "mn.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"

char mn_m2_buf[1024];


int mn_fn_m2_base(mn_type mn, int msg, void *arg)
{
  switch(msg)
  {
    case MN_MSG_GET_LABEL_STRING:
      sprintf(mn_m2_buf, "l%5u", mn->seq_nr);
      *(char **)arg = mn_m2_buf;
      return 1;
  }
  return 1;
}


int mn_fn_m2_vlist(mn_type mn, int msg, void *arg)
{
  switch(msg)
  {
    case MN_MSG_NONE:
      break;
    case MN_MSG_OPEN:
      break;
    case MN_MSG_CLOSE:
      break;
    case MN_MSG_COPY:
      break;
    case MN_MSG_GET_DISPLAY_STRING:
      sprintf(mn_m2_buf, "VLIST");
      *(char **)arg = mn_m2_buf;
      return 1;
    case MN_MSG_C_CODE:
      return 1;
  }
  return mn_fn_m2_base(mn, msg, arg);
}
