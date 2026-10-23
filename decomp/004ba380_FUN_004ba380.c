// FUN_004ba380 @ 4ba380 size=112

undefined4 __thiscall FUN_004ba380(int *param_1,undefined4 param_2)

{
  char cVar1;
  char extraout_AL;
  char extraout_AL_00;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 uVar3;
  undefined4 unaff_retaddr;
  
  cVar1 = (**(code **)(*(int *)param_1[0x20] + 0x28))(param_2);
  uVar2 = (**(code **)(*(int *)param_1[0x21] + 0x28))(param_2);
  if ((cVar1 == '\0') && ((char)uVar2 == '\0')) {
    return uVar2;
  }
  FUN_004b2d20(param_1,param_2,unaff_retaddr);
  FUN_0042e980();
  uVar3 = extraout_var;
  if ((extraout_AL != '\0') && (*(char *)((int)param_1 + 0x6e) == '\0')) {
    (**(code **)(*param_1 + 0x80))();
    uVar3 = extraout_var_00;
    if (extraout_AL_00 != '\0') {
      (**(code **)(*param_1 + 0x58))();
      uVar3 = extraout_var_01;
    }
  }
  return CONCAT31(uVar3,1);
}


