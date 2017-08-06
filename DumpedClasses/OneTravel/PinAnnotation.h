//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DiAnnotation.h"

@class NSString, UIView;

@interface PinAnnotation : NSObject <DiAnnotation>
{
    NSString *mName;
    struct CLLocationCoordinate2D mCoordinate;
    _Bool canMaskAnimation;
    _Bool autoAdjustCalloutViewPositon;
    struct CLLocationCoordinate2D coordinate;
}

@property(nonatomic) _Bool autoAdjustCalloutViewPositon; // @synthesize autoAdjustCalloutViewPositon;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate;
@property(nonatomic) _Bool canMaskAnimation; // @synthesize canMaskAnimation;
@property(nonatomic) struct CLLocationCoordinate2D pinCoordinate; // @synthesize pinCoordinate=mCoordinate;
@property(retain, nonatomic) NSString *pinName; // @synthesize pinName=mName;
- (id)subTitle;
- (id)title;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIView *customCalloutView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *imageName;
@property(readonly) Class superclass;

@end
