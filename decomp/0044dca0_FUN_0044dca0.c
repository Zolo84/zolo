// FUN_0044dca0 @ 44dca0 size=621

undefined4 * __fastcall FUN_0044dca0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *local_18;
  
  local_18 = operator_new(0x12);
  if (local_18 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    *(undefined1 *)(local_18 + 4) = 0;
    *local_18 = &PTR_LAB_007e5dd4;
  }
  iVar1 = *(int *)(param_1 + 0x360c);
joined_r0x0044dcec:
  do {
    do {
      do {
        do {
          do {
            if (iVar1 == 0) {
              return local_18;
            }
            iVar1 = *(int *)(iVar1 + 10);
            FUN_00446d10();
            iVar4 = FUN_00428460();
          } while ((iVar4 == 0) || (iVar4 + -8 == 0));
          FUN_0044df10();
          piVar5 = (int *)FUN_004582f0();
          cVar3 = (**(code **)(*piVar5 + 0x24))();
        } while (cVar3 != '\0');
        FUN_0044df10();
        piVar5 = (int *)FUN_004582d0();
        cVar3 = (**(code **)(*piVar5 + 0x24))();
      } while (cVar3 != '\0');
      FUN_0044df10();
      piVar5 = (int *)FUN_004582e0();
      cVar3 = (**(code **)(*piVar5 + 0x24))();
    } while (cVar3 != '\0');
    iVar2 = *(int *)(iVar4 + 0x28);
    do {
      if (iVar2 == 0) {
        iVar6 = (**(code **)(*(int *)(iVar4 + 0x36) + 4))();
        iVar2 = *(int *)(iVar4 + 0x3a);
        goto joined_r0x0044de43;
      }
      iVar2 = *(int *)(iVar2 + 10);
      piVar5 = (int *)FUN_004582e0();
      cVar3 = (**(code **)(*piVar5 + 0x24))();
      if (cVar3 == '\0') break;
      piVar5 = (int *)FUN_004582f0();
      cVar3 = (**(code **)(*piVar5 + 0x24))();
    } while (cVar3 == '\0');
  } while( true );
  while( true ) {
    piVar5 = (int *)FUN_004582e0();
    cVar3 = (**(code **)(*piVar5 + 0x24))();
    if (cVar3 != '\0') break;
joined_r0x0044de43:
    do {
      if (iVar2 == 0) {
        if (iVar6 != 0) goto joined_r0x0044dcec;
        goto LAB_0044deb0;
      }
      iVar2 = *(int *)(iVar2 + 10);
      piVar5 = (int *)FUN_004582f0();
      cVar3 = (**(code **)(*piVar5 + 0x24))();
    } while (cVar3 != '\0');
  }
LAB_0044deb0:
  iVar2 = local_18[2];
  piVar5 = operator_new(0xe);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = iVar4 + -8;
    piVar5[1] = iVar2;
    piVar5[2] = 0;
    *(undefined1 *)(piVar5 + 3) = 0;
  }
  iVar4 = local_18[3];
  local_18[2] = piVar5;
  local_18[3] = iVar4 + 1;
  if (iVar4 == 0) {
    local_18[1] = piVar5;
  }
  else {
    *(int **)(iVar2 + 8) = piVar5;
  }
  goto joined_r0x0044dcec;
}


