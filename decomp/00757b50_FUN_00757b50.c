// FUN_00757b50 @ 757b50 size=112

void __fastcall FUN_00757b50(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      (**(code **)(*(int *)(param_1 + 4) + 0x1c))(piVar3);
      uStack_8 = *(undefined4 *)(iVar1 + 0xc);
      uStack_4 = *(undefined4 *)(iVar1 + 0x10);
      iVar2 = *(int *)(iVar1 + 0x14);
      iVar4 = FUN_0074ba10(&uStack_8);
      if (iVar4 != 0) {
        if ((int *)(&DAT_00d4c350)[iVar2] != (int *)0x0) {
          (**(code **)(*(int *)(&DAT_00d4c350)[iVar2] + 4))(iVar4,iVar1 + 0x18);
        }
        FUN_007a77fa(iVar1);
      }
      piVar3 = *(int **)(param_1 + 8);
    } while (piVar3 != (int *)0x0);
  }
  return;
}


