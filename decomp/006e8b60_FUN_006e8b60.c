// FUN_006e8b60 @ 6e8b60 size=226

void __fastcall FUN_006e8b60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
  if (iVar1 == 1) {
    (&DAT_00d3635b)[*(int *)(param_1 + 0x1e) * 0x1a] = 0;
    (&DAT_00d3635f)[*(int *)(param_1 + 0x1e) * 0x1a] = 0;
    return;
  }
  if (iVar1 == 2) {
    (&DAT_00d3635a)[*(int *)(param_1 + 0x1e) * 0x1a] = 0;
    (&DAT_00d3635b)[*(int *)(param_1 + 0x1e) * 0x1a] = 1;
    (&DAT_00d3635f)[*(int *)(param_1 + 0x1e) * 0x1a] = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 3) {
    (&DAT_00d3635a)[*(int *)(param_1 + 0x1e) * 0x1a] = 1;
    (&DAT_00d3635b)[*(int *)(param_1 + 0x1e) * 0x1a] = 1;
    (&DAT_00d3635f)[*(int *)(param_1 + 0x1e) * 0x1a] = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x10) == 4) {
    (&DAT_00d3635a)[*(int *)(param_1 + 0x1e) * 0x1a] = 1;
    (&DAT_00d3635b)[*(int *)(param_1 + 0x1e) * 0x1a] = 1;
    (&DAT_00d3635f)[*(int *)(param_1 + 0x1e) * 0x1a] = 1;
  }
  return;
}


