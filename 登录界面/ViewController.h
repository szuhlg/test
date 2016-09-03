//
//  ViewController.h
//  登录界面
//
//  Created by 黄立光 on 16/5/28.
//  Copyright © 2016年 黄立光. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    //登陆界面构成
    
    //用户名提示Label
    UILabel *_lbUserName;
    //密码提示Label
    UILabel *_lbPassword;
    //用户名输入框
    UITextField *_tfUserName;
    //密码输入框
    UITextField *_tfPassword;
    //登录按钮
    UIButton *_btLogin;
    //注册按钮
    UIButton *_btRegister;
}

@end

