//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightPassengerTravelCardView : UIView
{
    UIView *_cardTitleBGView;
    UIView *_cardContentView;
    UILabel *_card1TitleLabel;
    UILabel *_card1NumLabel;
    UILabel *_card2TitleLabel;
    UILabel *_card2NumLabel;
    UILabel *_placeHolderLabel;
    NSLayoutConstraint *_card1TitleWidthConstraint;
    NSLayoutConstraint *_card1TitleTopConstraint;
    NSLayoutConstraint *_card2TitleWidthConstraint;
    UILabel *_cellCardTitleLabel;
    NSLayoutConstraint *_cellTitleLabelPositionCons;
    NSLayoutConstraint *_titleBGViewWidthCons;
    UIImageView *_iconArrow;
}

+ (double)setupView:(id)arg1 withCardModel1:(id)arg2 cardModel2:(id)arg3;
@property(nonatomic) __weak UIImageView *iconArrow; // @synthesize iconArrow=_iconArrow;
@property(nonatomic) __weak NSLayoutConstraint *titleBGViewWidthCons; // @synthesize titleBGViewWidthCons=_titleBGViewWidthCons;
@property(nonatomic) __weak NSLayoutConstraint *cellTitleLabelPositionCons; // @synthesize cellTitleLabelPositionCons=_cellTitleLabelPositionCons;
@property(retain, nonatomic) UILabel *cellCardTitleLabel; // @synthesize cellCardTitleLabel=_cellCardTitleLabel;
@property(nonatomic) __weak NSLayoutConstraint *card2TitleWidthConstraint; // @synthesize card2TitleWidthConstraint=_card2TitleWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *card1TitleTopConstraint; // @synthesize card1TitleTopConstraint=_card1TitleTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *card1TitleWidthConstraint; // @synthesize card1TitleWidthConstraint=_card1TitleWidthConstraint;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UILabel *card2NumLabel; // @synthesize card2NumLabel=_card2NumLabel;
@property(retain, nonatomic) UILabel *card2TitleLabel; // @synthesize card2TitleLabel=_card2TitleLabel;
@property(retain, nonatomic) UILabel *card1NumLabel; // @synthesize card1NumLabel=_card1NumLabel;
@property(retain, nonatomic) UILabel *card1TitleLabel; // @synthesize card1TitleLabel=_card1TitleLabel;
@property(retain, nonatomic) UIView *cardContentView; // @synthesize cardContentView=_cardContentView;
@property(retain, nonatomic) UIView *cardTitleBGView; // @synthesize cardTitleBGView=_cardTitleBGView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end
