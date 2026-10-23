// FUN_0076e2a0 @ 76e2a0 size=265

void __thiscall FUN_0076e2a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 0x167e2);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    iVar3 = (&DAT_0089cad8)[*(int *)(iVar2 + 0x16)];
    if (((((*(int *)(iVar2 + 0x62) == 0) || (*(int *)(*(int *)(iVar2 + 0x62) + 6) == param_2)) &&
         (iVar3 != 0)) && ((*(int *)(iVar3 + 6) == param_2 && (*(int *)(iVar2 + 0x5e) == 0)))) &&
       (piVar5 = (int *)(**(code **)(*(int *)(iVar3 + 0x117f4) + 0x28))((short)local_4,iVar2),
       *piVar5 == 0)) {
      if (((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar2 + 0x56)) &&
         (*(int *)(iVar2 + 0x52) < (int)*(short *)(param_1 + 0x12))) {
        FUN_0050a420(iVar3);
        FUN_00425f10(iVar2);
        (**(code **)(*(int *)(param_1 + 0x167de) + 0x18))(iVar2);
        puVar6 = (undefined2 *)FUN_0044df10();
        piVar5 = (int *)FUN_00465af0(*puVar6,(short)((uint)*(undefined4 *)(puVar6 + 1) >> 0x10));
        cVar4 = (**(code **)(*piVar5 + 0x24))();
        if (cVar4 != '\0') {
          *(undefined1 *)(iVar2 + 0x2c) = 1;
        }
      }
      else {
        *(undefined1 *)(iVar2 + 0x2d) = 1;
      }
    }
  }
  return;
}


