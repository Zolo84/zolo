// FUN_0066b470 @ 66b470 size=160

void __fastcall FUN_0066b470(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float fStack_8;
  
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2a) + 4))();
  while (0 < iVar3) {
    piVar1 = *(int **)(param_1 + 10);
    fStack_8 = -999999.0;
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar2 = (int *)*piVar1;
      (**(code **)(*piVar2 + 0x10))(param_1);
      (**(code **)(*piVar2 + 0x14))(param_1);
      fVar5 = (float10)(**(code **)(piVar2[0x26] + 8))();
      if ((float10)fStack_8 < fVar5) {
        fVar5 = (float10)(**(code **)(piVar2[0x26] + 8))();
        fStack_8 = (float)fVar5;
      }
    }
    uVar4 = FUN_0066a8c0((int *)(param_1 + 0x2a));
    FUN_0066b970(uVar4);
    iVar3 = (**(code **)(*(int *)(param_1 + 0x2a) + 4))();
  }
  return;
}


