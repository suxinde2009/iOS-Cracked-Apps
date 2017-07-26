//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol QQGroupStoryPlayListProtocol <NSObject>
- (void)playViewControllerDestroy;
- (NSArray *)getOldGroupVideoPlayList;
- (NSArray *)getNewGroupVideoPlayList;

@optional
- (NSString *)feedIDForStoryID:(NSString *)arg1;
- (void)requestGroupStoryList:(_Bool)arg1;
@end
