// FUN_006f3e50 @ 6f3e50 size=736

undefined4 __thiscall FUN_006f3e50(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007daa8b;
  pvStack_c = ExceptionList;
  piVar8 = (int *)(param_1 + 0xbe);
  iVar7 = 0;
  ExceptionList = &pvStack_c;
  while (((((iVar7 == 4 || (iVar7 == 5)) || (iVar7 == 2)) ||
          ((iVar7 == 6 || (*(char *)(param_1 + 0x1f7) != '\0')))) ||
         (((int *)*piVar8 == (int *)0x0 ||
          (iVar2 = (**(code **)(*(int *)*piVar8 + 4))(param_2), iVar2 == 0))))) {
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 1;
    if (6 < iVar7) {
      if (*(char *)(param_1 + 0x1f7) != '\0') {
        FUN_00433950();
      }
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0xbe + iVar7 * 4) + 0x96) != '\0') {
    cVar1 = FUN_00433910();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x1f6) = 0;
      FUN_00433930();
      *(undefined1 *)(param_1 + 0x1f7) = 0;
      FUN_00433950();
    }
    iVar2 = DAT_00bd1500;
    if (iVar7 == 0) {
      if (*(char *)(param_1 + 0x1f7) == '\0') {
        cVar1 = FUN_00433910();
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x1f7) = 1;
          puVar3 = (undefined4 *)(*DAT_00d12b40 + 0x362);
          puVar5 = *(undefined4 **)(param_1 + 0x200);
          for (iVar7 = 0x30; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar5 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
          FUN_006fa780();
          *(undefined1 *)(param_1 + 0x1f6) = 0;
          ExceptionList = pvStack_c;
          return 3;
        }
        *(undefined1 *)(param_1 + 0x1f7) = 0;
      }
      *(undefined1 *)(param_1 + 0x1f6) = 0;
    }
    else {
      if (iVar7 == 1) {
        iVar7 = 0;
        puVar3 = (undefined4 *)(DAT_00bd1500 + 0x3b0);
        if (0 < *(int *)(DAT_00bd1500 + 0xb70)) {
          do {
            FUN_005824f0(*puVar3);
            iVar7 = iVar7 + 1;
            puVar3 = (undefined4 *)((int)puVar3 + 0x3e);
          } while (iVar7 < *(int *)(iVar2 + 0xb70));
        }
        FUN_005823d0();
        FUN_00582320();
        *(undefined1 *)(param_1 + 0x10) = 1;
        iVar7 = *(int *)(*(int *)(param_1 + 0x1e2) + 0xa4);
        pcVar6 = (char *)(*(int *)(iVar7 + 0x277e +
                                  *(int *)(iVar7 + 4 + *(int *)(param_1 + 0x1ee) * 4) * 4) + 0x13d8a
                         );
        if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
          FUN_00583250(3,pcVar6);
          ExceptionList = pvStack_c;
          return 1;
        }
        FUN_00583210(3);
        ExceptionList = pvStack_c;
        return 1;
      }
      if (iVar7 == 3) {
        puVar3 = operator_new(0xc);
        uStack_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar4 = operator_new(0xe);
          if (puVar4 == (undefined2 *)0x0) {
            puVar4 = (undefined2 *)0x0;
          }
          else {
            FUN_0042d2d0();
            puVar4[4] = 0;
            *(undefined4 *)(puVar4 + 5) = 0;
          }
          puVar3[1] = puVar4;
          *(undefined1 *)(puVar3 + 2) = 0;
          *(undefined1 *)((int)puVar3 + 9) = 1;
          *puVar3 = &PTR_FUN_007e3e5c;
          *(undefined1 *)((int)puVar3 + 10) = 0;
          *puVar4 = 10;
          iVar7 = puVar3[1];
          *(undefined4 *)(iVar7 + 8) = DAT_0088f29c;
          *(undefined2 *)(iVar7 + 0xc) = DAT_0088f2a0;
          puVar5 = (undefined4 *)FUN_0042d2f0(0,0,0,0);
          iVar7 = puVar3[1];
          *(undefined4 *)(iVar7 + 2) = *puVar5;
          *(undefined2 *)(iVar7 + 6) = *(undefined2 *)(puVar5 + 1);
          *puVar3 = &PTR_FUN_007e3e3c;
        }
        uStack_4 = 0xffffffff;
        FUN_00565c70(puVar3);
        FUN_00577eb0();
        *(undefined1 *)(param_1 + 0x10) = 0;
        if (DAT_00bd1500 != 0) {
          FUN_0057be80();
        }
        ExceptionList = pvStack_c;
        return 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 3;
}


