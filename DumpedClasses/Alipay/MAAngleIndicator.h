//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, CAShapeLayer, UIImage, UIImageView;

@interface MAAngleIndicator : UIView
{
    double _radius;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_maskLayer;
    UIImageView *_overlapImageView;
    double _angle;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(retain, nonatomic) UIImageView *overlapImageView; // @synthesize overlapImageView=_overlapImageView;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (id)initWithRadius:(double)arg1;
@property(retain, nonatomic) UIImage *overlapImage;
- (void)updateAngle;

@end
