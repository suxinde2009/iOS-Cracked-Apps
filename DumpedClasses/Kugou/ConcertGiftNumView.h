//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class ConcertGiftNumItem, NSArray, NSString, UIButton, UIScrollView;

@interface ConcertGiftNumView : UIView <UIScrollViewDelegate>
{
    id <ConcertGiftNumViewDelegate> _delegate;
    NSArray *_titles;
    UIScrollView *_giftContentView;
    UIButton *_cancleBtn;
    NSArray *_imgTitle;
    NSArray *_numArray;
    ConcertGiftNumItem *_selectedItem;
}

@property(retain, nonatomic) ConcertGiftNumItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSArray *numArray; // @synthesize numArray=_numArray;
@property(retain, nonatomic) NSArray *imgTitle; // @synthesize imgTitle=_imgTitle;
@property(retain, nonatomic) UIButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) UIScrollView *giftContentView; // @synthesize giftContentView=_giftContentView;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak id <ConcertGiftNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)cancelClick:(id)arg1;
- (void)tap:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
