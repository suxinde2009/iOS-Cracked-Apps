//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MCGroupChatInteractionObject : NSObject
{
    NSString *_type;
    NSString *_apiName;
    NSString *_apiVersion;
}

@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
