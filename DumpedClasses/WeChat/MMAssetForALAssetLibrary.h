//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAsset.h"

#import "MMAssetBigImageDelegate.h"

@class ALAsset, AVAsset, CLLocation, EditImageAttr, EditImageLogicController, NSMutableArray, NSNumber, NSString;

@interface MMAssetForALAssetLibrary : MMAsset <MMAssetBigImageDelegate>
{
    id <MMAssetBigImageDelegate> m_bigImageDelegate;
    _Bool m_isNeedOriginImage;
    _Bool m_hasStartInitAsset;
    ALAsset *m_asset;
    NSString *m_assetUrlForSystem;
    NSMutableArray *m_bigImageResultBlocks;
    NSMutableArray *m_bigImageErrorBlocks;
    NSMutableArray *m_bigImageProcessBlocks;
    NSMutableArray *m_thumbImageResultBlocks;
    NSMutableArray *m_thumbImageErrorBlocks;
    CLLocation *m_location;
    EditImageAttr *m_editImageAttr;
    EditImageLogicController *m_editImageLogicController;
    AVAsset *_avAsset;
    NSNumber *_originalVideoFileSize;
}

+ (id)NormalImage:(id)arg1 quality:(double)arg2 edgeLimit:(double)arg3;
+ (id)LongImage:(id)arg1 quality:(double)arg2 edgeLimit:(double)arg3;
+ (id)ImagePreventRecursiveCompress:(id)arg1 quality:(double)arg2 minEarnings:(double)arg3 normalImageSizeLimit:(unsigned long long)arg4 longImageSizeLimit:(unsigned long long)arg5;
+ (_Bool)shouldPreventRecursiveCompress:(id)arg1 edgeLimit:(double)arg2;
+ (id)EditImage:(id)arg1 quality:(double)arg2;
+ (id)getOriginImageDataFromRepresentaion:(id)arg1;
+ (id)fitShortEdgeForAsset:(id)arg1 toLongEdge:(double)arg2;
+ (_Bool)isGifForAsset:(id)arg1;
@property(retain, nonatomic) NSNumber *originalVideoFileSize; // @synthesize originalVideoFileSize=_originalVideoFileSize;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(nonatomic) __weak EditImageLogicController *m_editImageLogicController; // @synthesize m_editImageLogicController;
@property(retain, nonatomic) EditImageAttr *m_editImageAttr; // @synthesize m_editImageAttr;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
@property(nonatomic) _Bool m_hasStartInitAsset; // @synthesize m_hasStartInitAsset;
- (void)setM_isNeedOriginImage:(_Bool)arg1;
- (_Bool)m_isNeedOriginImage;
@property(retain, nonatomic) NSMutableArray *m_thumbImageErrorBlocks; // @synthesize m_thumbImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_thumbImageResultBlocks; // @synthesize m_thumbImageResultBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageProcessBlocks; // @synthesize m_bigImageProcessBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageErrorBlocks; // @synthesize m_bigImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageResultBlocks; // @synthesize m_bigImageResultBlocks;
@property(retain, nonatomic) NSString *m_assetUrlForSystem; // @synthesize m_assetUrlForSystem;
@property(retain, nonatomic) ALAsset *m_asset; // @synthesize m_asset;
- (void).cxx_destruct;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (id)videoDuration;
- (_Bool)isVideo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onGetBigImageError;
- (void)onGetBigImage:(id)arg1 data:(id)arg2;
- (void)callErrorBlocks;
- (void)callResultBlocksWith:(id)arg1 imageData:(id)arg2;
- (_Bool)needGetAssetFromLibraryWithCompressConfig:(id)arg1;
- (void)onGetImageErrorFromAsset;
- (void)onGetImageFromAsset:(id)arg1 data:(id)arg2;
- (void)onGetImageAsset:(id)arg1 compressConfig:(id)arg2;
- (void)setBigImageDelegate:(id)arg1;
- (id)getOriginImageDataSize;
- (_Bool)isGif;
- (_Bool)isPicture;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)retriveLocation;
- (id)retriveAssetUrl;
- (id)initWithAsset:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
