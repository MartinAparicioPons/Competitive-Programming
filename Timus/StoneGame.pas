program stoneGame;
var s : string;
      i,x : Integer;
begin
  readln(s);
  x:=0;
  for i:=1 to length(s) do
    if (s[i] >= '0')and(s[i] <= '9') then x:=(x+ord(s[i])-ord('0')) mod 3;
  if x=0 then writeln('2') else
  begin
    writeln('1');
    writeln(x);
  end;
end.