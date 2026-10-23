// FUN_00415d40 @ 415d40 size=395

undefined4 __fastcall FUN_00415d40(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007b9bc9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar4 = (char *)FUN_007a8d6d(*(int *)(param_1 + 0x62) + 0x38);
  if (*pcVar4 == '\0') {
    FUN_007a77fa(pcVar4);
    ExceptionList = local_c;
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x62);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x35e) = *(int *)(iVar1 + 0x35e) + -1;
    iVar1 = *(int *)(param_1 + 0x62);
    if (*(int *)(iVar1 + 0x35e) == 0) {
      puVar5 = (undefined4 *)(iVar1 + 0x25e);
      puVar7 = local_10c;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      iVar6 = FUN_004090f0(DAT_0088ebe4);
      piVar2 = (int *)0x0;
      for (piVar3 = *(int **)(DAT_0088ebe8 + iVar6 * 4); piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == iVar1) {
          if (piVar3 != (int *)0x0) {
            if (piVar2 == (int *)0x0) {
              *(int *)(DAT_0088ebe8 + iVar6 * 4) = piVar3[1];
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
  puVar5 = operator_new(0x362);
  uStack_4 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00401060(pcVar4,1,0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_004090c0(pcVar4);
    *(undefined4 *)((int)puVar5 + 0x35e) = 1;
    *puVar5 = &PTR_FUN_007e36a4;
    puVar5[10] = &PTR_LAB_007e36a0;
  }
  *(undefined4 **)(param_1 + 0x62) = puVar5;
  FUN_007a77fa(pcVar4);
  ExceptionList = local_c;
  return 1;
}


