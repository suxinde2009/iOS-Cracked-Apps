//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface FXMvBarrageVm : NSObject
{
    long long _totalTime;
    long long _mvId;
    NSArray *_barrageList;
    NSMutableDictionary *_requestingFlag;
}

@property(retain, nonatomic) NSMutableDictionary *requestingFlag; // @synthesize requestingFlag=_requestingFlag;
@property(retain, nonatomic) NSArray *barrageList; // @synthesize barrageList=_barrageList;
@property(nonatomic) long long mvId; // @synthesize mvId=_mvId;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
- (void).cxx_destruct;
- (id)listModelForTime:(long long)arg1;
- (void)finishLoadCommentFromTime:(long long)arg1 list:(id)arg2;
- (void)requestMvCommentFromTime:(long long)arg1 toTime:(long long)arg2;
- (void)addComment:(id)arg1;
- (id)getBarrageInTime:(long long)arg1;
- (void)checkBarrageInTime:(long long)arg1;
- (void)configParam;
- (void)dealloc;
- (id)init;

@end
