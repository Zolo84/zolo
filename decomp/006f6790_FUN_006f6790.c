// FUN_006f6790 @ 6f6790 size=470

undefined4 __thiscall FUN_006f6790(int param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  piVar5 = (int *)(param_1 + 0x36);
  do {
    if (((((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 2)) &&
        ((iVar3 != 6 && (*(char *)(param_1 + 0x167) == '\0')))) && ((int *)*piVar5 != (int *)0x0)) {
      (**(code **)(*(int *)*piVar5 + 4))(param_2);
      if (*(char *)(*piVar5 + 0x96) != '\0') {
        cVar1 = FUN_00433910();
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x166) = 0;
          FUN_00433930();
          *(undefined1 *)(param_1 + 0x167) = 0;
          FUN_00433950();
        }
        if (iVar3 == 0) {
          if (*(char *)(param_1 + 0x167) == '\0') {
            cVar1 = FUN_00433910();
            if (cVar1 != '\0') {
              *(undefined1 *)(param_1 + 0x167) = 1;
              puVar4 = (undefined4 *)(*DAT_00d12b40 + 0x362);
              puVar6 = *(undefined4 **)(param_1 + 0x174);
              for (iVar3 = 0x30; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar6 = puVar6 + 1;
              }
              *(undefined2 *)puVar6 = *(undefined2 *)puVar4;
              FUN_006fa780();
              *(undefined1 *)(param_1 + 0x166) = 0;
              return 3;
            }
            *(undefined1 *)(param_1 + 0x167) = 0;
          }
          *(undefined1 *)(param_1 + 0x166) = 0;
          return 3;
        }
        if (iVar3 == 1) {
          FUN_007883a0();
          (&DAT_00dc0fd4)
          [*(int *)(*(int *)(*(int *)(param_1 + 0x15a) + 0xa4) + 4 + *(int *)(param_1 + 0x162) * 4)]
               = 1;
          iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x15a) + 0xa4) + 4 +
                          *(int *)(param_1 + 0x162) * 4);
          if (iVar3 != *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e)) {
            *(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = iVar3;
            FUN_0057d8e0();
          }
          iVar3 = *(int *)(*(int *)(param_1 + 0x15a) + 0xa4);
          pcVar2 = (char *)(*(int *)(iVar3 + 0x277e +
                                    *(int *)(iVar3 + 4 + *(int *)(param_1 + 0x162) * 4) * 4) +
                           0x13d8a);
          if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
            FUN_00583250(3,pcVar2);
            return 1;
          }
          FUN_00583210(3);
          return 1;
        }
        if (iVar3 == 3) {
          *(undefined1 *)(param_1 + 0x10) = 0;
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 1;
    if (6 < iVar3) {
      return 0;
    }
  } while( true );
}


