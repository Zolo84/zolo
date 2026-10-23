// FUN_0042cab0 @ 42cab0 size=63

void FUN_0042cab0(void)

{
  if (DAT_00893530 != 0) {
    if (*(UINT *)(DAT_00893530 + 0x1a) == 0) {
      FUN_00429a50(s_Timer_didn_t_shut_down_properly_0083b070);
    }
    else {
      timeKillEvent(*(UINT *)(DAT_00893530 + 0x1a));
    }
    FUN_00796cd8(DAT_00893530);
  }
  DAT_00893530 = 0;
  return;
}


