// FUN_006919d0 @ 6919d0 size=139

void __thiscall FUN_006919d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar2 = FUN_006a8720();
  if (((cVar2 == '\0') && (*(char *)(param_1 + 0xe) != '\0')) &&
     ((*(int *)(param_3 + 0x3d8) == *(int *)(param_1 + 10) || (param_2 == *(int *)(param_1 + 10)))))
  {
    piVar1 = *(int **)(param_1 + 0x278);
    do {
      if (piVar1 == (int *)0x0) {
        FUN_00468690(param_1 + 0x3c);
        uVar3 = FUN_00527b40();
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        iVar4 = FUN_00527630(1);
        *(int *)(param_1 + 0x50) = iVar4 + *(int *)(param_1 + 0x54);
        FUN_00693ee0();
        FUN_00695a00();
        return;
      }
      iVar4 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(char *)(iVar4 + 0x9e) == '\0');
  }
  return;
}


