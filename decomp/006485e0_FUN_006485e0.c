// FUN_006485e0 @ 6485e0 size=88

undefined4 __fastcall FUN_006485e0(int param_1)

{
  undefined4 unaff_ESI;
  
  (**(code **)(*(int *)(param_1 + -0x12) + 0x34))(10,0xc);
  FUN_00435cd0(unaff_ESI);
  (**(code **)(*(int *)(param_1 + -0x12) + 0x34))
            (*(int *)(*(int *)(param_1 + 0x60) + 0x20) + 10,
             *(int *)(*(int *)(param_1 + 0x60) + 0x24) + 0xc);
  FUN_00406270(*(undefined4 *)(*(int *)(param_1 + 0x60) + 0x20),
               *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x24),DAT_00bd1bac);
  return 0;
}


