//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NVMOrderRecommendFood, NVMOrderRecommendShop, NVMSeparatorView, UIButton, UIImageView, UILabel;

@interface NVMOrderRecommendFoodInfoView : UIView
{
    CDUnknownBlockType _pressMoreButtun;
    CDUnknownBlockType _pressFoodInfoView;
    UILabel *_foodNameLabel;
    UILabel *_saleAndRateLabel;
    UILabel *_priceLabel;
    UILabel *_shopNameLabel;
    NVMSeparatorView *_separator;
    UIImageView *_shopLogo;
    UIButton *_moreButtun;
    UIView *_verticalLine;
    UIImageView *_discountIcon;
    NVMOrderRecommendShop *_shop;
    NVMOrderRecommendFood *_food;
}

@property(retain, nonatomic) NVMOrderRecommendFood *food; // @synthesize food=_food;
@property(retain, nonatomic) NVMOrderRecommendShop *shop; // @synthesize shop=_shop;
@property(retain, nonatomic) UIImageView *discountIcon; // @synthesize discountIcon=_discountIcon;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIButton *moreButtun; // @synthesize moreButtun=_moreButtun;
@property(retain, nonatomic) UIImageView *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NVMSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *saleAndRateLabel; // @synthesize saleAndRateLabel=_saleAndRateLabel;
@property(retain, nonatomic) UILabel *foodNameLabel; // @synthesize foodNameLabel=_foodNameLabel;
@property(copy, nonatomic) CDUnknownBlockType pressFoodInfoView; // @synthesize pressFoodInfoView=_pressFoodInfoView;
@property(copy, nonatomic) CDUnknownBlockType pressMoreButtun; // @synthesize pressMoreButtun=_pressMoreButtun;
- (void).cxx_destruct;
- (void)tapFoodView;
- (void)clickMoreButton;
- (void)addAction;
- (void)layoutForDiscoutIcon;
- (void)updateFrames;
- (void)updateWithShop:(id)arg1 andFood:(id)arg2;
- (void)configViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
