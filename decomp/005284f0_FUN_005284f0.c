// FUN_005284f0 @ 5284f0 size=163

undefined4 __thiscall FUN_005284f0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 unaff_EDI;
  int *piVar4;
  undefined4 auStack_8 [2];
  
  piVar4 = *(int **)(param_1 + 4);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  do {
    piVar1 = (int *)piVar4[2];
    iVar2 = *piVar4;
    cVar3 = (**(code **)(*param_3 + 0x24))(iVar2);
    if (((cVar3 != '\0') && (cVar3 = FUN_004d8840(*(undefined4 *)(iVar2 + 0xc)), cVar3 != '\0')) &&
       (*(char *)(DAT_00ab27b4 + 0x3b0 + *(int *)(iVar2 + 0xc) * 0x4b2) == '\x01')) {
      (**(code **)(**(int **)(iVar2 + 0x156) + 0x28))(auStack_8);
      (**(code **)(*param_4 + 0x18))(unaff_EDI,auStack_8[0]);
      (**(code **)(*param_4 + 0x10))(auStack_8[0]);
    }
    piVar4 = piVar1;
  } while (piVar1 != (int *)0x0);
  return 0;
}


