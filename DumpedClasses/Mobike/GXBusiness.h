//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GXPushServer, NSMutableArray, NSString;

@interface GXBusiness : NSObject
{
    NSString *clientId_;
    NSString *lastUploadMsgIdWaitingForAck_;
    NSString *lastUploadDeviceToken_;
    NSString *lastSetTagsMsgIdForAck_;
    NSString *lastSetTagsValue_;
    GXPushServer *server_;
    _Bool _isNullSocketCache;
    _Bool _isNullHttpCache;
    NSMutableArray *_socketCacheArray;
    NSMutableArray *_httpCacheArray;
    double _lastTime_SocketCache;
    double _lastTime_HttpCache;
}

@property(nonatomic) double lastTime_HttpCache; // @synthesize lastTime_HttpCache=_lastTime_HttpCache;
@property(nonatomic) double lastTime_SocketCache; // @synthesize lastTime_SocketCache=_lastTime_SocketCache;
@property(retain, nonatomic) NSMutableArray *httpCacheArray; // @synthesize httpCacheArray=_httpCacheArray;
@property(retain, nonatomic) NSMutableArray *socketCacheArray; // @synthesize socketCacheArray=_socketCacheArray;
@property(nonatomic) _Bool isNullHttpCache; // @synthesize isNullHttpCache=_isNullHttpCache;
@property(nonatomic) _Bool isNullSocketCache; // @synthesize isNullSocketCache=_isNullSocketCache;
- (void).cxx_destruct;
- (void)uploadDataForHttpCacheDB;
- (void)uploadDataForSocketCacheDB;
- (void)notifyReceivedSetModeOfMode:(_Bool)arg1 errorCode:(int)arg2;
- (void)didReceiveForSetBadge:(id)arg1;
- (void)tryUploadSetBadge;
- (void)tryUploadSetTags;
- (_Bool)didReceiveAckMessageWithId:(id)arg1;
- (void)addPhoneInfoWithClientId:(id)arg1 isNowUpdate:(_Bool)arg2;
- (_Bool)ifNeedUploadAddPhoneInfo;
- (void)tryUploadAddPhoneInfo;
- (void)onTimerForBaseManager;
- (void)didChannelEstablishedWithClientId:(id)arg1;
- (void)sdkDidRegisterClientNotification:(id)arg1;
- (void)dealloc;
- (void)stop;
- (void)startup;
- (id)initWithServer:(id)arg1;

@end
