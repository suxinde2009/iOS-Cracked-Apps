//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CTChatInsideMsgListResponse : NSObject
{
    unsigned long long _ResultCode;
    NSArray *_MessageList;
    NSArray *_topMsgsServiceID;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSArray *topMsgsServiceID; // @synthesize topMsgsServiceID=_topMsgsServiceID;
@property(retain, nonatomic) NSArray *MessageList; // @synthesize MessageList=_MessageList;
@property(nonatomic) unsigned long long ResultCode; // @synthesize ResultCode=_ResultCode;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end
