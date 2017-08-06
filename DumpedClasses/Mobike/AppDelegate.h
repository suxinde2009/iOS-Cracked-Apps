//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "GeTuiSdkDelegate.h"
#import "UIApplicationDelegate.h"
#import "UNUserNotificationCenterDelegate.h"
#import "WXApiDelegate.h"

@class NSString, UINavigationController, UIView, UIWindow;

@interface AppDelegate : UIResponder <GeTuiSdkDelegate, UNUserNotificationCenterDelegate, UIApplicationDelegate, WXApiDelegate>
{
    UIWindow *_window;
    UINavigationController *_navVc;
    UIView *_adView;
}

+ (void)isUserOpenNotificationService:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) UINavigationController *navVc; // @synthesize navVc=_navVc;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)clearJobsAfterLaunch;
- (void)setUpSpotlight;
- (void)modifyWebViewUserAgent;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)GeTuiSdkDidReceivePayloadData:(id)arg1 andTaskId:(id)arg2 andMsgId:(id)arg3 andOffLine:(_Bool)arg4 fromGtAppId:(id)arg5;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)onlineConfigCallBack:(id)arg1;
- (void)umengTrack;
- (void)registerPushForIOS8With:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
