//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface BEEResultView : UIView
{
    NSArray *_items;
    NSMutableArray *_textBlockViews;
    NSMutableArray *_iconBlockViews;
    UIView *_topSeperatorLine;
    double _leftShiftStartX;
    long long _seperatorLineStyle;
    UIView *_bottomLine;
}

@property(readonly, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) long long seperatorLineStyle; // @synthesize seperatorLineStyle=_seperatorLineStyle;
@property(nonatomic) double leftShiftStartX; // @synthesize leftShiftStartX=_leftShiftStartX;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)heightOfView;
- (void)buildSubViews;
- (id)initWithItems:(id)arg1;

@end
