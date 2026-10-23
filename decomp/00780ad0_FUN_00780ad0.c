// FUN_00780ad0 @ 780ad0 size=655

void __fastcall FUN_00780ad0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iStack_4;
  
  FUN_00419080();
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 4))(1);
  }
  iVar5 = *(int *)(param_1 + 0x7226);
  *(undefined4 *)(param_1 + 4) = 0;
  if (iVar5 != 0) {
    FUN_00430460();
    FUN_00796cd8(iVar5);
  }
  *(undefined4 *)(param_1 + 0x7226) = 0;
  iVar5 = param_1 + 0x153ea;
  iStack_4 = 0x8c;
  do {
    puVar3 = *(undefined4 **)(iVar5 + 4);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      FUN_00796cd8(*puVar3);
      FUN_00796cd8(puVar3);
      puVar3 = puVar1;
    }
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    iVar5 = iVar5 + 0x12;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  iVar5 = param_1 + 0x15dc2;
  iStack_4 = 0x8c;
  do {
    puVar3 = *(undefined4 **)(iVar5 + 4);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      FUN_00796cd8(*puVar3);
      FUN_00796cd8(puVar3);
      puVar3 = puVar1;
    }
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined4 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    iVar5 = iVar5 + 0x12;
    iStack_4 = iStack_4 + -1;
  } while (iStack_4 != 0);
  piVar4 = (int *)(param_1 + 0x5c4b2);
  iVar5 = 0x8c;
  do {
    if ((undefined4 *)piVar4[-0x230] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[-0x230])(1);
    }
    if (*piVar4 != 0) {
      FUN_007a77fa(*piVar4);
    }
    if (piVar4[0x8c] != 0) {
      FUN_007a77fa(piVar4[0x8c]);
    }
    if (piVar4[0x118] != 0) {
      FUN_007a77fa(piVar4[0x118]);
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piVar4 = (int *)(param_1 + 0x5e61a);
  iVar5 = 0x8c;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(undefined4 **)(param_1 + 0x167f0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x167f0))(1);
  }
  iVar5 = *(int *)(param_1 + 0x1c568);
  *(undefined4 *)(param_1 + 0x167f0) = 0;
  if (iVar5 != 0) {
    FUN_00780d60();
    FUN_00796cd8(iVar5);
  }
  if (*(undefined4 **)(param_1 + 0x1c56c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c56c))(1);
  }
  *(undefined4 *)(param_1 + 0x1c56c) = 0;
  if (*(undefined4 **)(param_1 + 0x1c574) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c574))(1);
  }
  *(undefined4 *)(param_1 + 0x1c574) = 0;
  if (*(undefined4 **)(param_1 + 0x1c570) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c570))(1);
  }
  *(undefined4 *)(param_1 + 0x1c570) = 0;
  piVar4 = *(int **)(param_1 + 0x1c57c);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x1c57c) = 0;
  *(undefined4 *)(param_1 + 0x1c580) = 0;
  *(undefined4 *)(param_1 + 0x1c584) = 0;
  (**(code **)(*(int *)(param_1 + 0x1c578) + 0x14))();
  piVar4 = *(int **)(param_1 + 0x356c6);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    if (*piVar4 != 0) {
      FUN_00796cd8(*piVar4);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x356c6) = 0;
  *(undefined4 *)(param_1 + 0x356ca) = 0;
  *(undefined4 *)(param_1 + 0x356ce) = 0;
  (**(code **)(*(int *)(param_1 + 0x356c2) + 0x14))();
  piVar4 = *(int **)(param_1 + 0x356d8);
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)piVar4[2];
    if (*piVar4 != 0) {
      FUN_00796cd8(*piVar4);
    }
    FUN_00796cd8(piVar4);
    piVar4 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x356d8) = 0;
  *(undefined4 *)(param_1 + 0x356dc) = 0;
  *(undefined4 *)(param_1 + 0x356e0) = 0;
  (**(code **)(*(int *)(param_1 + 0x356d4) + 0x14))();
  return;
}


