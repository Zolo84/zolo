// FUN_0047b940 @ 47b940 size=169

undefined4 __thiscall FUN_0047b940(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 local_8;
  undefined4 local_6;
  
  local_8 = *(undefined2 *)(*(int *)(param_2 + 4) + 0xe);
  local_6 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x10);
  iVar5 = FUN_00428ee0((short)&local_8);
  if ((iVar5 != 0) && (puVar1 = (undefined4 *)(iVar5 + -8), puVar1 != (undefined4 *)0x0)) {
    piVar4 = *(int **)(*(int *)(iVar5 + 0x10) + 0x54);
    while (piVar4 != (int *)0x0) {
      piVar2 = (int *)piVar4[2];
      iVar3 = *piVar4;
      piVar4 = piVar2;
      if (*(int *)(iVar3 + 4) == 0xd7) {
        (**(code **)(*(int *)(param_1 + 0x362c) + 0x18))
                  (0x11,(short)((uint)*(undefined4 *)(iVar3 + 0xc) >> 0x10));
      }
    }
    if (*(int *)(iVar5 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0xd8) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x3650) + 0x18))((short)puVar1);
    (**(code **)*puVar1)(1);
  }
  return 3;
}


