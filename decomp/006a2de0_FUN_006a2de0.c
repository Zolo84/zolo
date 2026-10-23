// FUN_006a2de0 @ 6a2de0 size=176

undefined4 __thiscall FUN_006a2de0(int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x244))();
  iVar3 = (**(code **)(*piVar2 + 4))();
  if (iVar3 != 0) {
    fVar5 = (float10)(**(code **)(*param_2 + 0xa4))();
    (**(code **)(*param_1 + 0x244))();
    fVar6 = (float10)FUN_00527d00();
    if ((float10)(float)fVar5 <= fVar6) goto LAB_006a2e36;
  }
  uVar4 = (**(code **)(*param_1 + 0x220))(param_2);
  *(undefined4 *)((int)param_1 + 0x9a) = uVar4;
LAB_006a2e36:
  iVar3 = param_1[0x23];
  if ((*(int *)((int)param_1 + 0x9e) == 0) && (*(int *)((int)param_1 + 0x9a) != 0)) {
    iVar3 = *(int *)((int)param_1 + 0x9a);
  }
  cVar1 = FUN_006abc30(param_2,iVar3,(char)param_1[0x24] == '\0');
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x18c))(param_2);
    (**(code **)(*param_1 + 0x240))();
    return 0;
  }
  return 1;
}


