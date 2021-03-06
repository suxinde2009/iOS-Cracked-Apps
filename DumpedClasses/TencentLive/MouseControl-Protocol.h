//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MouseControl <NSObject>
- (void)scroll:(struct CGVector)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)move:(struct CGVector)arg1 success:(void (^)(id))arg2 failure:(void (^)(NSError *))arg3;
- (void)clickWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (void)disconnectMouse;
- (void)connectMouseWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (int)mouseControlPriority;
- (id <MouseControl>)mouseControl;
@end

