program arcofutbol;
var
  a, b : integer;
  c:real;
begin
  readln(a,b);
  c:= (a *a + b *b) / 4 + Sqrt(2) * a * b / 2; //((((a*a) + (b*b))/4) + (1.4142135623730950488*a*b)/2);
  writeln(c :0:6);
end.