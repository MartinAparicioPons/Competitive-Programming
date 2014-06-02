program fuses;
var
  a, b, c: integer;
begin
  readln(a, b);
  c:=(b-a+1) div 2;
  if (odd(b)) and (odd(a)) then inc(c);
  writeln(c);
end.