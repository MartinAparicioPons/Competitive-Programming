program hieroglyphs;
var
  a:array[1..1000] of string[3];
  n, i:smallint;
  p:string[2];
begin
  readln(n);
  for i:=1 to n do
    readln(a[i]);
  read(p);
  for i:=1 to n do
    if  ( pos(p, a[i]) = 1) then writeln(a[i]);
end.