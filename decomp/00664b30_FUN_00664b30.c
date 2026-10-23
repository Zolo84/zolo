// FUN_00664b30 @ 664b30 size=219

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00664b30(int param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  fVar6 = (float10)FUN_00664d30(*(undefined4 *)(param_2[0x23] + 0x288));
  iVar4 = (**(code **)(*(int *)(param_1 + 0xf0) + 4))();
  if (iVar4 < 1) {
    if ((float)fVar6 == _DAT_007e3380) {
      (**(code **)(*param_2 + 0xcc))();
      return;
    }
  }
  else {
    iVar4 = **(int **)(param_1 + 0xf4);
    fVar1 = (float)(*(int **)(param_1 + 0xf4))[1];
    if ((float)fVar6 < fVar1) {
      iVar2 = *(int *)(param_1 + 10);
      iVar3 = **(int **)((int)&DAT_008ea36c + iVar4 * 0x12);
      uVar5 = FUN_004c7bfa(*(undefined4 *)(param_2[0x23] + 0x288));
      uVar5 = FUN_004c7bfa(iVar4,uVar5);
      uVar5 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar5);
      FUN_00458570(s_NAVAL__ASW____s_switches_from_de_008677c4,uVar5);
      param_2[0x23] = iVar3;
      param_2[0x11] = (int)fVar1;
    }
  }
  return;
}


