// FUN_006acba0 @ 6acba0 size=265

void __fastcall FUN_006acba0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5d7b;
  pvStack_c = ExceptionList;
  local_18 = &DAT_0089cad8;
  ExceptionList = &pvStack_c;
  do {
    if (*local_18 != 0) {
      for (puVar1 = *(undefined4 **)(*local_18 + 0x4508); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[2]) {
        piVar4 = (int *)*puVar1;
        cVar2 = (**(code **)(*piVar4 + 0x30))();
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*piVar4 + 0x28))();
          if (cVar2 != '\0') {
            uVar5 = FUN_00525c20();
            FUN_006ac630(uVar5);
          }
        }
        else {
          cVar2 = FUN_004f0aa0();
          if (cVar2 == '\0') {
            piVar3 = operator_new(0x4a);
            uStack_4 = 0;
            piVar4 = (int *)0x0;
            if (piVar3 != (int *)0x0) {
              piVar4 = (int *)FUN_00525c20();
              piVar7 = piVar3;
              for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
                *piVar7 = *piVar4;
                piVar4 = piVar4 + 1;
                piVar7 = piVar7 + 1;
              }
              *(short *)piVar7 = (short)*piVar4;
              piVar4 = piVar3;
            }
            uStack_4 = 0xffffffff;
            (**(code **)(*(int *)(param_1 + *piVar4 * 0x5c) + 0x34))(piVar4);
          }
        }
      }
    }
    local_18 = local_18 + 1;
  } while ((int)local_18 < 0x89d038);
  ExceptionList = pvStack_c;
  return;
}


