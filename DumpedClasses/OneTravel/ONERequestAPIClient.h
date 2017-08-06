//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPRequestOperationManager, AFHTTPSessionManager, ONENetSecurityPolicy;

@interface ONERequestAPIClient : NSObject
{
    ONENetSecurityPolicy *_policy;
    AFHTTPRequestOperationManager *_httpReqManager;
    AFHTTPSessionManager *_sessionManager;
}

+ (id)clientWithBuilder:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) AFHTTPSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) AFHTTPRequestOperationManager *httpReqManager; // @synthesize httpReqManager=_httpReqManager;
@property(retain, nonatomic) ONENetSecurityPolicy *policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
- (void)enqueueRequest:(id)arg1;

@end
