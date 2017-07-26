//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPSpaceInfo, CDPSpaceView, NSArray, NSDictionary, NSString;

@protocol O2OCDPAdapterPromotionProtocol <NSObject>

@optional
- (void)promotionDataDidFinishLoading:(CDPSpaceInfo *)arg1 spaceCode:(NSString *)arg2;
- (void)promotionDatasDidFinishLoading:(id)arg1 spaceCodes:(NSArray *)arg2 extInfo:(NSDictionary *)arg3;
- (void)promotionViewDidFinishLoading:(CDPSpaceView *)arg1 spaceCode:(NSString *)arg2;
- (void)promotionViewsDidFinishLoading:(NSArray *)arg1 spaceCodes:(NSArray *)arg2;
@end
