//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface QRImageDownloadItem : NSObject
{
    NSMutableArray *_imageItems;
    CDUnknownBlockType _completeHandler;
    CDUnknownBlockType _failHandler;
}

@property(copy, nonatomic) CDUnknownBlockType failHandler; // @synthesize failHandler=_failHandler;
@property(copy, nonatomic) CDUnknownBlockType completeHandler; // @synthesize completeHandler=_completeHandler;
@property(retain, nonatomic) NSMutableArray *imageItems; // @synthesize imageItems=_imageItems;
- (void).cxx_destruct;
- (id)initWithImageItems:(id)arg1 completeHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;

@end

