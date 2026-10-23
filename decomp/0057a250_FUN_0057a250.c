// FUN_0057a250 @ 57a250 size=520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057a250(int param_1,int param_2,int param_3,char param_4)

{
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  tagPOINT *ptStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  tagPOINT *ptStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uVar1;
  int iVar2;
  tagPOINT local_28;
  undefined *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((DAT_00bd0528 & 1) == 0) {
    DAT_00bd0528 = DAT_00bd0528 | 1;
    _DAT_00bd0530 = (int *)0x0;
    _DAT_00bd0534 = (tagPOINT *)0x0;
    _DAT_00bd0538 = 0;
    _DAT_00bd053c = 0;
    FUN_007a63e8();
  }
  if (*(char *)(param_1 + 0x532) == '\0') {
    piStack_40 = (int *)0x57a2b1;
    GetCursorPos(&local_28);
    if (local_28.x < 0) {
      local_28.x = 0;
    }
    if (local_28.y < 0) {
      local_28.y = 0;
    }
    local_20 = (undefined *)0x0;
    local_1c = 0;
    local_18 = *(int *)(param_2 + 4);
    local_14 = *(int *)(param_2 + 8);
    if (*(int *)(param_1 + 8) < local_18 + local_28.x) {
      local_18 = *(int *)(param_1 + 8) - local_28.x;
    }
    if (*(int *)(param_1 + 4) < local_14 + local_28.y) {
      local_14 = *(int *)(param_1 + 4) - local_28.y;
    }
    if (param_4 == '\0') {
      piStack_50 = *(int **)(param_1 + 0x22);
      iVar2 = 0x10;
      piStack_40 = (int *)&DAT_00bd0530;
      uStack_44 = *(undefined4 *)(param_3 + 0x2c);
      uStack_48 = DAT_00bd0548;
      ptStack_4c = DAT_00bd0544;
      (**(code **)(*piStack_50 + 0x1c))();
      local_28.x = (int)piStack_40 + unaff_EBP;
      local_20 = (undefined *)((int)piStack_40 + unaff_EDI);
      uStack_54 = 0x10;
      local_1c = unaff_ESI + iVar2;
      local_28.y = unaff_EBX + iVar2;
      ptStack_58 = &local_28;
      (**(code **)(**(int **)(local_10 + 0x2c) + 0x1c))
                (*(int **)(local_10 + 0x2c),0,0,*(undefined4 *)(param_1 + 0x22));
      (**(code **)(**(int **)(param_1 + 0x22) + 0x1c))
                (*(int **)(param_1 + 0x22),ptStack_58,0x10,*(undefined4 *)(param_2 + 0x2c),
                 &piStack_50,0x11);
    }
    else {
      local_8 = local_18 + local_28.x;
      *(undefined1 *)(param_1 + 0x532) = 1;
      piStack_50 = *(int **)(param_3 + 0x2c);
      piStack_40 = &local_10;
      uVar1 = 0x10;
      uStack_44 = *(undefined4 *)(param_1 + 0x1e);
      local_4 = local_14 + local_28.y;
      uStack_48 = 0;
      ptStack_4c = (tagPOINT *)0x0;
      local_10 = local_28.x;
      local_c = local_28.y;
      (**(code **)(*piStack_50 + 0x1c))();
      ptStack_58 = (tagPOINT *)&stack0xffffffc8;
      uStack_54 = 0x11;
      (**(code **)(**(int **)(param_1 + 0x1e) + 0x1c))
                (*(int **)(param_1 + 0x1e),piStack_40,uVar1,*(undefined4 *)(param_2 + 0x2c));
    }
    DAT_00bd0544 = ptStack_58;
    DAT_00bd0548 = uStack_54;
    _DAT_00bd0530 = piStack_50;
    _DAT_00bd0534 = ptStack_4c;
    _DAT_00bd0538 = uStack_48;
    _DAT_00bd053c = uStack_44;
  }
  return;
}


