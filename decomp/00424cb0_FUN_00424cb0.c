// FUN_00424cb0 @ 424cb0 size=72

void FUN_00424cb0(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; (int)param_3 <= param_4; param_3 = param_3 + 1) {
    iVar1 = 0;
    piVar2 = param_1;
    if (0 < param_5) {
      do {
        if (*(byte *)(iVar1 + param_2) == param_3) {
          *piVar2 = iVar3;
          iVar3 = iVar3 + 1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < param_5);
    }
    iVar3 = iVar3 << 1;
  }
  return;
}


