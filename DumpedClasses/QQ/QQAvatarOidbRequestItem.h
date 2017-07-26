//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface QQAvatarOidbRequestItem : SAMRequestItem
{
    NSArray *_uinList;
    NSArray *_tinyIdList;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *tinyIdList; // @synthesize tinyIdList=_tinyIdList;
@property(readonly, nonatomic) NSArray *uinList; // @synthesize uinList=_uinList;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)description;
- (id)serviceCmd;
- (id)initWithTinyIdList:(id)arg1;
- (id)initWithUinList:(id)arg1 type:(int)arg2;

@end
