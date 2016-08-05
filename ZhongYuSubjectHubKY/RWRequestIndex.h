//
//  RWRequestIndex.h
//  ZhongYuSubjectHubKY
//
//  Created by zhongyu on 16/6/21.
//  Copyright © 2016年 RyeWhiskey. All rights reserved.
//

#ifndef RWRequestIndex_h
#define RWRequestIndex_h

#define APP_ID @"1133372985"

#define APP_STORE_URL @"http://itunes.apple.com/cn/lookup?id="APP_ID
#define TO_APP_STORE @"itms-apps://itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?type=Purple+Software&id="APP_ID

#define UMengCommunityAppkey @"57830ed1e0f55a66f200058c"
#define UMengCommunityAppSecret @"7d2761723e6be40986ea8166b001dd72"

#define MOB_CLICK @"57830e2067e58e83d4000584"

#define NAV_TITLE @"二建资讯"

#define MAIN_INDEX [NSURL URLWithString:@"http://jz.zhongyuedu.com/list.php?fid=54"]
//>> 资讯
#define SERVERS_INDEX @"http://api.zhongyuedu.com/tik/ej/examtype.php"
//>> 题库目录
#define YY_INDEX @"http://api.zhongyuedu.com/tik/ej/yy_list.php"
//>> 预约列表
#define RECOMMEND @"http://www.zhongyuedu.com/api/tuijian.php"
//>> 推荐列表
#define UPDATE_USERNAME @"http://api.zhongyuedu.com/tik/ej/yy_post.php"
//>> 上传
#define EXPERIENCE_TIMES_URL @"http://api.zhongyuedu.com/tik/ej/limit.php"
//>> 天王盖地虎
#define RECEIVE_PUSH @"http://api.zhongyuedu.com/tik/ej/url.php"
//>> push
#define LOGIN_URL @"http://api.zhongyuedu.com/tik/ej/login.php"
//>> 登录
#define REGISTER_URL @"http://api.zhongyuedu.com/tik/ej/register.php"
//>> 注册
#define REPLACE_PASSWORD_URL @"http://api.zhongyuedu.com/tik/ej/change_pwd.php"
//>> 重置密码
#define ABOUT_US @"http://www.zhongyuedu.com/api/tk_aboutUs.htm"
//>> 关于我们
#define README @"http://www.zhongyuedu.com/app/tk_ky/tk_ios_usage.htm"
//>> 使用说明
#define VERIFICATION_PHONENUMBER @"http://api.zhongyuedu.com/comm/code.php"

#endif /* RWRequestIndex_h */
