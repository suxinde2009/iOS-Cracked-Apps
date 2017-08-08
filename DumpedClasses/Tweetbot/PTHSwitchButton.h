//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface PTHSwitchButton : UIControl
{
    _Bool _on;
    _Bool _wasOn;
    _Bool _hitKnob;
    struct CGPoint _touchPoint;
    _Bool _didMove;
    UIImageView *_wellImageView;
    UIView *_wellClipView;
    UIImageView *_overlayImageView;
    UIView *_highlightOverlayView;
    UILabel *_onLabel;
    UILabel *_offLabel;
    UIImageView *_onImageView;
    UIImageView *_offImageView;
    double _knobWidth;
    struct CGPoint _wellOffset;
    UIImageView *_backgroundImageView;
    UIImageView *_knobImageView;
}

+ (id)newToolbarSwitch;
+ (id)newAlternateSwitch;
+ (id)newOnOffSwitch;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(readonly, nonatomic) UILabel *offLabel; // @synthesize offLabel=_offLabel;
@property(readonly, nonatomic) UILabel *onLabel; // @synthesize onLabel=_onLabel;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)sendValueDidChange;
- (_Bool)_currentIsOn;
@property(copy, nonatomic) UIImage *offSelectedImage;
@property(copy, nonatomic) UIImage *offImage;
@property(copy, nonatomic) UIImage *onSelectedImage;
@property(copy, nonatomic) UIImage *onImage;
- (void)_updateFrame;
@property(copy, nonatomic) NSString *offTitle;
@property(copy, nonatomic) NSString *onTitle;
- (id)initWithBackgroundImage:(id)arg1 knobImage:(id)arg2;
- (id)initWithWellImage:(id)arg1 overlayImage:(id)arg2;

@end
