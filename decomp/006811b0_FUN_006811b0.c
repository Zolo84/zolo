// FUN_006811b0 @ 6811b0 size=525

int __fastcall FUN_006811b0(int *param_1)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined ***pppuStack_4c;
  undefined **ppuStack_34;
  undefined ***pppuStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d4ba0;
  local_c = ExceptionList;
  pppuStack_4c = (undefined ***)0x6811d9;
  ExceptionList = &local_c;
  cVar3 = FUN_0042e9a0();
  if ((cVar3 != '\0') && (*(char *)(DAT_00d0ca90 + 0x2224c) != '\0')) {
    ExceptionList = local_c;
    return 1000;
  }
  pppuStack_4c = (undefined ***)0x681209;
  uVar4 = _rand();
  uVar4 = uVar4 & 0x80000001;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
  }
  iVar6 = uVar4 + 1;
  if (((char)param_1[8] != '\0') && (*(char *)((int)param_1 + 0x21) == '\0')) {
    pppuStack_4c = (undefined ***)0x681234;
    iVar5 = (**(code **)(*param_1 + 4))();
    if (0 < iVar5) {
      if ((char)param_1[0x49] != '\0') {
        pppuStack_4c = (undefined ***)0x681249;
        uVar4 = _rand();
        uVar4 = uVar4 & 0x80000001;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
        }
        iVar6 = uVar4 + 1;
      }
      *(int *)((int)param_1 + 0x126) = *(int *)((int)param_1 + 0x126) + 1;
      pppuStack_4c = (undefined ***)0x68126e;
      cVar3 = FUN_006a8720();
      if (cVar3 == '\0') {
        pppuStack_4c = (undefined ***)0x68127d;
        FUN_006829b0();
      }
      *(undefined1 *)((int)param_1 + 0x9e) = 1;
      pppuStack_4c = (undefined ***)0x68128b;
      FUN_006853c0();
      if ((*(char *)((int)param_1 + 0x11e) == '\0') && (cVar3 == '\0')) {
        uStack_1c = 0;
        puStack_18 = (undefined4 *)0x0;
        iStack_14 = 0;
        uStack_10 = 0;
        ppuStack_20 = &PTR_FUN_007e4c84;
        pppuStack_4c = &ppuStack_20;
        uStack_4 = 0;
        FUN_00689b40();
        pppuStack_4c = &ppuStack_20;
        cVar3 = FUN_004a4720();
        while (cVar3 == '\0') {
          ppuVar1 = ppuStack_20 + 7;
          (*(code *)ppuStack_20[10])(&pppuStack_4c,*puStack_18);
          (*(code *)*ppuVar1)();
          pppuStack_4c = &ppuStack_20;
          cVar3 = FUN_004a4720();
        }
        if ((0 < iStack_14) && (*(char *)(*(int *)(param_1[7] + 0x120) + 0xed) != '\0')) {
          pppuStack_4c = &ppuStack_20;
          FUN_00462a50();
        }
        pppuStack_4c = (undefined ***)0x0;
        FUN_006860f0();
        uStack_4 = 0xffffffff;
        pppuStack_4c = (undefined ***)0x681344;
        FUN_00527230();
      }
      else {
        param_1[0x3d] = param_1[0x3d] + 1;
        if (cVar3 == '\0') {
          pppuStack_30 = (undefined ***)0x0;
          uStack_2c = 0;
          uStack_28 = 0;
          uStack_24 = 0;
          ppuStack_34 = &PTR_LAB_007e378c;
          pppuStack_4c = (undefined ***)0x1;
          uStack_4 = 1;
          FUN_00688ca0(&ppuStack_34);
          ppuStack_34 = &PTR_LAB_007e378c;
          pppuStack_4c = pppuStack_30;
          while (pppuStack_4c != (undefined ***)0x0) {
            pppuVar2 = (undefined ***)pppuStack_4c[2];
            FUN_00796cd8();
            pppuStack_4c = pppuVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return iVar6;
}


