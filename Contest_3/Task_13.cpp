StrangeMatrix transpose(StrangeMatrix m)
{
 struct StrangeMatrix x;
 x.first_line[0] = m.first_line[0]; x.first_line[1] = m.second_line[0]; x.first_line[2] = m.third_line[0];
 x.second_line[0] = m.first_line[1]; x.second_line[1] = m.second_line[1]; x.second_line[2] = m.third_line[1];
 x.third_line[0] = m.first_line[2]; x.third_line[1] = m.second_line[2]; x.third_line[2] = m.third_line[2];
 return x;
}