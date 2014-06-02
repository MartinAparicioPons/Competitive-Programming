program seq;

var
  a:array[1..26] of char;
  i:longint;

begin
  randomize;

  for i:=1 to 26 do
    a[i]:=chr(ord('a')+i-1);

  for i:=1 to 1000000 do
    write(a[random(26)+1]);
end.