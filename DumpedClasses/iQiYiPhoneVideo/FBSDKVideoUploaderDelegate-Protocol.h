//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKVideoUploader, NSData, NSDictionary, NSError;

@protocol FBSDKVideoUploaderDelegate <NSObject>
- (void)videoUploader:(FBSDKVideoUploader *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoUploader:(FBSDKVideoUploader *)arg1 didCompleteWithResults:(NSDictionary *)arg2;
- (NSData *)videoChunkDataForVideoUploader:(FBSDKVideoUploader *)arg1 startOffset:(unsigned long long)arg2 endOffset:(unsigned long long)arg3;
@end

