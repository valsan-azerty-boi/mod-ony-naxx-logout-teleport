#!/usr/bin/env bash
MOD_ONY_NAXX_LOGOUT_TELEPORT_ROOT="$( cd "$( dirname "${BASH_SOURCE[0]}" )/" && pwd )"

source $MOD_ONY_NAXX_LOGOUT_TELEPORT_ROOT"/conf/conf.sh.dist"

if [ -f $MOD_ONY_NAXX_LOGOUT_TELEPORT_ROOT"/conf/conf.sh" ]; then
    source $MOD_ONY_NAXX_LOGOUT_TELEPORT_ROOT"/conf/conf.sh"
fi
