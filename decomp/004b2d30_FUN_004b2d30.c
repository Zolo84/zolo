// FUN_004b2d30 @ 4b2d30 size=176

void __thiscall FUN_004b2d30(int param_1,int param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0xc);
  do {
    if (piVar5 == (int *)0x0) goto LAB_004b2d74;
    piVar1 = (int *)piVar5[1];
    iVar3 = *piVar5;
    iVar2 = *(int *)(iVar3 + 4);
    piVar5 = piVar1;
  } while (((iVar2 == 0) || (*(int *)(iVar2 + 0xa0) != *(int *)(param_2 + 0xe))) ||
          (*(short *)(iVar2 + 0x9e) != *(short *)(param_2 + 0xc)));
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 == 0) {
LAB_004b2d74:
    iVar3 = FUN_004b22d0((short)param_2);
  }
  if (param_4 == '\0') {
    iVar3 = iVar3 + 0x44;
  }
  puVar4 = (undefined2 *)FUN_0044df10();
  piVar5 = (int *)(**(code **)(*(int *)(iVar3 + 6) + 0x28))
                            (&param_4,*puVar4,(short)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10));
  if (*piVar5 == 0) {
    puVar4 = (undefined2 *)FUN_0044df10();
    FUN_004739f0(*puVar4,(short)((uint)*(undefined4 *)(puVar4 + 1) >> 0x10));
  }
  return;
}


