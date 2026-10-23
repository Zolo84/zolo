// FUN_00527400 @ 527400 size=155

void __thiscall
FUN_00527400(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined2 param_8,undefined4 param_9,
            undefined2 param_10,undefined4 param_11)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  while (piVar3 != (int *)0x0) {
    piVar1 = (int *)piVar3[2];
    iVar2 = *piVar3;
    piVar3 = piVar1;
    if (*(char *)(iVar2 + 0x17b) == '\0') {
      FUN_0050b600(iVar2,param_2,param_3,(float)param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11,0xffffffff,0,1,0,0xbf800000,1);
    }
  }
  return;
}


