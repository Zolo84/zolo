// FUN_00442cd0 @ 442cd0 size=186

void __thiscall FUN_00442cd0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xd0);
  if ((*(char *)(param_2 + 0xe0) == '\0') && (*(char *)(param_2 + 0xe1) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0xce) = *(undefined4 *)(param_2 + 0xe2);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0xe6);
  puVar2 = (undefined4 *)(param_1 + 0x42);
  iVar4 = 5;
  puVar1 = (undefined4 *)(param_2 + 0x3c);
  do {
    puVar2[-5] = puVar1[-5];
    *puVar2 = *puVar1;
    puVar2[5] = puVar1[5];
    puVar2[10] = puVar1[10];
    puVar2[0xf] = puVar1[0xf];
    puVar2[0x14] = puVar1[0x14];
    puVar2[0x19] = puVar1[0x19];
    puVar2[0x1e] = puVar1[0x1e];
    puVar2 = puVar2 + 1;
    iVar4 = iVar4 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 0);
  return;
}


