// FUN_006f78a0 @ 6f78a0 size=340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_006f78a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_retaddr;
  
  iVar3 = FUN_006ee6e0(param_2);
  if (iVar3 == 0) {
    (**(code **)(**(int **)(param_1 + 0x136) + 4))(param_2);
    iVar3 = 0;
    piVar4 = (int *)(param_1 + 0x16);
    do {
      (**(code **)(*(int *)*piVar4 + 0x50))();
      cVar2 = FUN_00433910();
      if (((cVar2 != '\0') && (0 < iVar3)) && (iVar3 < 4)) {
        piVar1 = (int *)*piVar4;
        if (*(char *)((int)piVar1 + 0xa2) != '\0') {
          FUN_00433930();
        }
        (**(code **)(*piVar1 + 0x60))();
        *(undefined1 *)((int)piVar1 + 0x86) = 1;
        param_2 = unaff_retaddr;
      }
      (**(code **)(*(int *)*piVar4 + 4))(param_2);
      if (*(char *)(*piVar4 + 0x96) != '\0') {
        if (iVar3 == 6) {
          *(undefined4 *)(param_1 + 0x32) = 0;
          return 1;
        }
        *(undefined4 *)(param_1 + 0x32) = 0xe;
        FUN_007883a0();
        if (iVar3 == 5) {
          _DAT_00dc1000 = 1;
          if (*(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) == 0xb)
          goto LAB_006f79cb;
          *(undefined4 *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = 0xb;
        }
        else {
          _DAT_00dc0fe0 = 1;
          if (*(int *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) == 3)
          goto LAB_006f79cb;
          *(undefined4 *)(DAT_00bd1500 + 0x3cc + *(int *)(DAT_00bd1500 + 900) * 0x3e) = 3;
        }
        FUN_0057d8e0();
LAB_006f79cb:
        _DAT_0083b12c = 3000;
        FUN_007a630a(param_1 + 0x36,s_Tutorial_Chapter_d_0086f9a0,iVar3 + 1);
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < 7);
    iVar3 = 0;
  }
  return iVar3;
}


