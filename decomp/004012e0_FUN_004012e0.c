// FUN_004012e0 @ 4012e0 size=494

void __thiscall FUN_004012e0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (param_1[1] <= param_2) {
    param_2 = param_1[1] + -1;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  else if (param_1[1] <= param_4) {
    param_4 = param_1[1] + -1;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (param_1[2] <= param_3) {
    param_3 = param_1[2] + -1;
  }
  iVar6 = 0;
  if ((-1 < param_5) && (iVar6 = param_5, param_1[2] <= param_5)) {
    iVar6 = param_1[2] + -1;
  }
  param_5 = iVar6;
  if (param_2 < param_4) {
    iVar6 = param_4 - param_2;
  }
  else {
    iVar6 = param_2 - param_4;
  }
  if (param_3 < param_5) {
    iVar8 = param_5 - param_3;
  }
  else {
    iVar8 = param_3 - param_5;
  }
  iVar7 = param_1[6] / 2;
  iVar2 = (**(code **)(*param_1 + 8))();
  puVar3 = (undefined2 *)(iVar2 + (iVar7 * param_3 + param_2) * 2);
  if (iVar8 == 0) {
    if (param_4 < param_2) {
      puVar3 = puVar3 + -iVar6;
    }
    if (iVar6 != 0) {
      do {
        iVar6 = iVar6 + -1;
        *puVar3 = *(undefined2 *)((int)param_1 + 0x25a);
        puVar3 = puVar3 + 1;
      } while (iVar6 != 0);
      (**(code **)(*param_1 + 0xc))();
      return;
    }
  }
  else {
    if (iVar6 == 0) {
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      do {
        *puVar3 = *(undefined2 *)((int)param_1 + 0x25a);
        puVar3 = puVar3 + iVar7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if (iVar6 < iVar8) {
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      iVar2 = iVar7 + 1;
      if (param_4 <= param_2) {
        iVar2 = iVar7 + -1;
      }
      iVar4 = iVar8 - iVar6;
      iVar5 = iVar6;
      do {
        iVar4 = iVar4 - iVar6;
        iVar1 = iVar7;
        if (iVar4 < 0) {
          iVar4 = iVar4 + iVar8;
          iVar5 = iVar5 + -1;
          iVar1 = iVar2;
        }
        puVar3 = puVar3 + iVar1;
        *puVar3 = *(undefined2 *)((int)param_1 + 0x25a);
      } while (iVar5 != 0);
    }
    else {
      iVar2 = ((param_4 <= param_2) - 1 & 2) - 1;
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      iVar5 = iVar6 + -1;
      iVar4 = iVar6 - iVar8;
      if (iVar5 != 0) {
        do {
          iVar4 = iVar4 - iVar8;
          iVar1 = iVar2;
          if (iVar4 < 0) {
            iVar4 = iVar4 + iVar6;
            iVar1 = iVar2 + iVar7;
          }
          puVar3 = puVar3 + iVar1;
          iVar5 = iVar5 + -1;
          *puVar3 = *(undefined2 *)((int)param_1 + 0x25a);
        } while (iVar5 != 0);
        (**(code **)(*param_1 + 0xc))();
        return;
      }
    }
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


