//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface ACDSUpdateLogDispatcher : NSObject
{
    id <ACDSUpdatelogConsumerProtocol> _consumer;
    NSOperationQueue *_processTaskQueue;
    NSRecursiveLock *_queueLock;
    NSMutableDictionary *_taskDic;
}

+ (id)operationKeyInRuntime:(id)arg1 withUserId:(id)arg2;
+ (void)endTask;
+ (void)startTask;
+ (void)removeTask:(id)arg1 withUserId:(id)arg2;
+ (void)checkClientIsConfict:(id)arg1 subStatus:(int)arg2;
+ (void)preCheckCommand:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)registeUpdatelogConsumer:(id)arg1;
+ (void)processUpdateLogFromDB:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)processUpdateLogFromNet:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)triggerMessageConsuming:(id)arg1 withUserId:(id)arg2 withIsBroadcast:(id)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *taskDic; // @synthesize taskDic=_taskDic;
@property(retain, nonatomic) NSRecursiveLock *queueLock; // @synthesize queueLock=_queueLock;
@property(retain, nonatomic) NSOperationQueue *processTaskQueue; // @synthesize processTaskQueue=_processTaskQueue;
@property(retain, nonatomic) id <ACDSUpdatelogConsumerProtocol> consumer; // @synthesize consumer=_consumer;
- (void).cxx_destruct;
- (void)doRemoveTask:(id)arg1 withUserId:(id)arg2;
- (id)startUpdatelogOperation:(id)arg1 withDs:(id)arg2 withHightPrioItem:(id)arg3;

@end
