a=2.5;
b=0.5;
x=0:0.01:a;
y=0:0.01:b;
f=10000;
A=pi/a;
B=pi/b;
[XX,YY]=meshgrid(x,y);
h=sqrt((A*A)+(B*B));
w=2*pi*f;
j=sqrt(-1);
mu=4*pi*(10^-7);
e=(1/(36*pi))*(10^-9);
p=sqrt(((w.^2)*mu*e)-h.^2);
Ex = -(j.*p/(h.*h)).*A.*sin(B.*YY).*cos(A.*XX);
Ey = -(j.*p/(h.*h)).*B.*sin(A.*XX).*cos(B.*YY);
Hx = (j.*w.*e/(h.*h)).*B.*sin(B.*XX).*cos(A.*YY);
Hy=-(j.*w.*e/(h.*h)).*A.*sin(B.*YY).*cos(A.*XX);
figure(1)
surf((Ex));
figure(2)
surf((Ey));
figure(3)
surf(imag(Hx));
figure(4)
surf(imag(Hy));
ex=(j.*w.*mu/(h.*h)).*B.*sin(B.*YY).*cos(A.*XX);
ey=-(j.*w.*mu/(h.*h)).*A.*sin(A.*XX).*cos(B.*YY);
hx= (j.*p/(h.*h)).*A.*sin(A.*XX).*cos(B.*YY);
hy= (j.*p/(h.*h)).*B.*sin(B.*YY).*cos(A.*XX);
figure(5)
surf(imag(ex));
figure(6)
surf(imag(ey));
figure(7)
surf((hx));
figure(8)
surf((hy));
