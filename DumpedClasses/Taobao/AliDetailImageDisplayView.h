//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSMutableCopying.h"

@class TBDetailPhotoZoomingScrollView, UIImageView;

@interface AliDetailImageDisplayView : UIView <NSMutableCopying>
{
    TBDetailPhotoZoomingScrollView *_zoomingView;
    UIImageView *_photoImageView;
}

@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) TBDetailPhotoZoomingScrollView *zoomingView; // @synthesize zoomingView=_zoomingView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
