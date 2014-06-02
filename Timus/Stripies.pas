program stripies;
var
  a: array[1..100] of real;
  temp: real;
  n, i, k: integer;
begin
  readln(n);
  for i:=1 to n do
    readln(a[i]);
  for i:=1 to n-1 do begin
    for k:=i+1 to n do begin
      if a[i] < a[k] then begin
        temp:=a[i];
        a[i]:=a[k];
        a[k]:=temp;
        end;
      end;
    end;
  for i:=2 to n do
    a[i]:=2*(sqrt(a[i-1]*a[i]));
  writeln(a[n] :0:2);
end.