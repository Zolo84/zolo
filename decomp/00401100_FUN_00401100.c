// FUN_00401100 @ 401100 size=478

void __thiscall
FUN_00401100(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint local_8;
  
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
    local_8 = param_4 - param_2;
  }
  else {
    local_8 = param_2 - param_4;
  }
  if (param_3 < param_5) {
    iVar6 = param_5 - param_3;
  }
  else {
    iVar6 = param_3 - param_5;
  }
  iVar7 = param_1[6];
  iVar2 = (**(code **)(*param_1 + 8))();
  puVar8 = (undefined4 *)(iVar7 * param_3 + param_2 + iVar2);
  if (iVar6 != 0) {
    if (local_8 == 0) {
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      do {
        *(undefined1 *)puVar8 = param_6;
        puVar8 = (undefined4 *)((int)puVar8 + iVar7);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      (**(code **)(*param_1 + 0xc))();
      return;
    }
    if ((int)local_8 < iVar6) {
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      iVar2 = iVar7 + 1;
      if (param_4 <= param_2) {
        iVar2 = iVar7 + -1;
      }
      iVar3 = iVar6 - local_8;
      uVar4 = local_8;
      do {
        iVar3 = iVar3 - local_8;
        iVar5 = iVar7;
        if (iVar3 < 0) {
          iVar3 = iVar3 + iVar6;
          uVar4 = uVar4 - 1;
          iVar5 = iVar2;
        }
        puVar8 = (undefined4 *)((int)puVar8 + iVar5);
        *(undefined1 *)puVar8 = param_6;
      } while (uVar4 != 0);
    }
    else {
      iVar2 = ((param_4 <= param_2) - 1 & 2) - 1;
      if (param_5 <= param_3) {
        iVar7 = -iVar7;
      }
      iVar3 = local_8 - iVar6;
      iVar5 = local_8 - 1;
      if (iVar5 != 0) {
        do {
          iVar3 = iVar3 - iVar6;
          iVar1 = iVar2;
          if (iVar3 < 0) {
            iVar3 = iVar3 + local_8;
            iVar1 = iVar2 + iVar7;
          }
          puVar8 = (undefined4 *)((int)puVar8 + iVar1);
          iVar5 = iVar5 + -1;
          *(undefined1 *)puVar8 = param_6;
        } while (iVar5 != 0);
        (**(code **)(*param_1 + 0xc))();
        return;
      }
    }
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  if (param_4 < param_2) {
    puVar8 = (undefined4 *)((int)puVar8 - local_8);
  }
  if (local_8 != 0) {
    for (uVar4 = local_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
      puVar8 = puVar8 + 1;
    }
    for (local_8 = local_8 & 3; local_8 != 0; local_8 = local_8 - 1) {
      *(undefined1 *)puVar8 = param_6;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}


