//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLCommonActivityManagerUtils : NSObject
{
}

+ (_Bool)currentActivityHasTimeOutWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (id)currentActivityIDWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (long long)activityPageShowNumberWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (long long)tabbarIconShowNumberWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (long long)guideViewShowNumberWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (_Bool)tabbarIconCanStartActivityWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (_Bool)guideViewCanStartActivityWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (_Bool)activityViewisShowingWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (void)updataGuideViewHasShowData:(_Bool)arg1 tabID:(unsigned long long)arg2 channelID:(id)arg3;
+ (_Bool)hasShowGuideViewInCurrentActivityWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (long long)statusOfCurrentTargetPageTabID:(unsigned long long)arg1;
+ (id)getGuideViewImageWithTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (long long)pullRefreshStyleOfCurrentTargetPage;
+ (id)getPullRefreshCover;
+ (struct CGSize)getPullRefreshCoverSize;
+ (id)activityViewOfCurrentTargetPage;
+ (id)configShowActivityTab;
+ (void)registerActivitytargetPage:(id)arg1;
+ (long long)statusOfCurrentTargetPage;
+ (long long)statusOfCurrentTargetPageTabID:(unsigned long long)arg1 channelID:(id)arg2;
+ (id)activityChannelID;
+ (unsigned long long)activityTabBarID;

@end
