// FUN_00798613 @ 798613 size=286

short __fastcall FUN_00798613(int param_1)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  short local_6;
  
  uVar1 = **(uint **)(param_1 + 0x1c);
  if ((uVar1 == 0) || (uVar1 + **(int **)(param_1 + 0x2c) * 2 <= uVar1)) {
    if (*(int *)(param_1 + 0x50) == 0) {
LAB_00798649:
      local_6 = -1;
    }
    else if (*(int *)(param_1 + 0x38) == 0) {
      local_6 = FUN_007a9fae(*(int *)(param_1 + 0x50));
      if (local_6 == -1) {
        local_6 = -1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
      FUN_00742780(0,DAT_007f33d8);
      do {
        do {
          iVar4 = FUN_007a81b4(*(undefined4 *)(param_1 + 0x50));
          if (iVar4 == -1) goto LAB_00798649;
          FUN_00797965(1,iVar4);
          iVar4 = *(int *)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
          FUN_00797b07();
          iVar2 = *(int *)(param_1 + 0x44);
          local_c = *(int *)(iVar4 + 4);
          FUN_00797b07();
          iVar4 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                            (param_1 + 0x40,*(undefined4 *)(iVar2 + 4),
                             -(uint)(local_c != 0) & *(int *)(iVar4 + 8) + local_c,local_14,&local_6
                             ,&stack0xfffffffc,local_10);
          if (iVar4 == 0) {
            return local_6;
          }
        } while (iVar4 == 1);
        if (iVar4 != 3) goto LAB_00798649;
        iVar4 = *(int *)(param_1 + 0x44);
      } while (*(uint *)(iVar4 + 8) < 2);
      FUN_00797b07();
      FUN_007a71b0(&local_6,*(undefined4 *)(iVar4 + 4),2);
    }
  }
  else {
    psVar3 = (short *)Gninc();
    local_6 = *psVar3;
  }
  return local_6;
}


