//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface NJPerformanceMonitor : NSObject
{
    _Bool isSimulator_;
    NSString *machineType_;
    NSString *clientId_;
    NSDateFormatter *dateFormatter_;
    NSLock *pageStayTimeLock_;
    NSObject<OS_dispatch_queue> *_searialQueue;
    int _payTotalCount;
    int _payFailedCount;
    int _currentPageTraceType;
    NSString *_departCity;
    NSString *_arriveCity;
    NSString *_departDate;
    NSString *_arriveDate;
    NSString *_tripType;
    NSString *_segmentNo;
    NSString *_serviceOrder;
    NSString *_departCity2;
    NSString *_arriveCity2;
    NSString *_departDate2;
    NSString *_arriveDate2;
    NSString *_tripType2;
    NSString *_segmentNo2;
    NSString *_serviceOrder2;
    NSString *_touchBeginTime2;
    NSString *_touchEndTime2;
    NSString *_pageStopTime;
    NSString *_pageResumeTime;
    NSString *_keyStringListSearch;
    NSString *_touchBeginTime;
    NSString *_touchEndTime;
    NSString *_jumpFinishTime;
    NSString *_buildRequestFinishTime;
    NSString *_serializeFinishTime;
    NSString *_serviceFinishTime;
    NSString *_unserializeFinishTime;
    NSString *_serviceSuccessCallBackStartTime;
    NSString *_serviceFailCallBackStartTime;
    NSString *_fillViewModelFinishTime;
    NSString *_viewReloadFinishTime;
    NSString *_messageToken;
    NSString *_errorCode;
    NSString *_serverErrorCode;
    NSString *_jumpFinishTime2;
    NSString *_buildRequestFinishTime2;
    NSString *_serializeFinishTime2;
    NSString *_serviceFinishTime2;
    NSString *_unserializeFinishTime2;
    NSString *_serviceSuccessCallBackStartTime2;
    NSString *_serviceFailCallBackStartTime2;
    NSString *_fillViewModelFinishTime2;
    NSString *_viewReloadFinishTime2;
    NSMutableArray *_interMiddlePageToFillinArray;
    NSMutableArray *_interFillinPageToPaymentArray;
    NSMutableArray *_interMiddlePageToFillinSendArray;
    NSMutableArray *_interFillinPageToPaymentSendArray;
    NSMutableArray *_inlandMiddlePageToFillinArray;
    NSMutableArray *_inlandFillinPageToPaymentArray;
    NSMutableArray *_inlandMiddlePageToFillinSendArray;
    NSMutableArray *_inlandFillinPageToPaymentSendArray;
    NSMutableArray *_inlandConfirmPageToPaymentArray;
    NSMutableArray *_inlandConfirmPageToPaymentSendArray;
    NSMutableArray *_flightListToMiddlePageArray;
    NSString *_pageStayTimeLogString;
}

