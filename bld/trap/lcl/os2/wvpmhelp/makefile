#pmake: os_os2 lcl cpu_386 support
#
# Create WDPMHELP.EXE, WDPMHOOK.DLL
#
host_os  = os2
host_cpu = i86

proj_name = wvpmhelp

!ifndef wvpmhelp_autodepends
wvpmhelp_autodepends = .AUTODEPEND
!endif

!include cproj.mif
!include defrule.mif
!include deftarg.mif

w d : wdpmhook.dll wdpmhelp.exe .SYMBOLIC
        @%null

wdpmhook.dll: pmhook.obj loadstd.obj $(__MAKEFILES__)
    @%write  $^&.lnk name $^@ sys os2 dll initglobal
    @%append $^&.lnk debug all op symfile
    @%append $^&.lnk option dosseg,quiet
    @%append $^&.lnk option map
    @%append $^&.lnk file loadstd.obj,pmhook.obj
    @%append $^&.lnk export SENDMSGHOOKPROC.1,SETHMQDEBUGEE.2
    @%append $^&.lnk segment class 'DATA' shared
    @%append $^&.lnk segment class 'BSS' shared
    @%make echo_link
    $(linker) @$^&.lnk

wdpmhelp.exe: wdpmhelp.res _err.gh pmhelp.obj $(__MAKEFILES__)
    @%write  $^&.lnk name $^@ system os2 pm
    @%append $^&.lnk debug all op symfile
    @%append $^&.lnk file pmhelp.obj
    @%append $^&.lnk library clibl.lib
    @%append $^&.lnk option alignment=16
    @%append $^&.lnk option nodefaultlibs,quiet
    @%append $^&.lnk option modname=wdpmhelp
    @%append $^&.lnk option description 'OS/2 Presentation Manager Sample'
    @%append $^&.lnk option manyautodata
    @%append $^&.lnk option stack=4096
    @%append $^&.lnk option heapsize=1024
    @%append $^&.lnk option protmode
    @%make echo_link
    $(linker) @$^&.lnk
    @%make bind_res

.c: ../c
.asm: ../asm

extra_c_flags = -s -zu -fpc

extra_c_flags_pmhook = -mc -oais
extra_c_flags_pmhelp = -ml

inc_dirs = -I. -I"../h" -I"$(trap_dir)/h" -I"$(os2api_dir)/os2286/h" -I"$(os2api_dir)/os2386/h"

extra_a_flags = -2 -bt=os2 -fo=.obj -mc

wdpmhelp.res: ../h/pmhelp.rc ../h/wdpmhelp.rh
    @%make echo_rc
    $(rc) $(rc_flags) $(inc_path) $[@ -fo=$@

_err.gh : $(trap_dir)/h/trapmsg.h $(trap_dir)/h/trap.msg
    @%make echo_cpp
    $(cpp) $(rc_aui_flags) -I"$(trap_dir)/h" -o$@ $[@
