// FUN_0058e740 @ 58e740 size=54

undefined4 __thiscall FUN_0058e740(int *param_1,undefined4 *param_2)

{
  if (param_1[2] <= param_1[1]) {
    FUN_00405ad0(s_no_room_for_addtail_in_oblist_00857fb4);
    return 0xffffffff;
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return 0;
}


