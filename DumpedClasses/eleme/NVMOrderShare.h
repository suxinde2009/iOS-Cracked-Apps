//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface NVMOrderShare : NVMModel
{
    NSString *_shareRedEnvelopeURL;
    NSString *_snsShareRedEnvelopeURL;
    NSString *_appIconHash;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *appIconHash; // @synthesize appIconHash=_appIconHash;
@property(copy, nonatomic) NSString *snsShareRedEnvelopeURL; // @synthesize snsShareRedEnvelopeURL=_snsShareRedEnvelopeURL;
@property(copy, nonatomic) NSString *shareRedEnvelopeURL; // @synthesize shareRedEnvelopeURL=_shareRedEnvelopeURL;
- (void).cxx_destruct;
- (_Bool)shouldPopupRedEnvelope;
- (id)defaulIconURL;

@end
