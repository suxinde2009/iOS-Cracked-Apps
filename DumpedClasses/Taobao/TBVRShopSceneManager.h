//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRSceneManager.h"

@class NSString, TBVRBuyPlusShopInfoResponseModel, TBVRShopWorld;

@interface TBVRShopSceneManager : TBVRSceneManager
{
    int time;
    NSString *_uuid;
    TBVRShopWorld *_shopWorld;
    TBVRBuyPlusShopInfoResponseModel *_shopData;
}

@property(retain, nonatomic) TBVRBuyPlusShopInfoResponseModel *shopData; // @synthesize shopData=_shopData;
@property(nonatomic) __weak TBVRShopWorld *shopWorld; // @synthesize shopWorld=_shopWorld;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)setSplit:(_Bool)arg1;
- (void)backToShopScene;
- (void)handleStopAtTimeNotification:(id)arg1;
- (void)handlePlayNotification:(id)arg1;
- (void)cleanupNotification;
- (void)registerNotification;
- (void)dealloc;
- (id)initWithVRUIManager:(id)arg1;

@end
