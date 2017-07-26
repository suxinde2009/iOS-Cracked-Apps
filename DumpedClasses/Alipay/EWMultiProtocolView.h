//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TTTAttributedLabelDelegate.h"

@class NSArray, NSString, TTTAttributedLabel;

@interface EWMultiProtocolView : UIView <TTTAttributedLabelDelegate>
{
    NSString *_prefixText;
    NSString *_conjunction;
    TTTAttributedLabel *_textLabel;
    CDUnknownBlockType _action;
    NSArray *_protocols;
}

@property(retain, nonatomic) NSArray *protocols; // @synthesize protocols=_protocols;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) TTTAttributedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) NSString *conjunction; // @synthesize conjunction=_conjunction;
@property(retain, nonatomic) NSString *prefixText; // @synthesize prefixText=_prefixText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setProtocols:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
