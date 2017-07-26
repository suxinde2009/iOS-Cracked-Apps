//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSString;

@interface O2OCommentSuccessModel : O2OHTTPModel
{
    int _version;
    NSString *_tradeNo;
    NSString *_orderBizType;
    NSString *_commentId;
    NSString *_shopName;
    NSString *_shopAddress;
    NSString *_shopLogo;
    NSString *_shopStar;
    NSString *_shopId;
    NSString *_scratchCardUrl;
}

@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *scratchCardUrl; // @synthesize scratchCardUrl=_scratchCardUrl;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *shopStar; // @synthesize shopStar=_shopStar;
@property(retain, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NSString *shopAddress; // @synthesize shopAddress=_shopAddress;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *orderBizType; // @synthesize orderBizType=_orderBizType;
@property(retain, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
- (void).cxx_destruct;
- (_Bool)parseResponse:(id)arg1;
- (id)rpcRequest;
- (SEL)selectorNameForRPCService;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (Class)RPCServiceClass;

@end
