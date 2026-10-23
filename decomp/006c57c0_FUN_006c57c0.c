// FUN_006c57c0 @ 6c57c0 size=560

undefined4 __thiscall FUN_006c57c0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007d84c8;
  local_c = ExceptionList;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  do {
    while (iVar2 = FUN_00535490(), iVar2 != 1) {
      if (iVar2 == 2) {
        while (local_1c != (int *)0x0) {
          piVar5 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar5;
        }
        ExceptionList = local_c;
        return 0;
      }
      piVar5 = (int *)FUN_00534391();
      if (*piVar5 == 4) {
        FUN_005343dc();
        while (local_1c != (int *)0x0) {
          piVar5 = (int *)local_1c[2];
          FUN_00796cd8(local_1c);
          local_1c = piVar5;
        }
        ExceptionList = local_c;
        return 0;
      }
    }
    piVar5 = local_1c;
    piVar3 = local_18;
    if (DAT_00dc4b5e != '\0') {
      iVar2 = param_2[1];
      for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        cVar1 = (*(code *)PTR_FUN_007e3798)(*piVar5,iVar2);
        if (cVar1 != '\0') {
          if (piVar5 != (int *)0x0) {
            FUN_00429a00(s_ERROR___Duplicated_section___s__i_0082f288,param_2 + 2,*param_2 + 0x216,
                         *(int *)(*param_2 + 0x212) + 1);
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
          }
          break;
        }
      }
      iVar2 = param_2[1];
      piVar3 = operator_new(0xe);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = iVar2;
        piVar3[1] = (int)local_18;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
      }
      iVar2 = local_14 + 1;
      bVar6 = local_14 != 0;
      piVar5 = piVar3;
      local_14 = iVar2;
      if (bVar6) {
        local_18[2] = (int)piVar3;
        piVar5 = local_1c;
      }
    }
    local_18 = piVar3;
    local_1c = piVar5;
    piVar5 = param_2 + 1;
    iVar2 = FUN_004fdae0(piVar5);
    if (iVar2 == 0x8c) {
      iVar2 = FUN_004fe160(piVar5);
      if (iVar2 == 0x8c) {
        if (DAT_00dc4b5e != '\0') {
          FUN_00429a00(s_ERROR___Unknown_type___s__in_upg_0086b440,param_2 + 2,*param_2 + 0x216,
                       *(int *)(*param_2 + 0x212) + 1);
          DAT_00dc4b60 = DAT_00dc4b60 + 1;
        }
      }
      else {
        iVar2 = param_2[0x103];
        iVar4 = FUN_004fe160(piVar5);
        *(bool *)(iVar4 + 4 + param_1) = iVar2 == 0x111;
      }
    }
    else {
      iVar2 = param_2[0x103];
      iVar4 = FUN_004fdae0(piVar5);
      *(bool *)(iVar4 + 0x90 + param_1) = iVar2 == 0x111;
    }
  } while( true );
}


