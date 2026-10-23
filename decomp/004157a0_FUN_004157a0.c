// FUN_004157a0 @ 4157a0 size=588

undefined4 __thiscall FUN_004157a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_40c [64];
  undefined4 auStack_30c [64];
  undefined4 local_20c [64];
  undefined4 auStack_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007b9b99;
  pvStack_c = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x62);
  ExceptionList = &pvStack_c;
  if (iVar7 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar7 + 0x35e) = *(int *)(iVar7 + 0x35e) + -1;
    iVar7 = *(int *)(param_1 + 0x62);
    if (*(int *)(iVar7 + 0x35e) == 0) {
      puVar8 = (undefined4 *)(iVar7 + 0x25e);
      puVar5 = local_40c;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar6 = FUN_004090f0(DAT_0088ebe4);
      piVar1 = (int *)0x0;
      for (piVar3 = *(int **)(DAT_0088ebe8 + iVar6 * 4); piVar3 != (int *)0x0;
          piVar3 = (int *)piVar3[1]) {
        if (*piVar3 == iVar7) {
          if (piVar3 != (int *)0x0) {
            if (piVar1 == (int *)0x0) {
              *(int *)(DAT_0088ebe8 + iVar6 * 4) = piVar3[1];
            }
            else {
              piVar1[1] = piVar3[1];
            }
            FUN_00796cd8(piVar3);
            DAT_0088ebe0 = DAT_0088ebe0 + -1;
          }
          break;
        }
        piVar1 = piVar3;
      }
      if (*(undefined4 **)(param_1 + 0x62) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x62))(1);
      }
      *(undefined4 *)(param_1 + 0x62) = 0;
    }
  }
  FUN_004090c0(param_2);
  puVar8 = local_20c;
  puVar5 = local_40c;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar7 = FUN_004090f0(DAT_0088ebe4);
  piVar1 = *(int **)(DAT_0088ebe8 + iVar7 * 4);
  do {
    if (piVar1 == (int *)0x0) {
LAB_004158df:
      puVar5 = operator_new(0x362);
      uStack_4 = 0;
      puVar8 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00401060(param_2,1,0);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_004090c0(param_2);
        *(undefined4 *)((int)puVar5 + 0x35e) = 1;
        *puVar5 = &PTR_FUN_007e36a4;
        puVar5[10] = &PTR_LAB_007e36a0;
        puVar8 = puVar5;
      }
      uStack_4 = 0xffffffff;
      *(undefined4 **)(param_1 + 0x62) = puVar8;
      puVar5 = (undefined4 *)((int)puVar8 + 0x25e);
      puVar9 = auStack_10c;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      iVar7 = FUN_004090f0(DAT_0088ebe4);
      puVar5 = operator_new(8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        uVar2 = *(undefined4 *)(DAT_0088ebe8 + iVar7 * 4);
        *puVar5 = puVar8;
        puVar5[1] = uVar2;
      }
      *(undefined4 **)(DAT_0088ebe8 + iVar7 * 4) = puVar5;
      DAT_0088ebe0 = DAT_0088ebe0 + 1;
      ExceptionList = pvStack_c;
      return 1;
    }
    puVar8 = (undefined4 *)(*piVar1 + 0x25e);
    puVar5 = auStack_30c;
    for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
    cVar4 = FUN_00409130(local_40c);
    if (cVar4 != '\0') {
      if ((piVar1 != (int *)0x0) && (iVar7 = *piVar1, iVar7 != 0)) {
        *(int *)(iVar7 + 0x35e) = *(int *)(iVar7 + 0x35e) + 1;
        *(int *)(param_1 + 0x62) = iVar7;
        ExceptionList = pvStack_c;
        return 1;
      }
      goto LAB_004158df;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}


