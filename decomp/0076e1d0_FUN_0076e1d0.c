// FUN_0076e1d0 @ 76e1d0 size=208

void __fastcall FUN_0076e1d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined1 local_4 [4];
  
  piVar3 = *(int **)(param_1 + 0x167e2);
  while (piVar3 != (int *)0x0) {
    piVar5 = (int *)piVar3[2];
    iVar1 = *piVar3;
    piVar3 = piVar5;
    if (((int)*(short *)(DAT_00893530 + 0x18) < *(int *)(iVar1 + 0x56)) &&
       (*(int *)(iVar1 + 0x52) < (int)*(short *)(param_1 + 0x12))) {
      iVar2 = (&DAT_0089cad8)[*(int *)(iVar1 + 0x16)];
      if (((*(int *)(iVar1 + 0x62) == 0) && (iVar2 != 0)) && (*(int *)(iVar1 + 0x5e) == 0)) {
        piVar5 = (int *)(**(code **)(*(int *)(iVar2 + 0x117f4) + 0x28))((short)local_4,(short)iVar1)
        ;
        if (*piVar5 == 0) {
          FUN_0050a420((short)iVar2);
          FUN_00425f10((short)iVar1);
          puVar6 = (undefined2 *)FUN_0044df10();
          piVar5 = (int *)FUN_00465af0(*puVar6,(short)((uint)*(undefined4 *)(puVar6 + 1) >> 0x10));
          cVar4 = (**(code **)(*piVar5 + 0x24))();
          if (cVar4 != '\0') {
            *(undefined1 *)(iVar1 + 0x2c) = 1;
          }
        }
      }
    }
    else {
      *(undefined1 *)(iVar1 + 0x2d) = 1;
    }
  }
  return;
}


