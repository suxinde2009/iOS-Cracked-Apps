//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface CDPSpaceFeedbackResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) long long globalOpLogId; // @dynamic globalOpLogId;
@property(readonly) _Bool hasGlobalOpLogId; // @dynamic hasGlobalOpLogId;
@property(readonly) _Bool hasId; // @dynamic hasId;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasUserOpLogId; // @dynamic hasUserOpLogId;
@property(nonatomic) long long id; // @dynamic id;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(nonatomic) _Bool success; // @dynamic success;
@property(nonatomic) long long userOpLogId; // @dynamic userOpLogId;

@end
