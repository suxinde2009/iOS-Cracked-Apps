//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONELogHTTPProtocolDelegate.h"

@class NSDate, NSMutableDictionary, NSOperationQueue, NSString, NSTimer;

@interface ONELogNetworkTraffic : NSObject <ONELogHTTPProtocolDelegate>
{
    _Bool _isLogHttpTrafficEnabled;
    _Bool _isAddTraceIdEnabled;
    _Bool _isLogNewHttpApiStat;
    _Bool _didEventWaring_in5Mins;
    unsigned long long _method;
    unsigned long long _threshold_5Mins;
    unsigned long long _threshold_Day;
    unsigned long long _totalUploadBytes_in5Mins;
    unsigned long long _totalDownloadBytes_in5Mins;
    unsigned long long _totalRequestNum_in5Mins;
    unsigned long long _nowUploadBytes;
    unsigned long long _nowDownloadBytes;
    unsigned long long _nowRequestNum;
    NSDate *_lastCacheDate;
    unsigned long long _lastTotalUploadBytes;
    unsigned long long _lastTotalDownloadBytes;
    unsigned long long _lastTotalRequestNum;
    NSMutableDictionary *_cacheDictionary;
    NSTimer *_timer;
    NSOperationQueue *_queue;
}

+ (void)start;
+ (id)sharedInstance;
+ (void)p_initialize;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
@property(nonatomic) unsigned long long lastTotalRequestNum; // @synthesize lastTotalRequestNum=_lastTotalRequestNum;
@property(nonatomic) unsigned long long lastTotalDownloadBytes; // @synthesize lastTotalDownloadBytes=_lastTotalDownloadBytes;
@property(nonatomic) unsigned long long lastTotalUploadBytes; // @synthesize lastTotalUploadBytes=_lastTotalUploadBytes;
@property(retain, nonatomic) NSDate *lastCacheDate; // @synthesize lastCacheDate=_lastCacheDate;
@property(nonatomic) unsigned long long nowRequestNum; // @synthesize nowRequestNum=_nowRequestNum;
@property(nonatomic) unsigned long long nowDownloadBytes; // @synthesize nowDownloadBytes=_nowDownloadBytes;
@property(nonatomic) unsigned long long nowUploadBytes; // @synthesize nowUploadBytes=_nowUploadBytes;
@property(nonatomic) _Bool didEventWaring_in5Mins; // @synthesize didEventWaring_in5Mins=_didEventWaring_in5Mins;
@property(nonatomic) unsigned long long totalRequestNum_in5Mins; // @synthesize totalRequestNum_in5Mins=_totalRequestNum_in5Mins;
@property(nonatomic) unsigned long long totalDownloadBytes_in5Mins; // @synthesize totalDownloadBytes_in5Mins=_totalDownloadBytes_in5Mins;
@property(nonatomic) unsigned long long totalUploadBytes_in5Mins; // @synthesize totalUploadBytes_in5Mins=_totalUploadBytes_in5Mins;
@property(nonatomic) unsigned long long threshold_Day; // @synthesize threshold_Day=_threshold_Day;
@property(nonatomic) unsigned long long threshold_5Mins; // @synthesize threshold_5Mins=_threshold_5Mins;
@property(nonatomic) _Bool isLogNewHttpApiStat; // @synthesize isLogNewHttpApiStat=_isLogNewHttpApiStat;
@property(nonatomic) _Bool isAddTraceIdEnabled; // @synthesize isAddTraceIdEnabled=_isAddTraceIdEnabled;
@property(nonatomic) _Bool isLogHttpTrafficEnabled; // @synthesize isLogHttpTrafficEnabled=_isLogHttpTrafficEnabled;
@property(nonatomic) unsigned long long method; // @synthesize method=_method;
- (void).cxx_destruct;
- (unsigned long long)totalBytes_in5Mins;
- (unsigned long long)totalBytes;
@property(readonly, nonatomic) _Bool didEventWaring;
- (void)put5MinsOverEvent;
- (void)putDayOverEvent;
- (void)putEventWithInfo:(id)arg1;
- (void)traceRequestCompleteWithInfo:(id)arg1;
- (void)httpProtocol:(id)arg1 requsetCompleteWithInfo:(id)arg2;
- (void)traceRequestCompleteWithRequest:(id)arg1 response:(id)arg2 info:(id)arg3;
- (void)cacheTotalData;
- (void)willTerminate;
- (void)fiveMinutesPoint;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
