// FUN_004ef880 @ 4ef880 size=220

void __thiscall FUN_004ef880(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uStack_10;
  uint uStack_8;
  
  if (*(int *)((int)param_2 + 0x2ae) != 0) {
    iVar1 = (**(code **)(*param_2 + 0x14))();
    (**(code **)(**(int **)(iVar1 + 0x2aa) + 0x18))(param_2);
    *(undefined4 *)((int)param_2 + 0x2ae) = 0;
    param_2[0x90] = 0;
  }
  FUN_00459df0(param_2);
  piVar2 = param_2;
  FUN_0051b230(param_2);
  FUN_004e43f0(piVar2);
  *(int *)((int)param_2 + 0x2b2) = param_1;
  *(undefined4 *)((int)param_2 + 0x29e) = 0;
  param_2[0x90] = param_2[3];
  FUN_005088c0(0,0);
  uStack_10 = uStack_10 & 0xff000000;
  uStack_8 = uStack_8 & 0xff000000;
  FUN_0050bd10(0,*(undefined4 *)(param_1 + 0xc),0x3ca3d70a,1,0,uStack_8,0,uStack_10,0,0xffffffff,0,1
               ,0,0xbf800000,1);
  return;
}


