//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EMFileLogger;

@interface EMLogServer : NSObject
{
    EMFileLogger *_fileLogger;
    EMFileLogger *_statisticLogger;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) EMFileLogger *statisticLogger; // @synthesize statisticLogger=_statisticLogger;
- (void).cxx_destruct;
- (void)stopStatisticLogger;
- (void)startStatisticLogger;
- (void)stopLogger;
- (void)startLogger;
- (void)logException:(id)arg1;
- (void)enableUncaughtExceptionHandler;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

