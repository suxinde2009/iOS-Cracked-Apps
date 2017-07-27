//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, QBPopupMenuOverlayView, UIImage, UIImageView;

@interface QBPopupMenu : UIView
{
    _Bool _animationEnabled;
    id <QBPopupMenuDelegate> _delegate;
    NSArray *_items;
    double _cornerRadius;
    double _arrowSize;
    double _targetWidth;
    UIImage *_backgroundImage;
    QBPopupMenuOverlayView *_overlayView;
    UIImage *_popupImage;
    UIImage *_highlightedPopupImage;
    UIImageView *_backgroundView;
}

@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImage *highlightedPopupImage; // @synthesize highlightedPopupImage=_highlightedPopupImage;
@property(retain, nonatomic) UIImage *popupImage; // @synthesize popupImage=_popupImage;
@property(retain, nonatomic) QBPopupMenuOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(nonatomic, getter=isAnimationEnabled) _Bool animationEnabled; // @synthesize animationEnabled=_animationEnabled;
@property(nonatomic) double arrowSize; // @synthesize arrowSize=_arrowSize;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <QBPopupMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawLeftSeparatorInContext:(struct CGContext *)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 state:(long long)arg4;
- (void)drawRightSeparatorInContext:(struct CGContext *)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 state:(long long)arg4;
- (id)popupImageForState:(long long)arg1;
- (id)croppedImageFromImage:(id)arg1 rect:(struct CGRect)arg2;
- (struct CGSize)actualSize;
- (void)performAction:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)decorateBackgroundImage:(struct CGSize)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