+ (void)clearFlightListToMidPageArrayArray;
+ (void)sendAndClearFlightListToMidPageArrayDataWithPageType:(int)arg1;
+ (void)clearFlightPaymentCountData;
+ (void)sendAndClearFlightPaymentCountDataWithPageType:(int)arg1;
+ (void)addObjectsOfFlightListToMidPageArrayWithKey:(id)arg1 value:(id)arg2;
+ (void)addObjectsOfFlightListToMidPageArrayWithKey:(id)arg1;
+ (id)flightListToMiddlePageArray;
+ (void)clearInlandConfirmPayArray;
+ (void)sendAndClearInlandConfirmPayData;
+ (void)addObjectsToInlandConformPayArrayWithKey:(id)arg1 value:(id)arg2;
+ (void)addObjectsToInlandConformPayArrayWithKey:(id)arg1;
+ (void)sendAndClearInlandPayData;
+ (void)sendAndClearInlandFillinData;
+ (void)clearInlandPayArray;
+ (void)clearInlandFillinArray;
+ (void)clearInlandListData;
+ (void)addObjectsToInlandPayArrayWithKey:(id)arg1 value:(id)arg2;
+ (void)addObjectsToInlandFillinArrayWithKey:(id)arg1 value:(id)arg2;
+ (void)addObjectsToInlandPayArrayWithKey:(id)arg1;
+ (void)addObjectsToInlandFillinArrayWithKey:(id)arg1;
+ (id)inlandMiddlePageToFillinArray;
+ (void)sendAndClearInterPayData;
+ (void)sendAndClearInterFillinData;
+ (void)clearInterPayArray;
+ (void)clearInterFillinArray;
+ (void)clearInterListSecondData;
+ (void)clearInterListFirstData;
+ (void)addObjectsToInterPayArrayWithKey:(id)arg1 value:(id)arg2;
+ (void)addObjectsToInterFillinArrayWithKey:(id)arg1 value:(id)arg2;
+ (void)addObjectsToInterPayArrayWithKey:(id)arg1;
+ (void)addObjectsToInterFillinArrayWithKey:(id)arg1;
+ (id)interMiddlePageToFillinArray;
+ (void)recordLoadTimeWithPageName:(id)arg1;
+ (void)setupServerErrorCode:(int)arg1;
+ (void)setupErrorCode:(int)arg1;
+ (void)setupMessageToken:(id)arg1;
+ (void)setupViewReloadTime;
+ (void)setupFillViewModelTime;
+ (void)setupServiceFailCallBackStartTime;
+ (void)setupServiceSuccessCallBackStartTime;
+ (void)setupBuildRequestTime;
+ (void)setupJumpTime;
+ (void)setupTouchBeginAndEndTime;
+ (void)setupTouchEndTime;
+ (void)setupTouchBeginTime;
+ (void)setupPageResumeTime;
+ (void)setupStopTimeExt:(int)arg1 withMonite:(id)arg2;
+ (void)setupPageStopTime;
+ (void)setupKeyStringListSearchWithIsCombine:(_Bool)arg1;
+ (void)initAllArributes;
+ (_Bool)isSimulator;
+ (id)sharedInstance;
+ (void)clearBufferAndSendLog;
+ (void)logDidDisappearTimeWithPageId:(int)arg1;
+ (void)logDidAppearTimeWithPageId:(int)arg1;
@property(nonatomic) int currentPageTraceType; // @synthesize currentPageTraceType=_currentPageTraceType;
@property(retain, nonatomic) NSString *pageStayTimeLogString; // @synthesize pageStayTimeLogString=_pageStayTimeLogString;
@property(retain, nonatomic) NSMutableArray *flightListToMiddlePageArray; // @synthesize flightListToMiddlePageArray=_flightListToMiddlePageArray;
@property(retain, nonatomic) NSMutableArray *inlandConfirmPageToPaymentSendArray; // @synthesize inlandConfirmPageToPaymentSendArray=_inlandConfirmPageToPaymentSendArray;
@property(retain, nonatomic) NSMutableArray *inlandConfirmPageToPaymentArray; // @synthesize inlandConfirmPageToPaymentArray=_inlandConfirmPageToPaymentArray;
@property(retain, nonatomic) NSMutableArray *inlandFillinPageToPaymentSendArray; // @synthesize inlandFillinPageToPaymentSendArray=_inlandFillinPageToPaymentSendArray;
@property(retain, nonatomic) NSMutableArray *inlandMiddlePageToFillinSendArray; // @synthesize inlandMiddlePageToFillinSendArray=_inlandMiddlePageToFillinSendArray;
@property(retain, nonatomic) NSMutableArray *inlandFillinPageToPaymentArray; // @synthesize inlandFillinPageToPaymentArray=_inlandFillinPageToPaymentArray;
@property(retain, nonatomic) NSMutableArray *inlandMiddlePageToFillinArray; // @synthesize inlandMiddlePageToFillinArray=_inlandMiddlePageToFillinArray;
@property(retain, nonatomic) NSMutableArray *interFillinPageToPaymentSendArray; // @synthesize interFillinPageToPaymentSendArray=_interFillinPageToPaymentSendArray;
@property(retain, nonatomic) NSMutableArray *interMiddlePageToFillinSendArray; // @synthesize interMiddlePageToFillinSendArray=_interMiddlePageToFillinSendArray;
@property(retain, nonatomic) NSMutableArray *interFillinPageToPaymentArray; // @synthesize interFillinPageToPaymentArray=_interFillinPageToPaymentArray;
@property(retain, nonatomic) NSMutableArray *interMiddlePageToFillinArray; // @synthesize interMiddlePageToFillinArray=_interMiddlePageToFillinArray;
@property(copy, nonatomic) NSString *viewReloadFinishTime2; // @synthesize viewReloadFinishTime2=_viewReloadFinishTime2;
@property(copy, nonatomic) NSString *fillViewModelFinishTime2; // @synthesize fillViewModelFinishTime2=_fillViewModelFinishTime2;
@property(copy, nonatomic) NSString *serviceFailCallBackStartTime2; // @synthesize serviceFailCallBackStartTime2=_serviceFailCallBackStartTime2;
@property(copy, nonatomic) NSString *serviceSuccessCallBackStartTime2; // @synthesize serviceSuccessCallBackStartTime2=_serviceSuccessCallBackStartTime2;
@property(copy, nonatomic) NSString *unserializeFinishTime2; // @synthesize unserializeFinishTime2=_unserializeFinishTime2;
@property(copy, nonatomic) NSString *serviceFinishTime2; // @synthesize serviceFinishTime2=_serviceFinishTime2;
@property(copy, nonatomic) NSString *serializeFinishTime2; // @synthesize serializeFinishTime2=_serializeFinishTime2;
@property(copy, nonatomic) NSString *buildRequestFinishTime2; // @synthesize buildRequestFinishTime2=_buildRequestFinishTime2;
@property(copy, nonatomic) NSString *jumpFinishTime2; // @synthesize jumpFinishTime2=_jumpFinishTime2;
@property(copy, nonatomic) NSString *serverErrorCode; // @synthesize serverErrorCode=_serverErrorCode;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *messageToken; // @synthesize messageToken=_messageToken;
@property(copy, nonatomic) NSString *viewReloadFinishTime; // @synthesize viewReloadFinishTime=_viewReloadFinishTime;
@property(copy, nonatomic) NSString *fillViewModelFinishTime; // @synthesize fillViewModelFinishTime=_fillViewModelFinishTime;
@property(copy, nonatomic) NSString *serviceFailCallBackStartTime; // @synthesize serviceFailCallBackStartTime=_serviceFailCallBackStartTime;
@property(copy, nonatomic) NSString *serviceSuccessCallBackStartTime; // @synthesize serviceSuccessCallBackStartTime=_serviceSuccessCallBackStartTime;
@property(copy, nonatomic) NSString *unserializeFinishTime; // @synthesize unserializeFinishTime=_unserializeFinishTime;
@property(copy, nonatomic) NSString *serviceFinishTime; // @synthesize serviceFinishTime=_serviceFinishTime;
@property(copy, nonatomic) NSString *serializeFinishTime; // @synthesize serializeFinishTime=_serializeFinishTime;
@property(copy, nonatomic) NSString *buildRequestFinishTime; // @synthesize buildRequestFinishTime=_buildRequestFinishTime;
@property(copy, nonatomic) NSString *jumpFinishTime; // @synthesize jumpFinishTime=_jumpFinishTime;
@property(copy, nonatomic) NSString *touchEndTime; // @synthesize touchEndTime=_touchEndTime;
@property(copy, nonatomic) NSString *touchBeginTime; // @synthesize touchBeginTime=_touchBeginTime;
@property(copy, nonatomic) NSString *keyStringListSearch; // @synthesize keyStringListSearch=_keyStringListSearch;
@property(copy, nonatomic) NSString *pageResumeTime; // @synthesize pageResumeTime=_pageResumeTime;
@property(copy, nonatomic) NSString *pageStopTime; // @synthesize pageStopTime=_pageStopTime;
@property(nonatomic) int payFailedCount; // @synthesize payFailedCount=_payFailedCount;
@property(nonatomic) int payTotalCount; // @synthesize payTotalCount=_payTotalCount;
@property(copy, nonatomic) NSString *touchEndTime2; // @synthesize touchEndTime2=_touchEndTime2;
@property(copy, nonatomic) NSString *touchBeginTime2; // @synthesize touchBeginTime2=_touchBeginTime2;
@property(copy, nonatomic) NSString *serviceOrder2; // @synthesize serviceOrder2=_serviceOrder2;
@property(copy, nonatomic) NSString *segmentNo2; // @synthesize segmentNo2=_segmentNo2;
@property(copy, nonatomic) NSString *tripType2; // @synthesize tripType2=_tripType2;
@property(copy, nonatomic) NSString *arriveDate2; // @synthesize arriveDate2=_arriveDate2;
@property(copy, nonatomic) NSString *departDate2; // @synthesize departDate2=_departDate2;
@property(copy, nonatomic) NSString *arriveCity2; // @synthesize arriveCity2=_arriveCity2;
@property(copy, nonatomic) NSString *departCity2; // @synthesize departCity2=_departCity2;
@property(copy, nonatomic) NSString *serviceOrder; // @synthesize serviceOrder=_serviceOrder;
@property(copy, nonatomic) NSString *segmentNo; // @synthesize segmentNo=_segmentNo;
@property(copy, nonatomic) NSString *tripType; // @synthesize tripType=_tripType;
@property(copy, nonatomic) NSString *arriveDate; // @synthesize arriveDate=_arriveDate;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate=_departDate;
@property(copy, nonatomic) NSString *arriveCity; // @synthesize arriveCity=_arriveCity;
@property(copy, nonatomic) NSString *departCity; // @synthesize departCity=_departCity;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=dateFormatter_;
- (void).cxx_destruct;
- (long long)threadSafeCountWithArray:(id)arg1;
- (id)threadSafeCopyArrayWithArray:(id)arg1;
- (id)threadSafeArrayWithArray:(id)arg1;
- (void)threadSafeRemoveAllObjectsFromArray:(id)arg1;
- (void)threadSafeAddObjectToArray:(id)arg1 withObject:(id)arg2;
- (void)recordPageName:(id)arg1;
- (void)recordPageName:(id)arg1 viewTime:(double)arg2 deserializeTime:(double)arg3 showdataTime:(double)arg4;
- (void)unlock;
- (void)lock;
- (_Bool)isSimulator;
- (id)clientId;
- (void)appDidBecomeActive:(id)arg1;
- (void)initData;
- (id)init;
- (void)dealloc;
- (void)clearBufferAndSendLog;
- (void)appReturnToHomePage:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)logTimeWithPageId:(int)arg1 type:(int)arg2;
- (void)logDidDisappearTimeWithPageId:(int)arg1;
- (void)logDidAppearTimeWithPageId:(int)arg1;

@end
