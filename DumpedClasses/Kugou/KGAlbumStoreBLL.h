//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGAlbumStoreBLL : NSObject
{
}

- (void)queryKGAlbumStoreMonthlyDataWithPage:(long long)arg1 pageSize:(long long)arg2 languageType:(long long)arg3 sortType:(long long)arg4 successCallback:(CDUnknownBlockType)arg5 andErrorCallback:(CDUnknownBlockType)arg6;
- (void)queryKGAlbumStoreWellSellDataWithPage:(long long)arg1 pageSize:(long long)arg2 successCallback:(CDUnknownBlockType)arg3 andErrorCallback:(CDUnknownBlockType)arg4;
- (void)queryKGAlbumStoreRecommendDataWithWellSellPage:(long long)arg1 wellSellpageSize:(long long)arg2 successCallBack:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4;
- (void)queryRecommendBannerDataWithSuccessCallBack:(CDUnknownBlockType)arg1 errorCallback:(CDUnknownBlockType)arg2;

@end
