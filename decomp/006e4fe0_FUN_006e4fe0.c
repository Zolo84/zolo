// FUN_006e4fe0 @ 6e4fe0 size=117

void __fastcall FUN_006e4fe0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x10);
  if (iVar1 == 1) {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xb) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xf) = 0;
    return;
  }
  if (iVar1 == 2) {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 10) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xb) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xf) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x10) == 3) {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 10) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xb) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xf) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x58) + 0x10) == 4) {
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 10) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xb) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x7c) + 0xf) = 1;
  }
  return;
}


