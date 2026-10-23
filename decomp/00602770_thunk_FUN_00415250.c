// thunk_FUN_00415250 @ 602770 size=5

void __fastcall thunk_FUN_00415250(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007b9b56;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_007e3658;
  param_1[2] = &PTR_LAB_007e3654;
  uStack_4 = 0;
  DAT_0088ebf4 = DAT_0088ebf4 + -1;
  iVar1 = *(int *)((int)param_1 + 0x62);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x35e) = *(int *)(iVar1 + 0x35e) + -1;
    iVar1 = *(int *)((int)param_1 + 0x62);
    if (*(int *)(iVar1 + 0x35e) == 0) {
      puVar5 = (undefined4 *)(iVar1 + 0x25e);
      puVar6 = auStack_10c;
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar4 = FUN_004090f0(DAT_0088ebe4);
      piVar2 = (int *)0x0;
      for (piVar3 = *(int **)(DAT_0088ebe8 + iVar4 * 4); piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == iVar1) {
          if (piVar3 != (int *)0x0) {
            if (piVar2 == (int *)0x0) {
              *(int *)(DAT_0088ebe8 + iVar4 * 4) = piVar3[1];
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
      if (*(undefined4 **)((int)param_1 + 0x62) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)param_1 + 0x62))(1);
      }
      *(undefined4 *)((int)param_1 + 0x62) = 0;
    }
  }
  if (*(undefined4 **)((int)param_1 + 0x76) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x76))(1);
  }
  uStack_4 = 1;
  FUN_005837f0();
  uStack_4 = 0xffffffff;
  FUN_00425b80();
  ExceptionList = pvStack_c;
  return;
}


