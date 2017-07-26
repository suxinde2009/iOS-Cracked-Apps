//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeDelegate.h"
#import "RCTExceptionsManagerDelegate.h"

@class NSData, NSMutableArray, NSString;

@interface CRNBridgeManager : NSObject <RCTExceptionsManagerDelegate, RCTBridgeDelegate>
{
    NSMutableArray *_cachedBridgeList;
    NSData *_commonJSData;
}

+ (id)rnFileInfo;
+ (void)logRNErrorMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3 errorType:(id)arg4;
+ (id)sharedCRNBridgeManager;
@property(retain, nonatomic) NSData *commonJSData; // @synthesize commonJSData=_commonJSData;
@property(retain, nonatomic) NSMutableArray *cachedBridgeList; // @synthesize cachedBridgeList=_cachedBridgeList;
- (void).cxx_destruct;
- (void)updateJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)handleFatalJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)handleSoftJSExceptionWithMessage:(id)arg1 stack:(id)arg2 exceptionId:(id)arg3;
- (void)dealloc;
- (void)loadSourceForBridge:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)sourceURLForBridge:(id)arg1;
- (void)CRNViewControllerDidUsed:(id)arg1;
- (void)CRNViewControllerDidReleased:(id)arg1;
- (void)removeBridgeFromCacheList:(id)arg1;
- (void)cleanBridge:(id)arg1;
- (_Bool)isOldVersionClean;
- (void)performLRUCheck;
- (int)getMaxIdealDirtyBridgeCount;
- (void)bridgeDidLoadSuccess:(id)arg1;
- (void)bridgeDidLoadFailed:(id)arg1;
- (id)bridgeFormCachedList:(id)arg1;
- (id)bridgeForURL:(id)arg1 moduleProvider:(CDUnknownBlockType)arg2 launchOption:(id)arg3;
- (int)emitToggleLoadModuleMessage:(id)arg1 isFromCacheBridge:(_Bool)arg2;
- (id)createNewUnbundleBridge;
- (void)prepareBridgeIfNeed;
- (void)prepareBridgeIfNeedAfterDelay:(double)arg1;
- (void)cacheBridge:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
