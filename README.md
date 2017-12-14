# XMColorButton
自定义背景色渐变的 Button

## 参考用例

在使用的地方
    
    NSMutableArray *colorArray = [@[[UIColor colorWithRed:0.3 green:0.278 blue:0.957 alpha:1], [UIColor colorWithRed:0.114 green:0.612 blue:0.843 alpha:1]] mutableCopy];
    XMColorButton *button = [[XMColorButton alloc] initWithFrame:CGRectMake(100, 100, 200, 50) FromColorArray:colorArray ByGradientType:uprightTolowLeft cornerRadiu:20]; 
    [button setTitle:@" 晚餐 " forState:UIControlStateNormal];
    [button addTarget:self action:@selector(click) forControlEvents:UIControlEventTouchUpInside];
    
    // 加阴影效果
    CALayer *layer = [CALayer layer];
    layer.frame = CGRectMake(100, 100, 200, 50);//CGRectMake(跟 button 一样的位置并且一样大)
    layer.backgroundColor = [UIColor colorWithRed:0.3 green:0.278 blue:0.957 alpha:1].CGColor;
    layer.shadowOffset = CGSizeMake(5, 5);
    layer.shadowOpacity = 0.5;
    layer.cornerRadius = 25;
    
    // 这里 self 表示当前自定义的 view
    [self.view.layer addSublayer:layer];
    [self.view addSubview:button];


## 参考图片
![image](https://github.com/XinMingZhou/XMColorButton/blob/master/colorButton.png)
