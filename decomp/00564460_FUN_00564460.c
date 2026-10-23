// FUN_00564460 @ 564460 size=436

undefined4 __thiscall FUN_00564460(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c6978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  local_1c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = 0;
  local_4 = 0;
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
    if (param_2[1] == 0x10a) {
      uVar4 = FUN_0042b6c9(param_2 + 0x104);
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
    else if (param_2[1] == 0x1c2) {
      FUN_00424e00(param_2);
    }
  } while( true );
}


