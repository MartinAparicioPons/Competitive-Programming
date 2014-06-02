program squares;
var
  j, i, k, n:integer;
begin
 read(n);

  for i:=1 to 250 do
   if sqr(i)=n then begin write(1); exit; end;

  for i:=1 to 250 do
   for j:=1 to 250 do
    if sqr(i)+sqr(j)=n then begin write(2); exit; end;

  for i:=1 to 250 do
   for j:=1 to 250 do
    for k:=1 to 250 do
     if sqr(i)+sqr(j)+sqr(k)=n then begin write(3); exit; end;

write(4);
end.