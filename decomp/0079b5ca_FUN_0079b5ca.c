// FUN_0079b5ca @ 79b5ca size=136

int __thiscall FUN_0079b5ca(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(uint *)(param_2 + 8) < param_3) {
    FUN_00798da9();
  }
  uVar2 = *(int *)(param_2 + 8) - param_3;
  if (uVar2 < param_4) {
    param_4 = uVar2;
  }
  if ((uint)(DAT_007f33d8 - *(int *)(param_1 + 8)) <= param_4) {
    FUN_00798b7d();
  }
  if (param_4 != 0) {
    iVar4 = *(int *)(param_1 + 8) + param_4;
    cVar1 = FUN_00674e40(iVar4,0);
    if (cVar1 != '\0') {
      puVar3 = *(undefined4 **)(param_2 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = &DAT_007f0c98;
      }
      FUN_007a71b0(*(int *)(param_1 + 4) + *(int *)(param_1 + 8),(int)puVar3 + param_3,param_4);
      *(int *)(param_1 + 8) = iVar4;
      *(undefined1 *)(*(int *)(param_1 + 4) + iVar4) = 0;
    }
  }
  return param_1;
}


