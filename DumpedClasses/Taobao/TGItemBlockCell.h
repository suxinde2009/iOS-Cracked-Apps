//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionBlockCell.h"

@class TGItemBlockViewModel, UIImageView, UILabel;

@interface TGItemBlockCell : TGCollectionBlockCell
{
    UIImageView *_imageView;
    UILabel *_likeIconLabel;
    UILabel *_likeCountLabel;
    UILabel *_priceLabel;
    TGItemBlockViewModel *_itemViewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) TGItemBlockViewModel *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UILabel *likeIconLabel; // @synthesize likeIconLabel=_likeIconLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (void)gotoItemBlockCell;
- (void)addTouchAction;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
