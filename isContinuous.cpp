int getdifference(int a[5]){
    int max,min;
    max = 0;
    min = 14;
    for(int i=0;i<5;i++){
        if(a[i]==0)
            continue;
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    return max-min;
}

bool havesamecards(int a[5]){
    for(int i =0;i<5;i++){
        if(a[i]==0){
            continue;
        }
        for(int j=0;j<5;j++){
            if(a[i]==a[j])
                return false;
        }
    }
    return true;
}

bool IsContinuous(int a[5]){
    if(getdifference(a)>5)//判断五张牌（除了大小王）中的最大牌和最小牌的差是否小于5
        return false;
    if(havesamecards(a))//判断有没有重复的牌
        return false;
    return true;
}



