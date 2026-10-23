// FUN_00538690 @ 538690 size=462

undefined4 __fastcall FUN_00538690(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c28eb;
  local_c = ExceptionList;
  if (DAT_00d0ca90 == 0) {
    iVar1 = 1;
    ExceptionList = &local_c;
    do {
      FUN_005343dc();
      piVar3 = (int *)FUN_00534391();
      if (*piVar3 == 4) {
        iVar1 = iVar1 + -1;
      }
      piVar3 = (int *)FUN_00534391();
      if (*piVar3 == 3) {
        iVar1 = iVar1 + 1;
      }
    } while (iVar1 != 0);
  }
  else {
    ExceptionList = &local_c;
    FUN_0064eb30();
    FUN_00592e70();
    do {
      while (iVar1 = FUN_00535490(), iVar1 == 1) {
        iVar1 = param_1[1];
        if (iVar1 == 0xe8) {
          uVar4 = 0x28;
          FUN_0064eb30(0x28);
          piVar3 = (int *)FUN_00594290(uVar4);
          (**(code **)(*piVar3 + 8))(param_1);
        }
        else {
          if ((iVar1 < 0x144) || (0x146 < iVar1)) {
            FUN_007a630a(&DAT_00bce1e8,s_ERROR_____s____s__s__s__Line_____00850bdc,
                         s_unknown_EYR_page_00850f1c,param_1 + 2,param_1 + 0x83,param_1 + 0x104,
                         *(int *)(*param_1 + 0x212) + 1,*param_1 + 0x216);
            if (DAT_00dc4b5f != '\0') {
              FUN_00429a50(&DAT_00bce1e8);
            }
            DAT_00dc4b60 = DAT_00dc4b60 + 1;
            FUN_00429a00(&DAT_00850bd4,&DAT_00bce1e8);
            if (DAT_00dc4b5e == '\0') {
              FUN_007a64d3(0);
            }
            ExceptionList = local_c;
            return 0xfffffffe;
          }
          pvVar2 = operator_new(0x13a);
          local_4 = 0;
          if (pvVar2 == (void *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)FUN_0058e080(&DAT_0088ebf8);
          }
          local_4 = 0xffffffff;
          (**(code **)(*piVar3 + 8))(param_1);
          if (piVar3 != (int *)0x0) {
            (**(code **)*piVar3)(1);
          }
        }
      }
      if (iVar1 == 2) {
        ExceptionList = local_c;
        return 0xfffffffe;
      }
      piVar3 = (int *)FUN_00534391();
    } while (*piVar3 != 4);
  }
  FUN_005343dc();
  ExceptionList = local_c;
  return 0;
}


