// FUN_00579570 @ 579570 size=138

void __thiscall FUN_00579570(int *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  param_5 = param_5 >> 1;
  uVar4 = param_4 + param_5;
  if (param_3 < uVar4) {
    piVar5 = param_1 + 1;
    uVar4 = param_4;
  }
  else {
    piVar5 = param_1 + 2;
  }
  if (param_5 == 1) {
    puVar3 = operator_new(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      *piVar5 = 0;
    }
    else {
      puVar3[1] = 0;
      *puVar3 = param_2;
      puVar3[2] = 0;
      *piVar5 = (int)puVar3;
    }
  }
  else {
    FUN_00579570(param_2,param_3,uVar4,param_5);
  }
  cVar2 = FUN_0042ddd0(*(int *)(*param_1 + 4) + 2);
  if (cVar2 == '\0') {
    iVar1 = *(int *)*piVar5;
    *(int *)*piVar5 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


