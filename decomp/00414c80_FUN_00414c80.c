// FUN_00414c80 @ 414c80 size=556

int * __thiscall FUN_00414c80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_30c [64];
  undefined4 local_20c [64];
  undefined4 auStack_10c [60];
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007b9ad4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00425a80(&DAT_0088ebf8);
  local_4 = 0;
  FUN_00583720();
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  iVar6 = *(int *)((int)param_1 + 0x62);
  local_4 = 1;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *param_1 = (int)&PTR_FUN_007e3658;
  param_1[2] = (int)&PTR_LAB_007e3654;
  *(undefined4 *)((int)param_1 + 0x7a) = 0x20;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 0x35e) = *(int *)(iVar6 + 0x35e) + -1;
    if (*(int *)(*(int *)((int)param_1 + 0x62) + 0x35e) == 0) {
      FUN_00416110(*(int *)((int)param_1 + 0x62));
      if (*(undefined4 **)((int)param_1 + 0x62) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)param_1 + 0x62))(1);
      }
      *(undefined4 *)((int)param_1 + 0x62) = 0;
    }
  }
  FUN_004090c0(param_2);
  puVar7 = local_20c;
  puVar8 = auStack_30c;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar6 = FUN_004090f0(DAT_0088ebe4);
  piVar1 = *(int **)(DAT_0088ebe8 + iVar6 * 4);
  do {
    if (piVar1 == (int *)0x0) {
LAB_00414db7:
      pvVar3 = operator_new(0x362);
      local_4._0_1_ = 2;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00415fd0(param_2,0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      *(undefined4 *)((int)param_1 + 0x62) = uVar4;
      FUN_004160a0(uVar4);
LAB_00414e1a:
      (**(code **)(*param_1 + 0x34))(1);
      *(undefined4 *)((int)param_1 + 0x26) = 0x1e;
      *(undefined1 *)((int)param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      uVar4 = FUN_005841b0();
      uVar5 = FUN_005841a0();
      *(undefined4 *)((int)param_1 + 0x3e) = 0;
      *(undefined4 *)((int)param_1 + 0x42) = 0;
      *(undefined4 *)((int)param_1 + 0x46) = uVar5;
      *(undefined4 *)((int)param_1 + 0x4a) = uVar4;
      *(undefined4 *)((int)param_1 + 0x6a) = 0;
      *(undefined4 *)((int)param_1 + 0xe) = 0;
      *(undefined4 *)((int)param_1 + 0x2a) = DAT_00bd1bac;
      DAT_0088ebf4 = DAT_0088ebf4 + 1;
      *(undefined4 *)((int)param_1 + 0x26) = 0;
      *(undefined4 *)((int)param_1 + 0x22) = 0;
      (**(code **)(*param_1 + 0x18))(0,0);
      *(undefined4 *)((int)param_1 + 0x1a) = 0;
      *(undefined4 *)((int)param_1 + 0x1e) = 0;
      (**(code **)(*param_1 + 0x34))(1);
      *(undefined1 *)((int)param_1 + 0x66) = 0;
      *(undefined1 *)((int)param_1 + 0x67) = 0;
      ExceptionList = pvStack_1c;
      return param_1;
    }
    puVar7 = (undefined4 *)(*piVar1 + 0x25e);
    puVar8 = auStack_10c;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    cVar2 = FUN_00409130(auStack_30c);
    if (cVar2 != '\0') {
      if ((piVar1 != (int *)0x0) && (iVar6 = *piVar1, iVar6 != 0)) {
        *(int *)(iVar6 + 0x35e) = *(int *)(iVar6 + 0x35e) + 1;
        *(int *)((int)param_1 + 0x62) = iVar6;
        goto LAB_00414e1a;
      }
      goto LAB_00414db7;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}


