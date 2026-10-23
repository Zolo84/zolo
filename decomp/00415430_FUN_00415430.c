// FUN_00415430 @ 415430 size=317

void __thiscall FUN_00415430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007b9b6e;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x62);
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar1 + 0x35e) = *(int *)(iVar1 + 0x35e) + -1;
    iVar1 = *(int *)(param_1 + 0x62);
    if (*(int *)(iVar1 + 0x35e) == 0) {
      puVar4 = (undefined4 *)(iVar1 + 0x25e);
      puVar6 = local_10c;
      for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar5 = FUN_004090f0(DAT_0088ebe4);
      piVar2 = (int *)0x0;
      for (piVar3 = *(int **)(DAT_0088ebe8 + iVar5 * 4); piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == iVar1) {
          if (piVar3 != (int *)0x0) {
            if (piVar2 == (int *)0x0) {
              *(int *)(DAT_0088ebe8 + iVar5 * 4) = piVar3[1];
            }
            else {
              piVar2[1] = piVar3[1];
            }
            FUN_00796cd8(piVar3);
            DAT_0088ebe0 = DAT_0088ebe0 + -1;
          }
          break;
        }
        piVar2 = piVar3;
      }
      if (*(undefined4 **)(param_1 + 0x62) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x62))(1);
      }
      *(undefined4 *)(param_1 + 0x62) = 0;
    }
  }
  puVar4 = operator_new(0x362);
  uStack_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x62) = 0;
  }
  else {
    FUN_004010a0(param_2,param_3,param_4,1);
    *(undefined4 *)((int)puVar4 + 0x35e) = 1;
    *puVar4 = &PTR_FUN_007e36a4;
    puVar4[10] = &PTR_LAB_007e36a0;
    *(undefined4 **)(param_1 + 0x62) = puVar4;
  }
  ExceptionList = pvStack_c;
  return;
}


