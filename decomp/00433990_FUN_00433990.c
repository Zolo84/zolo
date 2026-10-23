// FUN_00433990 @ 433990 size=1121

undefined4 __thiscall FUN_00433990(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBP;
  undefined4 local_c;
  undefined1 local_8 [8];
  
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  *(undefined1 *)((int)param_1 + 0x9d) = 0;
  local_c = 0;
  if (((*(char *)((int)param_1 + 0x86) != '\0') ||
      (piVar2 = (int *)(**(code **)(*param_1 + 0x28))(local_8), *piVar2 < 0)) ||
     (iVar3 = (**(code **)(*param_1 + 0x28))(local_8), *(int *)(iVar3 + 4) < 0)) {
    iVar3 = (**(code **)(*param_2 + 8))();
    if (((iVar3 != 0xe) && (iVar3 != 0x11)) && (iVar3 != 0x14)) {
      return 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x20))
                      (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
joined_r0x00433dd9:
    if (cVar1 == '\0') {
      return 0;
    }
    goto LAB_00433ddb;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*param_2 + 8))();
  switch(uVar4) {
  case 0xd:
    cVar1 = (**(code **)(*param_1 + 0x20))
                      (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x2a) = 0;
      return unaff_EBP;
    }
    if ((*(int *)((int)param_1 + 0x82) == 0) &&
       (((DAT_00d13360 == 0 || (*(char *)(DAT_00d13360 + 0xc) != '\0')) &&
        ((**(code **)(*param_1 + 0x5c))(), DAT_00d13360 != 0)))) {
      *(undefined1 *)(DAT_00d13360 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + 0x2a) = 1;
    return unaff_EBP;
  case 0xe:
    cVar1 = (**(code **)(*param_1 + 0x20))
                      (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)((int)param_1 + 0x82) == 0) {
      (**(code **)(*param_1 + 0x48))();
      *(undefined1 *)((int)param_1 + 0x9d) = 0;
      *(undefined1 *)((int)param_1 + 0x96) = 1;
    }
    else {
      if (*(int *)((int)param_1 + 0x82) != 1) {
        return 0;
      }
      (**(code **)(*param_1 + 0x4c))();
      *(undefined1 *)((int)param_1 + 0x9d) = 0;
      *(undefined1 *)((int)param_1 + 0x96) = 1;
    }
    goto LAB_00433ddb;
  case 0x11:
    cVar1 = (**(code **)(*param_1 + 0x20))
                      (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
    if (cVar1 != '\0') {
      (**(code **)(*DAT_00bd0e18 + 0x20))(0x19);
      local_c = 3;
      if (*(int *)((int)param_1 + 0x82) == 0) {
        if ((-1 < param_1[0x26]) && ((char)param_1[0x27] == '\0')) {
          (**(code **)(*DAT_00bd0e18 + 0x20))(param_1[0x26]);
        }
        *(undefined1 *)(param_1 + 0x27) = 1;
        *(undefined4 *)((int)param_1 + 0x82) = 1;
        (**(code **)(*param_1 + 0x58))();
        *(undefined1 *)((int)param_1 + 0x9d) = 1;
        iVar3 = *(int *)(DAT_00893530 + 0x20);
        param_1[0x29] = 4;
        *(int *)((int)param_1 + 0x9e) = iVar3 + 8;
        return 3;
      }
      if (*(int *)((int)param_1 + 0x82) == 1) {
        if ((-1 < param_1[0x26]) && ((char)param_1[0x27] == '\x01')) {
          (**(code **)(*DAT_00bd0e18 + 0x20))(param_1[0x26]);
        }
        *(undefined1 *)(param_1 + 0x27) = 0;
        *(undefined4 *)((int)param_1 + 0x82) = 0;
        (**(code **)(*param_1 + 0x54))();
        *(undefined1 *)(param_1 + 0x27) = 0;
        return 3;
      }
    }
    break;
  case 0x14:
    cVar1 = (**(code **)(*param_1 + 0x20))
                      (*(undefined4 *)(param_2[1] + 0x16),*(undefined4 *)(param_2[1] + 0x1a));
    goto joined_r0x00433dd9;
  case 0x16:
    if (*(int *)(param_2[1] + 0xe) != param_1[0x22]) {
      return 0;
    }
    (**(code **)(*DAT_00bd0e18 + 0x20))(0x19);
    if (*(int *)((int)param_1 + 0x82) == 0) {
      *(undefined4 *)((int)param_1 + 0x82) = 1;
      (**(code **)(*param_1 + 0x58))();
      (**(code **)(*param_1 + 0x4c))();
      *(undefined1 *)((int)param_1 + 0x96) = 1;
      *(undefined1 *)((int)param_1 + 0x9d) = 1;
    }
    else {
      if (*(int *)((int)param_1 + 0x82) != 1) {
        return 0;
      }
      *(undefined4 *)((int)param_1 + 0x82) = 0;
      (**(code **)(*param_1 + 0x54))();
      *(undefined1 *)(param_1 + 0x27) = 0;
      (**(code **)(*param_1 + 0x48))();
      *(undefined1 *)((int)param_1 + 0x96) = 1;
    }
LAB_00433ddb:
    local_c = 3;
    break;
  case 0x1b:
    if (*(int *)((int)param_1 + 0x82) == 1) {
      if ((*(char *)((int)param_1 + 0xa2) == '\0') || (cVar1 = FUN_00581e70(), cVar1 != '\0')) {
        if (*(int *)((int)param_1 + 0x9e) < *(int *)(DAT_00893530 + 0x20)) {
          *(undefined1 *)((int)param_1 + 0x9d) = 1;
          iVar3 = param_1[0x29] + -2;
          *(int *)((int)param_1 + 0x9e) = *(int *)(DAT_00893530 + 0x20) + param_1[0x29];
          param_1[0x29] = iVar3;
          if (iVar3 < 2) {
            param_1[0x29] = 2;
          }
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x82) = 0;
        (**(code **)(*param_1 + 0x54))();
        *(undefined1 *)(param_1 + 0x27) = 0;
        (**(code **)(*param_1 + 0x48))();
      }
    }
    puVar5 = (undefined4 *)FUN_00581e60();
    cVar1 = (**(code **)(*param_1 + 0x20))(*puVar5,puVar5[1]);
    iVar3 = *(int *)((int)param_1 + 0x82);
    if (cVar1 != '\0') {
      if ((iVar3 == 0) &&
         (((DAT_00d13360 == 0 || (*(char *)(DAT_00d13360 + 0xc) != '\0')) &&
          ((**(code **)(*param_1 + 0x5c))(), DAT_00d13360 != 0)))) {
        *(undefined1 *)(DAT_00d13360 + 0xc) = 0;
      }
      return 0;
    }
    if (iVar3 == 0) {
      *(undefined4 *)((int)param_1 + 0x82) = 0;
      (**(code **)(*param_1 + 0x54))();
      *(undefined1 *)(param_1 + 0x27) = 0;
      return 0;
    }
    if (iVar3 == 1) {
      *(undefined4 *)((int)param_1 + 0x82) = 1;
      (**(code **)(*param_1 + 0x58))();
      return 0;
    }
  }
  return local_c;
}


