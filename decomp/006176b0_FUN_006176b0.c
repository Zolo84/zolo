// FUN_006176b0 @ 6176b0 size=141

undefined4 * __thiscall FUN_006176b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x7e) + 0x20))(param_2,param_3);
  if ((cVar2 != '\0') && (piVar1 = *(int **)(param_1 + 0x8a), piVar1 != (int *)0x0)) {
    uVar4 = *(undefined4 *)((int)piVar1 + 0x26);
    uVar3 = FUN_00763780();
    uVar4 = FUN_007637f0(uVar4,uVar3);
    uVar4 = (**(code **)(*piVar1 + 0xc))(uVar4);
    FUN_007a630a(&DAT_00cfc208,s__s___s___s_0085e5a8,uVar4);
    return &DAT_00cfc208;
  }
  cVar2 = FUN_004355a0(param_2,param_3);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x86) + 0x3c))(param_2,param_3);
    return puVar5;
  }
  return (undefined4 *)0x0;
}


