//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeLabel, KTVDayMVPInfo, UIImageView;

@interface KTVExcellentOpusView : UIView
{
    UIImageView *_headImageView;
    KGThemeLabel *_opusNameLabel;
    KGThemeLabel *_singerNameLabel;
    KGThemeLabel *_supperRateLabel;
    KTVDayMVPInfo *_info;
}

@property(retain, nonatomic) KTVDayMVPInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) KGThemeLabel *supperRateLabel; // @synthesize supperRateLabel=_supperRateLabel;
@property(retain, nonatomic) KGThemeLabel *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(retain, nonatomic) KGThemeLabel *opusNameLabel; // @synthesize opusNameLabel=_opusNameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

