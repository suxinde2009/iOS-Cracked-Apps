//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SSThemedLabel, TTImageInfosModel, TTImageView;

@interface ExploreCollectionBookCell : UICollectionViewCell
{
    TTImageView *_coverImageView;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_descriLabel;
    TTImageInfosModel *_imageInfoModel;
}

@property(retain, nonatomic) TTImageInfosModel *imageInfoModel; // @synthesize imageInfoModel=_imageInfoModel;
@property(retain, nonatomic) SSThemedLabel *descriLabel; // @synthesize descriLabel=_descriLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)setupDataSourceWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)tt_themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
