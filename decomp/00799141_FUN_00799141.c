// FUN_00799141 @ 799141 size=145

int __thiscall FUN_00799141(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    FUN_0079947b();
    FUN_007991d2(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    puVar2 = *(undefined4 **)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
      if ((puVar2[2] != 0) || (puVar2[3] != 0)) {
        iVar1 = FUN_00799324(puVar2[1]);
        *(undefined4 *)(iVar1 + 8) = puVar2[2];
        iVar1 = FUN_00799324(puVar2[1]);
        *(undefined4 *)(iVar1 + 0xc) = puVar2[3];
      }
    }
    FUN_00799302(2);
    *(uint *)(param_1 + 8) = *(uint *)(param_2 + 8) & 7;
    FUN_00798ed3(*(undefined4 *)(param_1 + 4),0);
  }
  return param_1;
}


