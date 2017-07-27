//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRequestModel.h"

@class MoabCache, NSMutableArray, NSString, QLASIHTTPRequest;

@interface QLHollywoodChannelModel : QLRequestModel
{
    MoabCache *_cahce;
    int _type;
    int _version;
    NSMutableArray *_aryChannels;
    NSString *_dataKey;
    QLASIHTTPRequest *_dataRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(copy, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(nonatomic) int version; // @synthesize version=_version;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSMutableArray *aryChannels; // @synthesize aryChannels=_aryChannels;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)dealloc;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (id)init;

@end
