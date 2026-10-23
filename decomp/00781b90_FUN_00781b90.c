// FUN_00781b90 @ 781b90 size=450

void __fastcall FUN_00781b90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = &DAT_0089cad8;
  do {
    iVar1 = *piVar5;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x119ba) + 0x14))();
      piVar4 = &DAT_0089cad8;
      do {
        iVar2 = *piVar4;
        if (iVar2 != 0) {
          *(undefined1 *)(*(int *)(iVar1 + 0x12da) + 0x35 + *(int *)(iVar2 + 6) * 0x2c) = 0;
          *(undefined1 *)(*(int *)(iVar2 + 0x12da) + 0x35 + *(int *)(iVar1 + 6) * 0x2c) = 0;
          *(undefined1 *)(*(int *)(iVar1 + 0x12da) + 0x36 + *(int *)(iVar2 + 6) * 0x2c) = 0;
          *(undefined1 *)(*(int *)(iVar2 + 0x12da) + 0x36 + *(int *)(iVar1 + 6) * 0x2c) = 0;
        }
        piVar4 = piVar4 + 1;
      } while ((int)piVar4 < 0x89d038);
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0x89d038);
  piVar5 = *(int **)(param_1 + 0x276);
  while (piVar5 != (int *)0x0) {
    puVar3 = (undefined4 *)*piVar5;
    piVar5 = (int *)piVar5[2];
    iVar1 = (&DAT_0089cad8)[*(int *)((int)puVar3 + 0x1a)];
    iVar2 = (&DAT_0089cad8)[*(int *)((int)puVar3 + 0x16)];
    if ((iVar1 == 0) || (iVar2 == 0)) {
      (**(code **)(*(int *)(param_1 + 0x272) + 0x18))(puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    else {
      if (*(int *)((int)puVar3 + 0x1e) == 0) {
        *(undefined1 *)(*(int *)(iVar2 + 0x12da) + 0x35 + *(int *)(iVar1 + 6) * 0x2c) = 1;
        *(undefined1 *)(*(int *)(iVar1 + 0x12da) + 0x35 + *(int *)(iVar2 + 6) * 0x2c) = 1;
        FUN_0078ef40(puVar3);
        FUN_0078ef40(puVar3);
      }
      else if (*(int *)((int)puVar3 + 0x1e) == 1) {
        *(undefined1 *)(*(int *)(iVar2 + 0x12da) + 0x36 + *(int *)(iVar1 + 6) * 0x2c) = 1;
        *(undefined1 *)(*(int *)(iVar1 + 0x12da) + 0x36 + *(int *)(iVar2 + 6) * 0x2c) = 1;
      }
      if (((*(int *)((int)puVar3 + 0x1e) == 2) &&
          (*(char *)(*(int *)(iVar2 + 0x12da) + (*(int *)(iVar1 + 6) + 1) * 0x2c) != '\0')) &&
         ((**(code **)(*(int *)(param_1 + 0x272) + 0x18))(puVar3), puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


