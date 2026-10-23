// FUN_007a6513 @ 7a6513 size=163

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a6513(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_007a65b8();
  if (DAT_00dc5170 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00dc516c = 1;
  DAT_00dc5168 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00dc6c90 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_00dc6c8c - 4), DAT_00dc6c90 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00dc6c90 <= puVar1);
    }
    FUN_007a65ca(&DAT_0082c368,&DAT_0082c370);
  }
  FUN_007a65ca(&DAT_0082c374,&DAT_0082c37c);
  if (param_3 == 0) {
    DAT_00dc5170 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_007a65c1();
  return;
}


