n=gets.to_i;a=gets.split(" ").map(&:to_i);res,sum=0,0.0;for i in 0...n do sum+=a[i];res=[res,(sum/(i+1)).ceil].max;end;puts res
