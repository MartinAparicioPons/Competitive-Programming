program goat;

uses math;
const pi = 3.1415926535;
var
  n,m:real;
  res:extended;
begin
  read(n,m);
  if (2*m <= n) then res:=pi*m*m
    else if (m >= (n/2)*sqrt(2)) then res:=n*n
      else  res:= ((pi*m*m-4*arccos(n/m/2)*m*m+2*n*sqrt(m*m-n*n/4)));
  writeln(res :0:3);
end.