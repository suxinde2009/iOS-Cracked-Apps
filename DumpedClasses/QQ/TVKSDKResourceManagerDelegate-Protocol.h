//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol TVKSDKResourceManagerDelegate <NSObject>

@optional
- (void)cleanStorage:(int)arg1;
- (void)clearMemory:(int)arg1;
- (void)didAppWillForeground;
- (void)didAppWillPending;
- (void)setNetWorkState:(int)arg1;
@end
