// FUN_006f1120 @ 6f1120 size=502

undefined4 __thiscall FUN_006f1120(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x3e);
  do {
    if (((((iVar5 != 4) && (iVar5 != 5)) && (iVar5 != 2)) &&
        ((iVar5 != 6 && (*(char *)(param_1 + 0x16f) == '\0')))) && ((int *)*piVar4 != (int *)0x0)) {
      iVar2 = (**(code **)(*(int *)*piVar4 + 4))(param_2);
      if (iVar2 != 0) {
        if (*(char *)(*(int *)(param_1 + 0x3e + iVar5 * 4) + 0x96) != '\0') {
          cVar1 = FUN_00433910();
          if (cVar1 != '\0') {
            *(undefined1 *)(param_1 + 0x16e) = 0;
            FUN_00433930();
            *(undefined1 *)(param_1 + 0x16f) = 0;
            FUN_00433950();
          }
          if (iVar5 == 0) {
            if (*(char *)(param_1 + 0x16f) == '\0') {
              cVar1 = FUN_00433910();
              if (cVar1 != '\0') {
                *(undefined1 *)(param_1 + 0x16f) = 1;
                FUN_006fa780();
                *(undefined1 *)(param_1 + 0x16e) = 0;
                return 3;
              }
              *(undefined1 *)(param_1 + 0x16f) = 0;
            }
            *(undefined1 *)(param_1 + 0x16e) = 0;
          }
          else {
            if (iVar5 == 1) {
              FUN_006f2260();
              FUN_007883a0();
              (&DAT_00dc0fd4)
              [*(int *)(*(int *)(*(int *)(param_1 + 0x162) + 0xa4) + 4 +
                       *(int *)(param_1 + 0x16a) * 4)] = 1;
              iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x162) + 0xa4) + 4 +
                              *(int *)(param_1 + 0x16a) * 4);
              if (iVar5 != *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e)) {
                *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = iVar5;
                FUN_0057d8e0();
              }
              iVar5 = *(int *)(*(int *)(param_1 + 0x162) + 0xa4);
              pcVar3 = (char *)(*(int *)(iVar5 + 0x277e +
                                        *(int *)(iVar5 + 4 + *(int *)(param_1 + 0x16a) * 4) * 4) +
                               0x13d8a);
              if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                FUN_00583250(3,pcVar3);
                return 1;
              }
              FUN_00583210(3);
              return 1;
            }
            if (iVar5 == 3) {
              FUN_006f2260();
              *(undefined1 *)(param_1 + 0x10) = 0;
              if (DAT_00bd1500 != 0) {
                FUN_0057be80();
              }
              return 1;
            }
          }
        }
        return 3;
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    if (6 < iVar5) {
      if (*(char *)(param_1 + 0x16f) != '\0') {
        FUN_00433950();
      }
      return 0;
    }
  } while( true );
}


