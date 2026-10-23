// FUN_005230e0 @ 5230e0 size=362

undefined1 __thiscall FUN_005230e0(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(param_1[0x47] + 4))();
  if (iVar3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x3c))(param_2);
    return uVar1;
  }
  iVar3 = FUN_004e9370(param_2);
  cVar2 = (**(code **)(*param_1 + 0x2c))();
  if (cVar2 == '\x01') {
    if ((*(int *)(iVar3 + 0x254) == 8) || (*(int *)(iVar3 + 0x254) == 9)) {
      return true;
    }
    if (((*(char *)(iVar3 + 0x470) == '\x01') && (*(int *)(iVar3 + 0x3d8) == param_1[0x92])) &&
       (*(int *)(iVar3 + 0x46a) != 0)) {
      return true;
    }
    cVar2 = FUN_005216c0(iVar3);
    if (cVar2 != '\0') {
      return true;
    }
    if ((*(int *)(iVar3 + 0x46a) != 0) &&
       (cVar2 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar2 != '\0')) {
      return true;
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x30))();
    if (cVar2 == '\x01') {
      cVar2 = FUN_005216c0(iVar3);
      return cVar2 != '\0';
    }
    if ((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) {
      if (param_1[3] == 0) {
        iVar4 = (**(code **)(*param_1 + 0x10))();
        if (*(int *)(iVar4 + 0x2b2) != 0) {
          return false;
        }
        if (param_1[3] == 0) {
          (**(code **)(*param_1 + 0x10))();
          uVar1 = FUN_00517740(iVar3);
          return uVar1;
        }
      }
      cVar2 = FUN_00522a60(iVar3);
      if (cVar2 == '\x01') {
        return true;
      }
      if ((*(int *)(iVar3 + 0x3d8) != 0) &&
         (cVar2 = FUN_0044b280(*(undefined4 *)(param_1[0x92] + 6)), cVar2 != '\0')) {
        return true;
      }
    }
  }
  return false;
}


