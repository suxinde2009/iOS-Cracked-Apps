//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTitleValueCell.h"

@class CTImageView, NSString, UILabel;

@interface CTPaymentMethodCell : CTTitleValueCell
{
    _Bool _isLimit;
    NSString *_cardNumber;
    UILabel *_titleLabel;
    NSString *_title;
    UILabel *_cardNumLabel;
    CTImageView *_indentifierImageView;
    UILabel *_limitLabel;
}

@property(retain, nonatomic) UILabel *limitLabel; // @synthesize limitLabel=_limitLabel;
@property(retain, nonatomic) CTImageView *indentifierImageView; // @synthesize indentifierImageView=_indentifierImageView;
@property(retain, nonatomic) UILabel *cardNumLabel; // @synthesize cardNumLabel=_cardNumLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(nonatomic) _Bool isLimit; // @synthesize isLimit=_isLimit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
