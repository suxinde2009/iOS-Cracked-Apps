//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UILabel;

@interface SSendWordCell : UICollectionViewCell
{
    long long _cellStatus;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long cellStatus; // @synthesize cellStatus=_cellStatus;
- (void).cxx_destruct;
- (void)updateCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
