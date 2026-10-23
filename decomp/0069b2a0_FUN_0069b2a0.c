// FUN_0069b2a0 @ 69b2a0 size=114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069b2a0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((*(int **)(param_2 + 500) != param_1) && (param_1[0x10] != 0)) {
    iVar2 = FUN_0051b230();
    if (*(int *)(iVar2 + 0x482) == param_1[0x12]) {
      fVar4 = (float10)(**(code **)(*param_1 + 0x1fc))(iVar2);
      if ((float10)_DAT_007e34e0 <= fVar4) {
        uVar3 = FUN_006a9d50();
        cVar1 = FUN_0044b280(uVar3);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x204))(iVar2);
        }
      }
    }
  }
  return;
}


