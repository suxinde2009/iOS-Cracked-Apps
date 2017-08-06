//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DataChannel, NSMutableArray, NSRecursiveLock, NSString, NWHostUrl, NWSPDYSession, NWTimer, NWUTChannel, SPDYTraceString;

@interface NWTnetSession : NSObject
{
    int _sessionRunType;
    DataChannel *_channel;
    NWSPDYSession *_sucSession;
    NSMutableArray *_sessions;
    NSMutableArray *_wastes;
    NSMutableArray *_watings;
    NSMutableArray *_sendings;
    int _policyIndx;
    unsigned long long _netStatus;
    int _lazyTag;
    _Bool _isAuth;
    _Bool _stop;
    _Bool _isSuspend;
    _Bool _isLocalDNS;
    NSRecursiveLock *_lock;
    NWUTChannel *_uts;
    SPDYTraceString *_trace;
    id <NWPolicyGroupProtocol> _policyResultList;
    double _sessionBeginTime;
    NSString *_netChangedStr;
    NWTimer *_timer;
    NWHostUrl *_hostUrl;
}

+ (id)netTypeDesc:(unsigned long long)arg1;
+ (id)descState:(int)arg1;
+ (void)initialize;
@property(retain, nonatomic) NWHostUrl *hostUrl; // @synthesize hostUrl=_hostUrl;
- (void).cxx_destruct;
- (void)postACCSChannelFail;
- (void)postACCSChannelSuccess;
- (void)reportOpenSessionStatus:(id)arg1 status:(id)arg2 error:(id)arg3;
- (void)lazyStart;
- (void)reachabilityChanged;
- (_Bool)sendCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3 sslIndex:(unsigned int)arg4;
- (void)waitingHandleFail:(id)arg1;
- (void)waitingHandleSuccess;
- (void)removeURLConnection:(id)arg1;
- (void)connectWithLocalDNS:(id)arg1;
- (void)issueURLConnection:(id)arg1;
- (void)recvCustomFrameType:(unsigned short)arg1 withFlags:(unsigned char)arg2 withData:(id)arg3;
- (_Bool)shouldRunNextSession:(id)arg1;
- (void)onAuthentication:(id)arg1 flags:(_Bool)arg2 sessionError:(id)arg3;
- (void)close:(id)arg1 error:(id)arg2;
- (void)onConnFail:(id)arg1 error:(id)arg2;
- (void)onConnect:(id)arg1;
- (void)cancelOtherSession;
- (void)processSessionSuccessEvent:(id)arg1 refreshPolicy:(_Bool *)arg2;
- (id)getValidSession;
- (_Bool)vaildSessionWithPolicys:(id)arg1;
- (_Bool)vaildSession;
- (_Bool)findAcsConnection:(id)arg1;
- (void)resumeWhenSuspend:(id)arg1 unit:(id)arg2;
- (void)suspend;
- (void)stop:(id)arg1;
- (void)stopWithScenes:(id)arg1;
- (void)start:(int)arg1;
- (void)start;
- (id)currentIP;
- (id)getSessionPolicy;
- (void)runIpPolicyss:(id)arg1;
- (void)runNextSession:(id)arg1;
- (void)runSession;
- (_Bool)whetherLazy;
- (void)resetUTData;
- (void)resetPolicy;
- (void)reset;
- (id)getPolicyResult;
- (void)stopTimer;
- (void)onConnectTimeout;
- (void)startTimer;
- (void)dealloc;
- (id)initWithHostUrl:(id)arg1;
- (void)setSessionRunType:(int)arg1;

@end
