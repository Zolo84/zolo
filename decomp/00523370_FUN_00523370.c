// FUN_00523370 @ 523370 size=768

void __thiscall FUN_00523370(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  iVar7 = 0;
  iVar6 = 0;
  local_4 = 0;
  iVar4 = 0;
  switch(param_2) {
  case 0:
    cVar3 = (**(code **)(*param_1 + 0x2c))();
    if (cVar3 == '\x01') {
      iVar6 = *(int *)(DAT_00ab27b4 + 0x254 + param_1[3] * 0x4b2);
      iVar4 = DAT_00ab27b4 + param_1[3] * 0x4b2;
      if ((iVar6 != 8) && (iVar6 != 9)) {
        iVar7 = *(int *)(iVar4 + 0x3e0);
        iVar6 = *(int *)(iVar4 + 0x3e4);
        iVar4 = iVar7;
        local_4 = iVar6;
        goto switchD_00523390_caseD_3;
      }
    }
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if ((cVar3 != '\x01') || (*(int *)((int)param_1 + 0x2ae) == 0)) {
      cVar3 = (**(code **)(*param_1 + 0x30))();
      if ((cVar3 == '\x01') &&
         (iVar4 = (**(code **)(*param_1 + 0x18))(), *(int *)(iVar4 + 0x2a6) != 0)) {
        iVar4 = (**(code **)(*param_1 + 0x18))();
        iVar6 = *(int *)(*(int *)(iVar4 + 0x2a6) + 0xc);
        iVar4 = *(int *)(DAT_00ab27b4 + 0x3fa + iVar6 * 0x4b2);
        iVar6 = *(int *)(DAT_00ab27b4 + 0x3fe + iVar6 * 0x4b2);
        iVar7 = (**(code **)(*param_1 + 0x18))();
        iVar5 = *(int *)(*(int *)(iVar7 + 0x2a6) + 0xc);
        iVar7 = *(int *)(DAT_00ab27b4 + 0x3ea + iVar5 * 0x4b2);
        local_4 = *(int *)(DAT_00ab27b4 + 0x3ee + iVar5 * 0x4b2);
        goto switchD_00523390_caseD_3;
      }
      goto LAB_0052360a;
    }
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x2ae) + 0xc);
    break;
  case 1:
  case 2:
    cVar3 = (**(code **)(*param_1 + 0x28))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x2c))();
      if (cVar3 == '\0') {
        iVar4 = *(int *)(DAT_00ab27b4 + 0x3fa + param_1[3] * 0x4b2);
        iVar5 = DAT_00ab27b4 + param_1[3] * 0x4b2;
        if (param_2 == 1) {
          iVar6 = *(int *)(iVar5 + 0x3fe) + 0x10;
          iVar7 = *(int *)(iVar5 + 0x3ea) + -0x18;
          iVar4 = iVar4 + -0x18;
          local_4 = *(int *)(iVar5 + 0x3ee) + 0x10;
        }
        else {
          iVar6 = *(int *)(iVar5 + 0x3fe) + -0x10;
          iVar7 = *(int *)(iVar5 + 0x3ea) + 0x18;
          iVar4 = iVar4 + 0x18;
          local_4 = *(int *)(iVar5 + 0x3ee) + -0x10;
        }
      }
      else {
        iVar4 = *(int *)(DAT_00ab27b4 + 0x3fa + param_1[3] * 0x4b2);
        iVar5 = DAT_00ab27b4 + param_1[3] * 0x4b2;
        if (param_2 == 1) {
          iVar6 = *(int *)(iVar5 + 0x3fe) + 0x10;
          iVar7 = *(int *)(iVar5 + 0x3ea) + -0x20;
          iVar4 = iVar4 + -0x20;
          local_4 = *(int *)(iVar5 + 0x3ee) + 0x10;
        }
        else {
          iVar6 = *(int *)(iVar5 + 0x3fe) + -0x10;
          iVar7 = *(int *)(iVar5 + 0x3ea) + 0x20;
          iVar4 = iVar4 + 0x20;
          local_4 = *(int *)(iVar5 + 0x3ee) + -0x10;
        }
      }
      goto switchD_00523390_caseD_3;
    }
LAB_0052360a:
    iVar5 = param_1[3];
    break;
  default:
    goto switchD_00523390_caseD_3;
  case 4:
    iVar4 = param_1[3];
    piVar1 = (int *)(iVar4 * 0x4b2 + 0x3fa + DAT_00ab27b4);
    cVar3 = (**(code **)(*param_1 + 0x28))();
    iVar5 = *piVar1;
    iVar6 = *(int *)(iVar4 * 0x4b2 + 0x3fe + DAT_00ab27b4) +
            ((-(uint)(cVar3 != '\0') & 0x20) - 0x10);
    iVar2 = param_1[3];
    iVar4 = DAT_00ab27b4 + 0x3ea;
    cVar3 = (**(code **)(*param_1 + 0x28))();
    iVar7 = *(int *)(iVar4 + iVar2 * 0x4b2) + -0x10;
    iVar4 = iVar5 + -0x10;
    local_4 = ((-(uint)(cVar3 != '\0') & 0x20) - 0x10) +
              *(int *)(DAT_00ab27b4 + 0x3ee + iVar2 * 0x4b2);
    goto switchD_00523390_caseD_3;
  }
  iVar6 = *(int *)(DAT_00ab27b4 + 0x3fe + iVar5 * 0x4b2);
  iVar7 = *(int *)(DAT_00ab27b4 + 0x3ea + iVar5 * 0x4b2);
  iVar4 = *(int *)(DAT_00ab27b4 + 0x3fa + iVar5 * 0x4b2);
  local_4 = *(int *)(DAT_00ab27b4 + 0x3ee + iVar5 * 0x4b2);
switchD_00523390_caseD_3:
  FUN_00419440(iVar4,iVar6);
  (**(code **)(**(int **)((int)param_1 + 0x15e) + 0x18))(iVar7,local_4);
  *(int *)((int)param_1 + 0x14e) = local_4;
  return;
}


