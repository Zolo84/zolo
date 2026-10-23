// FUN_00759730 @ 759730 size=496

undefined4 * __thiscall FUN_00759730(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  undefined4 *local_10;
  short sStack_8;
  undefined2 uStack_6;
  
  local_10 = operator_new(0x12);
  if (local_10 == (undefined4 *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10[1] = 0;
    local_10[2] = 0;
    local_10[3] = 0;
    *(undefined1 *)(local_10 + 4) = 0;
    *local_10 = &PTR_LAB_007e5dd4;
  }
  piVar1 = *(int **)(param_1 + 0x46);
joined_r0x0075976a:
  do {
    do {
      if (piVar1 == (int *)0x0) {
        return local_10;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      FUN_0044df10();
      piVar8 = (int *)FUN_004582e0();
      cVar6 = (**(code **)(*piVar8 + 0x24))();
      FUN_0044df10();
      piVar8 = (int *)FUN_004582f0();
      cVar7 = (**(code **)(*piVar8 + 0x24))();
    } while ((cVar7 != '\0') || (cVar6 != '\0'));
    iVar9 = (**(code **)(*(int *)(iVar2 + 0x3e) + 4))();
    iVar3 = *(int *)(iVar2 + 0x42);
    bVar10 = iVar9 == 0;
    do {
      if (iVar3 == 0) goto LAB_0075983b;
      iVar3 = *(int *)(iVar3 + 10);
      piVar8 = (int *)FUN_004582e0();
      cVar6 = (**(code **)(*piVar8 + 0x24))();
    } while (cVar6 == '\0');
    bVar10 = true;
LAB_0075983b:
    for (iVar3 = *(int *)(iVar2 + 0x30); iVar3 != 0; iVar3 = *(int *)(iVar3 + 10)) {
      piVar8 = (int *)FUN_004582e0();
      cVar6 = (**(code **)(*piVar8 + 0x24))();
      if (cVar6 == '\0') goto joined_r0x0075976a;
    }
    if (bVar10) {
      bVar10 = true;
      piVar8 = *(int **)(param_2 + 0x3654);
      while ((piVar8 != (int *)0x0 && (bVar10))) {
        piVar4 = (int *)piVar8[2];
        iVar3 = *piVar8;
        uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x18) + 0xc);
        sStack_8 = (short)uVar5;
        uStack_6 = (undefined2)((uint)uVar5 >> 0x10);
        piVar8 = piVar4;
        if ((CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0x18) + 0x10),uStack_6) ==
             *(int *)(iVar2 + 0xe)) && (sStack_8 == *(short *)(iVar2 + 0xc))) {
          bVar10 = false;
        }
      }
      if (bVar10) {
        iVar3 = local_10[2];
        piVar8 = operator_new(0xe);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          *piVar8 = iVar2;
          piVar8[1] = iVar3;
          piVar8[2] = 0;
          *(undefined1 *)(piVar8 + 3) = 0;
        }
        iVar2 = local_10[3];
        local_10[2] = piVar8;
        local_10[3] = iVar2 + 1;
        if (iVar2 == 0) {
          local_10[1] = piVar8;
        }
        else {
          *(int **)(iVar3 + 8) = piVar8;
        }
      }
    }
  } while( true );
}


