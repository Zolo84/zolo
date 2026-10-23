// FUN_004e7b40 @ 4e7b40 size=132

void __thiscall FUN_004e7b40(int param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  piVar5 = *(int **)(*(int *)(param_1 + 0x1c2) + 4);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[2];
    uVar2 = *(undefined4 *)(((int *)*piVar5)[0x92] + 6);
    iVar4 = (**(code **)(*(int *)*piVar5 + 0xa8))();
    cVar3 = FUN_0044b280(uVar2);
    piVar5 = param_3;
    if ((cVar3 == '\0') && (cVar3 = FUN_0044a690(uVar2), piVar5 = param_5, cVar3 == '\0')) {
      piVar5 = param_4;
    }
    *piVar5 = *piVar5 + iVar4;
    piVar5 = piVar1;
  }
  return;
}


