//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, QLBNormalLabel, QLBanabaItem, QLSImageView, UIColor, UIFont, UIImageView, UILabel;
@protocol QLBanabaLabelDelegate;

@interface QLBanabaLabel : UIView
{
    _Bool onceActionAtCurrentScreenShow;
    NSString *_iconURL;
    _Bool doingAnimation;
    double cachePerfectTimeInterval;
    _Bool nomalChannelSameSpeed;
    UIFont *_defaultFont;
    _Bool _groupAnimation;
    _Bool _isRichText;
    int _style;
    id <QLBanabaLabelDelegate> _delegate;
    NSString *_commentID;
    QLSImageView *_imageView;
    UILabel *_upCountLbl;
    QLBanabaItem *_banabaMoveItem;
    UIView *_canvas;
    long long _trackTag;
    UIImageView *_borderBgViewOfMine;
    UIImageView *_bgImgView;
    UIView *_seperatorView;
    UIImageView *_zanImgView;
    UIImageView *_zanPlusView;
    QLBNormalLabel *_normalLabel;
    NSTimer *_starBanabaContinueTimer;
    NSTimer *_starBanabaStopTimer;
    NSTimer *_leftScreenTimer;
    double _startAnimateTime;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double startAnimateTime; // @synthesize startAnimateTime=_startAnimateTime;
@property(retain, nonatomic) NSTimer *leftScreenTimer; // @synthesize leftScreenTimer=_leftScreenTimer;
@property(retain, nonatomic) NSTimer *starBanabaStopTimer; // @synthesize starBanabaStopTimer=_starBanabaStopTimer;
@property(retain, nonatomic) NSTimer *starBanabaContinueTimer; // @synthesize starBanabaContinueTimer=_starBanabaContinueTimer;
@property(retain, nonatomic) QLBNormalLabel *normalLabel; // @synthesize normalLabel=_normalLabel;
@property _Bool isRichText; // @synthesize isRichText=_isRichText;
@property(retain, nonatomic) UIImageView *zanPlusView; // @synthesize zanPlusView=_zanPlusView;
@property(retain, nonatomic) UIImageView *zanImgView; // @synthesize zanImgView=_zanImgView;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) UIImageView *borderBgViewOfMine; // @synthesize borderBgViewOfMine=_borderBgViewOfMine;
@property(readonly, nonatomic) _Bool groupAnimation; // @synthesize groupAnimation=_groupAnimation;
@property(nonatomic) long long trackTag; // @synthesize trackTag=_trackTag;
@property(nonatomic) UIView *canvas; // @synthesize canvas=_canvas;
@property(copy, nonatomic) QLBanabaItem *banabaMoveItem; // @synthesize banabaMoveItem=_banabaMoveItem;
@property(retain, nonatomic) UILabel *upCountLbl; // @synthesize upCountLbl=_upCountLbl;
@property(retain, nonatomic) QLSImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) id <QLBanabaLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)commitAnimationsOfStarBanaba:(double)arg1;
- (void)commitAnimations:(double)arg1 withChannelTag:(unsigned long long)arg2;
- (void)commitAnimationsOnGroup:(double)arg1;
- (void)commitAnimations:(double)arg1;
- (void)updateUpCountLbl:(long long)arg1;
- (void)configureLabelWithBanabaItem:(id)arg1 onCanvas:(id)arg2 atChannelPoint:(struct CGPoint)arg3;
- (void)configureLabelWithCommentID:(id)arg1;
- (double)perferctCloseTime:(double)arg1;
@property(readonly, nonatomic, getter=theMoveColor) int moveColor;
@property(readonly, nonatomic, getter=isLabelOnScreen) _Bool labelOnScreen;
- (struct CGSize)sizeWidthByContent:(id)arg1;
- (void)pauseAnimate;
- (void)jumpAnimate:(double)arg1;
- (void)startAnimate;
- (void)stopAnimate;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)caculateLeftScreenMediaTime;
- (void)didFinsihAnimation;
- (void)doRollBackAnimation;
- (void)handleTap:(id)arg1;
- (void)StarZanAnimation;
- (void)bubbleAnimate;
@property(copy, nonatomic) NSString *iconURL;
- (void)releaseLeftScreenTimer;
- (void)releaseTimer;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long textAlignment; // @dynamic textAlignment;
@property(nonatomic) struct CGSize shadowOffset; // @dynamic shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @dynamic shadowColor;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (void)checkAndChangeViewLeavel;

@end
