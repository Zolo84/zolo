// FUN_00517410 @ 517410 size=162

undefined4 __thiscall FUN_00517410(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  piVar1 = param_2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x2ae) + 0x28))(&param_2,param_2);
  if (*piVar2 == 0) {
    FUN_00459df0(piVar1);
    (**(code **)(*piVar1 + 0x98))(*(undefined4 *)(param_1 + 0xc));
    puVar3 = (undefined2 *)FUN_00447250();
    FUN_005190d0(*puVar3,(short)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10));
    uVar4 = SUB42(piVar1,0);
    *(int *)((int)piVar1 + 0x2a6) = param_1;
    piVar1[0x90] = 0;
    FUN_0051b230(uVar4);
    FUN_004e43f0(uVar4);
    *(undefined1 *)((int)piVar1 + 0x17b) = 0;
    FUN_005232b0();
    (**(code **)piVar1[2])(0);
    FUN_00419440(0xffffff9c,0xff9c);
  }
  return 1;
}


