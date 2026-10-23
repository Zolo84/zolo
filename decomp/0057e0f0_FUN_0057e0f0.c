// FUN_0057e0f0 @ 57e0f0 size=257

void __thiscall FUN_0057e0f0(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c0 + param_2 * 0x3e);
  if (iVar2 != 0) {
    FUN_00796cd8(iVar2);
    *(undefined4 *)(param_1 + 0x3c0 + param_2 * 0x3e) = 0;
  }
  *(int *)(param_1 + 0xb70) = *(int *)(param_1 + 0xb70) + -1;
  if (param_2 < 0x1f) {
    iVar2 = 0x1f - param_2;
    puVar1 = (undefined4 *)(param_1 + (param_2 + 0x10) * 0x3e);
    do {
      puVar1[-0xc] = *(undefined4 *)((int)puVar1 + 0xe);
      puVar1[-0xb] = *(undefined4 *)((int)puVar1 + 0x12);
      iVar2 = iVar2 + -1;
      puVar1[-10] = *(undefined4 *)((int)puVar1 + 0x16);
      puVar1[-9] = *(undefined4 *)((int)puVar1 + 0x1a);
      puVar1[-8] = *(undefined4 *)((int)puVar1 + 0x1e);
      puVar1[-7] = *(undefined4 *)((int)puVar1 + 0x22);
      puVar1[-6] = *(undefined4 *)((int)puVar1 + 0x26);
      puVar1[-5] = *(undefined4 *)((int)puVar1 + 0x2a);
      *(undefined1 *)(puVar1 + -4) = *(undefined1 *)((int)puVar1 + 0x2e);
      *(undefined1 *)((int)puVar1 + -0xf) = *(undefined1 *)((int)puVar1 + 0x2f);
      *(undefined4 *)((int)puVar1 + -0xe) = puVar1[0xc];
      *(undefined1 *)((int)puVar1 + -10) = *(undefined1 *)(puVar1 + 0xd);
      *(undefined1 *)((int)puVar1 + -9) = *(undefined1 *)((int)puVar1 + 0x35);
      puVar1[-2] = *(undefined4 *)((int)puVar1 + 0x36);
      *puVar1 = *(undefined4 *)((int)puVar1 + 0x3e);
      puVar1[1] = *(undefined4 *)((int)puVar1 + 0x42);
      puVar1[2] = *(undefined4 *)((int)puVar1 + 0x46);
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)((int)puVar1 + 0x4a);
      puVar1 = (undefined4 *)((int)puVar1 + 0x3e);
    } while (iVar2 != 0);
  }
  if ((param_3 != '\0') && (iVar2 = 0, 0 < *(int *)(param_1 + 0xb70))) {
    do {
      FUN_0057de10(iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xb70));
  }
  return;
}


