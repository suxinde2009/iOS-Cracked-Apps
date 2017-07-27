//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QNBBaseImageView.h"

#import "QLGifDecodeImageViewProtocol.h"
#import "QLGifDecodeProtocol.h"

@class CALayer, NSDate, NSString, UIColor, UIImage, UIImageView, UIView;

@interface QLSImageView : QNBBaseImageView <QLGifDecodeProtocol, QLGifDecodeImageViewProtocol>
{
    UIView *_maskView;
    _Bool _autoresizesToImage;
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _fadeAnimation;
    _Bool _noNeedGifAnimation;
    _Bool _useGrayImage;
    _Bool _needShowGifTag;
    _Bool _isRounded;
    int _imageType;
    UIImage *_defaultImage;
    UIColor *_defaultImgColor;
    UIImage *_grayImage;
    UIImage *_oriImage;
    NSDate *_startLoadTime;
    double _ltime;
    double _dtime;
    NSString *_filePath;
    UIImageView *_roundedImage;
    CALayer *_imgTypeTag;
}

@property(retain, nonatomic) CALayer *imgTypeTag; // @synthesize imgTypeTag=_imgTypeTag;
@property(retain, nonatomic) UIImageView *roundedImage; // @synthesize roundedImage=_roundedImage;
@property(nonatomic) _Bool isRounded; // @synthesize isRounded=_isRounded;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) double dtime; // @synthesize dtime=_dtime;
@property(nonatomic) double ltime; // @synthesize ltime=_ltime;
@property(retain, nonatomic) NSDate *startLoadTime; // @synthesize startLoadTime=_startLoadTime;
@property(nonatomic) _Bool needShowGifTag; // @synthesize needShowGifTag=_needShowGifTag;
@property(nonatomic) _Bool useGrayImage; // @synthesize useGrayImage=_useGrayImage;
@property(nonatomic) _Bool noNeedGifAnimation; // @synthesize noNeedGifAnimation=_noNeedGifAnimation;
@property(nonatomic) _Bool fadeAnimation; // @synthesize fadeAnimation=_fadeAnimation;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool autoresizesToImage; // @synthesize autoresizesToImage=_autoresizesToImage;
@property(retain, nonatomic) UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(retain, nonatomic) UIImage *grayImage; // @synthesize grayImage=_grayImage;
@property(retain, nonatomic) UIColor *defaultImgColor; // @synthesize defaultImgColor=_defaultImgColor;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;
- (void)doFirstFrameImageFinished:(id)arg1;
- (void)doGifFinishDecoded:(id)arg1 animationDuration:(double)arg2;
- (id)imageUrlForGifDecode;
- (id)imageFilePath;
- (_Bool)isAnimating;
- (void)setHighlighted:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)didLoadImageFromCache:(id)arg1 forURL:(id)arg2;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)didStartLoadImageForURL:(id)arg1;
- (_Bool)shouldAsyncLoadAnimatedImageForGif;
- (void)updateImage:(id)arg1;
- (void)unsetImage;
- (void)showAnimation;
- (void)stopLoading;
- (void)reload;
- (void)setRoundedWithRadius:(double)arg1 Rectsize:(struct CGSize)arg2 BackgroundColor:(id)arg3;
- (void)addSubview:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setUrlPath:(id)arg1 filePath:(id)arg2;
- (id)urlPath;
- (void)setUrlPath:(id)arg1;
- (void)didSetDefaultImage;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
