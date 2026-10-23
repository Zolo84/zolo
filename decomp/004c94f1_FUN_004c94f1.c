// FUN_004c94f1 @ 4c94f1 size=410

void __thiscall FUN_004c94f1(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int local_10;
  
  iVar1 = *(int *)(param_2 + 0x3d8);
  (**(code **)(*param_1 + 0xc))(param_2);
  *(int **)(param_2 + 0x482) = param_1;
  iVar2 = *(int *)(param_2 + 0x290);
  local_10 = 0;
  do {
    if (iVar2 <= local_10) {
      FUN_004c968b();
      return;
    }
    iVar4 = FUN_004e9370(*(undefined4 *)(*(int *)(param_2 + 0x298) + local_10 * 0xc));
    if ((*(int *)(iVar4 + 0x3d8) != iVar1) || (*(int *)(iVar4 + 0x482) != 0)) goto LAB_004c9536;
    if ((param_1[0x13] == 2) && (0x1c5 < *(int *)(iVar4 + 0x288))) {
      if (*(int *)(param_2 + 0x28c) != *(int *)(iVar4 + 0x28c)) goto LAB_004c95ef;
LAB_004c966c:
      FUN_004c94f1(iVar4);
    }
    else {
LAB_004c95ef:
      if ((param_1[0x13] == 1) && (*(int *)(iVar4 + 0x288) == 0x1c5)) goto LAB_004c966c;
      if (param_1[0x13] == 0) {
        if (*(int *)(iVar4 + 0x254) == 8) {
          bVar3 = false;
        }
        else if (*(int *)(iVar4 + 0x254) == 9) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_004c966c;
      }
    }
LAB_004c9536:
    local_10 = local_10 + 1;
  } while( true );
}


