// FUN_007a0c80 @ 7a0c80 size=146

int __thiscall FUN_007a0c80(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_00798da9();
  }
  uVar2 = *(int *)(param_2 + 8) - param_3;
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  if ((uint)(DAT_00800314 - *(int *)(param_1 + 8)) <= param_4) {
    FUN_00798b7d();
  }
  if (param_4 != 0) {
    iVar5 = *(int *)(param_1 + 8) + param_4;
    cVar1 = FUN_007a0a73(iVar5,0);
    if (cVar1 != '\0') {
      puVar3 = &DAT_00800310;
      if (*(undefined2 **)(param_2 + 4) != (undefined2 *)0x0) {
        puVar3 = *(undefined2 **)(param_2 + 4);
      }
      puVar3 = puVar3 + param_3;
      puVar4 = (undefined2 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 2);
      do {
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      *(int *)(param_1 + 8) = iVar5;
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar5 * 2) = 0;
    }
  }
  return param_1;
}


