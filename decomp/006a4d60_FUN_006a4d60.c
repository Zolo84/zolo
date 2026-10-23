// FUN_006a4d60 @ 6a4d60 size=237

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006a4d60(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  (**(code **)(*param_1 + 0x214))();
  (**(code **)(*param_1 + 0x21c))();
  if (_DAT_007e46cc < *(float *)((int)param_1 + 0x96)) {
    fVar3 = (float10)(**(code **)(*param_2 + 0xa4))();
    if (((float10)*(float *)((int)param_1 + 0x92) * (float10)_DAT_007e3650 <
         fVar3 + (float10)*(float *)((int)param_1 + 0x96)) &&
       (*(float *)((int)param_1 + 0x92) < *(float *)((int)param_1 + 0x96))) {
      (**(code **)(*param_1 + 0x18c))(param_2);
      (**(code **)(*param_1 + 0x240))();
      return 0;
    }
  }
  iVar2 = param_1[0x23];
  if ((*(int *)((int)param_1 + 0x9e) == 0) && (*(int *)((int)param_1 + 0x9a) != 0)) {
    iVar2 = *(int *)((int)param_1 + 0x9a);
  }
  cVar1 = FUN_006abd50(param_2,iVar2,(char)param_1[0x24] == '\0');
  if (cVar1 != '\0') {
    iVar2 = FUN_005245c0();
    if (iVar2 < 0x2711) {
      return 1;
    }
  }
  (**(code **)(*param_1 + 0x18c))(param_2);
  (**(code **)(*param_1 + 0x240))();
  return 0;
}


