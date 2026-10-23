// FUN_004147f0 @ 4147f0 size=179

void __thiscall FUN_004147f0(int param_1,int *param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  while( true ) {
    while (*param_2 != 0) {
      iVar3 = FUN_007a76c0((int)*(char *)(*param_2 + 4));
      iVar4 = FUN_007a76c0((int)*param_3);
      if (iVar4 == iVar3) {
        if (param_3[1] == '\0') {
          *(undefined4 *)*param_2 = param_4;
          *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
          return;
        }
        param_3 = param_3 + 1;
        param_2 = (int *)(*param_2 + 0xe);
      }
      else if (iVar4 - iVar3 < 1) {
        param_2 = (int *)(*param_2 + 6);
      }
      else {
        param_2 = (int *)(*param_2 + 10);
      }
    }
    puVar2 = operator_new(0x12);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      cVar1 = *param_3;
      *puVar2 = 0;
      *(char *)(puVar2 + 1) = cVar1;
      *(undefined4 *)((int)puVar2 + 6) = 0;
      *(undefined4 *)((int)puVar2 + 10) = 0;
      *(undefined4 *)((int)puVar2 + 0xe) = 0;
    }
    *param_2 = (int)puVar2;
    if (param_3[1] == '\0') break;
    param_3 = param_3 + 1;
    param_2 = (int *)((int)puVar2 + 0xe);
  }
  *puVar2 = param_4;
  *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
  return;
}


