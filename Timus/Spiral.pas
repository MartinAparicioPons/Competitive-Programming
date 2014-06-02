program spiral;
var
  n, m: int64;
begin
  readln(n, m);
  if (m>=n) then writeln((2*n)-2)
  else writeln((2*m)-1);
end.