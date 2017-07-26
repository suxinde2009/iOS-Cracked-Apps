//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, APNewFindContactMsg, NSArray, NSString;

@protocol APRecommendMsgProxy <APDAOProtocol>
- (NSArray *)queryAfterMessages:(long long)arg1 limit:(long long)arg2;
- (APDAOResult *)insertRecommendMsgListSyncly:(NSArray *)arg1;
- (APDAOResult *)deleteAllMsgs;
- (APDAOResult *)deleteMsgWithUserIDs:(NSArray *)arg1;
- (APDAOResult *)deleteMsgsWithUserID:(NSString *)arg1;
- (NSArray *)queryLastestMessage;
- (APDAOResult *)insertRecommendMsgList:(NSArray *)arg1;
- (APDAOResult *)insertRecommendMsg:(APNewFindContactMsg *)arg1;
@end
