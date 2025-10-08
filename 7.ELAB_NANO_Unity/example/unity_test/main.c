#include <stdio.h>
#include "../../elab/common/elab_common.h"
#include "../../elab/common/elab_log.h"
#include "../../elab/common/elab_export.h"
#include "../../elab/common/elab_assert.h"
#include "../../elab/os/cmsis_os.h"
#include "../../elab/3rd/Shell/shell.h"
#include "elab_config.h"


ELAB_TAG("win_example");



int main(void) {
    elog_info("Hello eLab!");
    elog_debug("This is a debug message.");
    elog_warn("This is a warning message.");
    elog_error("This is an error message.");


    elab_run();

    return 0;
}
