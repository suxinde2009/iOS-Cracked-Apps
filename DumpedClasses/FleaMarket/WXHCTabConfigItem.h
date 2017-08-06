//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, UIColor;

@interface WXHCTabConfigItem : TBJSONModel
{
    NSString *_naviCenterText;
    NSString *_naviCenterImg;
    NSString *_naviCenterBase64Img;
    NSString *_naviCenterClickURL;
    NSString *_naviCenterUt;
    NSString *_naviRightImg;
    NSString *_naviRightClickURL;
    NSString *_naviRightUt;
    NSString *_naviBarBgColor;
    UIColor *_naviBarBgColorObj;
    NSString *_naviBtnColor;
    UIColor *_naviBtnColorObj;
    NSString *_naviCenterTextColor;
    UIColor *_naviCenterTextColorObj;
    NSString *_naviBottomColor;
    UIColor *_naviBottomColorObj;
    NSString *_pageUt;
    NSString *_pageSpm;
    NSString *_tmBadgeBgColor;
    NSString *_tmBadgeTextColor;
}

@property(retain, nonatomic) NSString *tmBadgeTextColor; // @synthesize tmBadgeTextColor=_tmBadgeTextColor;
@property(retain, nonatomic) NSString *tmBadgeBgColor; // @synthesize tmBadgeBgColor=_tmBadgeBgColor;
@property(retain, nonatomic) NSString *pageSpm; // @synthesize pageSpm=_pageSpm;
@property(retain, nonatomic) NSString *pageUt; // @synthesize pageUt=_pageUt;
@property(retain, nonatomic) UIColor *naviBottomColorObj; // @synthesize naviBottomColorObj=_naviBottomColorObj;
@property(retain, nonatomic) NSString *naviBottomColor; // @synthesize naviBottomColor=_naviBottomColor;
@property(retain, nonatomic) UIColor *naviCenterTextColorObj; // @synthesize naviCenterTextColorObj=_naviCenterTextColorObj;
@property(retain, nonatomic) NSString *naviCenterTextColor; // @synthesize naviCenterTextColor=_naviCenterTextColor;
@property(retain, nonatomic) UIColor *naviBtnColorObj; // @synthesize naviBtnColorObj=_naviBtnColorObj;
@property(retain, nonatomic) NSString *naviBtnColor; // @synthesize naviBtnColor=_naviBtnColor;
@property(retain, nonatomic) UIColor *naviBarBgColorObj; // @synthesize naviBarBgColorObj=_naviBarBgColorObj;
@property(retain, nonatomic) NSString *naviBarBgColor; // @synthesize naviBarBgColor=_naviBarBgColor;
@property(retain, nonatomic) NSString *naviRightUt; // @synthesize naviRightUt=_naviRightUt;
@property(retain, nonatomic) NSString *naviRightClickURL; // @synthesize naviRightClickURL=_naviRightClickURL;
@property(retain, nonatomic) NSString *naviRightImg; // @synthesize naviRightImg=_naviRightImg;
@property(retain, nonatomic) NSString *naviCenterUt; // @synthesize naviCenterUt=_naviCenterUt;
@property(retain, nonatomic) NSString *naviCenterClickURL; // @synthesize naviCenterClickURL=_naviCenterClickURL;
@property(retain, nonatomic) NSString *naviCenterBase64Img; // @synthesize naviCenterBase64Img=_naviCenterBase64Img;
@property(retain, nonatomic) NSString *naviCenterImg; // @synthesize naviCenterImg=_naviCenterImg;
@property(retain, nonatomic) NSString *naviCenterText; // @synthesize naviCenterText=_naviCenterText;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
