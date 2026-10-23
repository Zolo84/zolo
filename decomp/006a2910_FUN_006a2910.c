// FUN_006a2910 @ 6a2910 size=39

void __fastcall FUN_006a2910(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0042e8c0();
  *(undefined4 *)(param_1 + 0x48) = *puVar1;
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(puVar1 + 1);
  FUN_006a9cd0();
  return;
}


