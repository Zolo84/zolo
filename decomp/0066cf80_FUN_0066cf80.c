// FUN_0066cf80 @ 66cf80 size=273

void __thiscall FUN_0066cf80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uStack_10;
  uint uStack_8;
  
  piVar3 = *(int **)(param_1 + 0x30d9e);
  piVar5 = (int *)0x0;
  if (piVar3 != (int *)0x0) {
    do {
      if (param_2 == *(int *)*piVar3) {
        piVar5 = piVar3;
      }
      piVar3 = (int *)piVar3[2];
    } while (piVar3 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      if (iVar1 != 0) {
        piVar3 = *(int **)(iVar1 + 0x10);
        if (piVar3 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar3 + 0x1b4))();
          uVar2 = **(undefined4 **)(iVar4 + 4);
          uStack_10 = uStack_10 & 0xff000000;
          uStack_8 = uStack_8 & 0xff000000;
          piVar3[0x30] = 0;
          FUN_0050b600(uVar2,2,*(undefined4 *)(piVar3[0x23] + 0xc),0,1,1,uStack_8,0,uStack_10,0,1,
                       0xffffffff,0,1,0,0xbf800000,1);
          piVar3[0x31] = 5;
        }
        FUN_00796cd8(iVar1);
      }
      (**(code **)(*(int *)(param_1 + 0x30d9a) + 0x1c))(piVar5);
    }
  }
  return;
}


