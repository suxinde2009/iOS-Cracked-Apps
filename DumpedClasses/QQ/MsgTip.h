//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MsgTip : NSObject <NSCoding>
{
    unsigned long long _type;
    unsigned long long _uin;
    NSString *_iconUrl;
    NSString *_content;
    NSString *_schema;
    NSString *_businessInfo;
}

@property(retain, nonatomic) NSString *businessInfo; // @synthesize businessInfo=_businessInfo;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
