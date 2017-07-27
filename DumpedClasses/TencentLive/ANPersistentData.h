//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class ANPersistentStrategy, NSDate, NSMutableArray, NSRecursiveLock, NSString, NSTimer;

@interface ANPersistentData : NSObject <NSCoding, NSCopying>
{
    NSRecursiveLock *_dataLock;
    _Bool _isArchiving;
    NSTimer *_archiveTimer;
    NSString *_domain;
    NSString *_version;
    NSString *_name;
    NSDate *_createdTime;
    NSDate *_modifiedTime;
    ANPersistentStrategy *_strategy;
    NSMutableArray *_observers;
}

+ (id)strategy:(unsigned int)arg1;
+ (void)clearCache:(id)arg1 level:(unsigned int)arg2;
+ (id)data:(id)arg1 version:(id)arg2 domain:(id)arg3 level:(unsigned int)arg4;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) ANPersistentStrategy *strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) NSDate *modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(retain, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)archive:(id)arg1;
- (id)archiveQueue;
- (void)archiveOperation:(id)arg1;
- (void)archiveTimerOperation;
- (void)archiveDidFinish;
- (void)archiveWillStart;
- (void)clearData;
- (_Bool)isArchiving;
- (_Bool)isWillArchive;
- (void)fireArchive;
- (void)archiveNow;
- (void)setNeedToArchive:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end
