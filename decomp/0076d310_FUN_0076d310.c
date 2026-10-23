// FUN_0076d310 @ 76d310 size=205

void __thiscall FUN_0076d310(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  undefined2 *puVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x1be90);
  piVar3 = *(int **)(param_1 + 0x167be);
  while (piVar3 != (int *)0x0) {
    piVar6 = (int *)piVar3[2];
    puVar2 = (undefined4 *)*piVar3;
    piVar3 = piVar6;
    if (puVar2[0x1f] == param_2) {
      if ((iVar1 == 0x3f800000) &&
         ((*(int *)((int)puVar2 + 0x1e) <= (int)*(short *)(DAT_00893530 + 0x18) ||
          ((int)*(short *)(param_1 + 0x12) <= *(int *)((int)puVar2 + 0x1a))))) {
        (**(code **)(*(int *)(param_1 + 0x167ba) + 0x18))((short)puVar2);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
      }
      else {
        FUN_0078ea60((short)puVar2);
        puVar5 = (undefined2 *)FUN_00447250();
        piVar6 = (int *)FUN_00465ae0(*puVar5,(short)((uint)*(undefined4 *)(puVar5 + 1) >> 0x10));
        cVar4 = (**(code **)(*piVar6 + 0x24))();
        if (cVar4 != '\0') {
          *(undefined1 *)((int)puVar2 + 0xbe) = 1;
        }
      }
    }
  }
  return;
}


